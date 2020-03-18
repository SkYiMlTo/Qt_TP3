cmake_minimum_required(VERSION 3.13)
project(TP3Qt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)
add_executable(TP3Qt main.cpp fenetre.cpp fenetre.h)

target_link_libraries(TP3Qt Qt5::Widgets)