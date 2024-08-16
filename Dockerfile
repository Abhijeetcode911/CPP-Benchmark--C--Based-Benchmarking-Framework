FROM ubuntu:latest

RUN apt-get update && apt-get install -y \
    g++ \
    python3 \
    python3-pip

COPY . /app
WORKDIR /app

RUN pip3 install django

CMD ["python3", "manage.py", "runserver", "0.0.0.0:8000"]
