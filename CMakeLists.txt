cmake_minimum_required(VERSION 3.15.7)

project(Rtype CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# sources files
# --server
set (SERVER_SOURCES main.cpp Maths/Vector2D.cpp Systems/RenderSystem.cpp
    Systems/ControllableSystem.cpp)

# --client
# set (CLIENT_SOURCES Client/main.cpp Maths/Vector2D.cpp Systems/RenderSystem.cpp
#     Systems/ControllableSystem.cpp)
set (CLIENT_SOURCES Client/main.cpp Maths/Vector2D.cpp Systems/RenderSystem.cpp
Systems/ControllableSystem.cpp)

# binary
# --server
set(SERVER_PROJECT_BINARY r-type_server)

# --client
set(CLIENT_PROJECT_BINARY r-type_client)

# include
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

# packages installed by conan
find_package(SFML REQUIRED)
find_package(Boost REQUIRED)
find_package(fmt REQUIRED)
find_package(asio REQUIRED)

# include packages linked to the dependencies installed
include_directories(${CMAKE_INCLUDE_PATH})
include_directories(${CONAN_INCLUDE_DIRS})

# executable
if (NOT WIN32)
    add_compile_options(-Wall -Wextra -g3)
endif()
    # --server
add_executable(${SERVER_PROJECT_BINARY} ${SERVER_SOURCES})

# --client
add_executable(${CLIENT_PROJECT_BINARY} ${CLIENT_SOURCES})

# move back the binary
# --server
add_custom_command(TARGET ${SERVER_PROJECT_BINARY} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${SERVER_PROJECT_BINARY}> ${PROJECT_SOURCE_DIR}
    COMMENT "Copying ${SERVER_PROJECT_BINARY} executable to project directory"
)

# --client
add_custom_command(TARGET ${CLIENT_PROJECT_BINARY} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${CLIENT_PROJECT_BINARY}> ${PROJECT_SOURCE_DIR}
    COMMENT "Copying ${CLIENT_PROJECT_BINARY} executable to project directory"
)


# link the binary to libraries
# --server
target_link_libraries(${SERVER_PROJECT_BINARY} ${SFML_LIBRARIES})
target_link_libraries(${SERVER_PROJECT_BINARY} ${BOOST_LIBRARIES})
target_link_libraries(${SERVER_PROJECT_BINARY} ${FMT_LIBRARIES})
target_link_libraries(${SERVER_PROJECT_BINARY} asio::asio)

# --client
target_link_libraries(${CLIENT_PROJECT_BINARY} ${SFML_LIBRARIES})
target_link_libraries(${CLIENT_PROJECT_BINARY} ${BOOST_LIBRARIES})
target_link_libraries(${CLIENT_PROJECT_BINARY} ${FMT_LIBRARIES})
target_link_libraries(${CLIENT_PROJECT_BINARY} asio::asio)
