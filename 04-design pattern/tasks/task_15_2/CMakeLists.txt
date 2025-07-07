cmake_minimum_required(VERSION 3.10)
project(TASK_15_2)

set(SRC 
    StrategyMini/StrategyMini.cpp
    StrategyBMW/StrategyBMW.cpp
    Vehicle/Vehicle.cpp
    main.cpp
)
include_directories(StrategyMini StrategyBMW IStrategy Vehicle)

add_executable(${PROJECT_NAME} ${SRC})