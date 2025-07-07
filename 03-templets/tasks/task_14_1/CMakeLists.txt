cmake_minimum_required(VERSION 3.10)
project(TAKS_1)

set(SRC
    main.cpp
    stack/stack.tpp
)

include_directories(stack data)

add_executable(${PROJECT_NAME} ${SRC})