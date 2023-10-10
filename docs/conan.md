# Little workaround

## Installation

### Linux
    $> sudo apt-get update
    $> sudo apt-get install python3-pip
    $> pip install conan

### Windows
    $> go to https://www.python.org/ftp/python/3.11.5/python-3.11.5-amd64.exe and download python for windows
    $> pip install conan


## Setup
You can create a profile automatically with conan using
    ```$> conan profile detect --force```

## Launch
Install dependencies specified in conanfile.txt
    
    $> conan install . --output-folder=build --build=missing

## Compilation On:
    $> cd build/ (a folder named build/ is generated after the previous command)

### Linux
    $> conan install . --output-folder build --build=missing
    $> cd build
    $> source conanbuild.sh
    $> cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
    $> cmake --build .

### Windows
    $> conan install . --output-folder=build --build=missing
    $> cd build
    $> conanbuild.bat
    $> cmake .. -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
    $> cmake --build . --config Release