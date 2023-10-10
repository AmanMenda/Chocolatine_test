# How to run our project

In this section, we'll talk about how to compile our project on Linux / Windows.
Since we are using `CMake` as build system, here are the steps to compile on `Linux`:

    $> mkdir build && cd build/
    $> cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
    $> cmake --build .

On `Windows`:

    $> mkdir build && cd build/
    $> cmake .. -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release
    $> cmake --build .