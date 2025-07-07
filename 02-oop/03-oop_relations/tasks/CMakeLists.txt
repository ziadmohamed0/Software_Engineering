cmake_minimum_required(VERSION 3.10)
project(TASK_13)
set(SRC
    src/main.cpp
    src/copy.cpp
    src/page.cpp
)
include_directories(inc)
add_executable(${PROJECT_NAME} ${SRC})