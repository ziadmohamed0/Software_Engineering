cmake_minimum_required(VERSION 3.10)
project(TASK_12_1)

set(SRC 
    main.cpp
    includes/Professor/Professor.cpp
    includes/Student/Student.cpp   
)

include_directories(
    includes/Student/
    includes/Professor/
    includes/Student/
)

add_executable(${PROJECT_NAME} ${SRC})
