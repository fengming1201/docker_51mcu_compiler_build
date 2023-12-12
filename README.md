# docker_51mcu_compiler_build
build docker, 51mcu compiler enviroment and burn tool

images build
#docker build --no-cache  -t 139.9.186.120:8080/sdcc_compiler:v2.2 .

tag to latest version
#docker tag 139.9.186.120:8080/sdcc_compiler:v2.2  139.9.186.120:8080/sdcc_compiler:latest

push images to my own server
#docker push 139.9.186.120:8080/sdcc_compiler:v2.2

run container
#docker-compose up -d

