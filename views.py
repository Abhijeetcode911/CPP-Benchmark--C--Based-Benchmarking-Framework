from django.http import JsonResponse
from subprocess import call, Popen, PIPE

def run_benchmark(request):
    if request.method == "POST":
        code = request.POST.get('code')
        with open('user_function.cpp', 'w') as f:
            f.write(code)
        # Compile and run the benchmark
        process = Popen(['g++', '-o', 'user_program', 'user_function.cpp', 'Main.cpp', '-std=c++17'], stdout=PIPE, stderr=PIPE)
        stdout, stderr = process.communicate()
        if process.returncode != 0:
            return JsonResponse({"error": stderr.decode()})
        result = call(['./user_program'])
        return JsonResponse({"result": result})
    return JsonResponse({"error": "Invalid request"}, status=400)
