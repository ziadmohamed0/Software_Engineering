/**
 * @file main.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-05-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include "IStrategy/IStrategy.h"
#include "StrategyBMW/StrategyBMW.h"
#include "StrategyMini/StrategyMini.h"
#include "Vehicle/Vehicle.h"

int main (void) {
    Vehicle bmwVehicle(new StrategyBMW());
    Vehicle miniVehicle(new StrategyMini());

    std::cout << "--------------------------------\n";
    std::cout << "BMW Vehicle Speed Calculation: ";
    bmwVehicle.VehicleSpeed();
    
    std::cout << "--------------------------------\n";
    std::cout << "Mini Cooper Vehicle Speed Calculation: ";
    miniVehicle.VehicleSpeed();
    return 0;
}