cmake_minimum_required(VERSION 3.24)
# change this to your version

project(sfml_test)
# change to your project folder name

set(CMAKE_CXX_STANDARD 14)

add_executable(sfml_test main.cpp)
# change to your project folder name and source code

set(SFML_STATIC_LIBRARIES TRUE)

set(SFML_DIR C:/Z_Dev/SFML-2.6.1/include/SFML)
# set the directory where you have SFML

set(SFML_DIR C:/Z_Dev/SFML-2.6.1/lib/cmake/SFML)
# fix error with finding cmakeConfig - and set to where you have SFML

set(CMAKE_EXE_LINKER_FLAGS "-static")
# fixes "libstdc++-6.dll is missing" error

find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/Z_Dev/SFML-2.6.1/include/SFML)
# set directory to where you have SFML

target_link_libraries(sfml_test sfml-system sfml-window sfml-graphics sfml-audio)
# change the first item in this is to ur project name