FROM ubuntu:22.04

WORKDIR /B-CPP-500-COT-5-1-rtype-aman.menda

RUN apt-get update && apt-get -qq -y install gcc g++ cmake curl wget pkg-config libtool
RUN apt-get -y install python3
RUN apt-get -y install python3-pip
RUN pip3 install conan

COPY . .

RUN conan profile detect --force
RUN ls
RUN conan install . --output-folder=build --build=missing
RUN echo "*** Compilation using Docker ***" && cd build/ && chmod +x conanbuild.sh && ./conanbuild.sh && \
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release \
&& cmake --build .

EXPOSE 4242

CMD ./r-type-server

# Build an image using: `sudo docker build -t "rtype:Dockerfile" .`