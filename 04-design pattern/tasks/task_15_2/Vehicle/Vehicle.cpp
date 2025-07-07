/**
 * @file Vehicle.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-05-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "Vehicle.h"

/**
 * @brief Construct a new Vehicle:: Vehicle object
 * 
 * @param strategy 
 */
Vehicle::Vehicle(IStrategy* strategy) : strategy_(strategy) {

}

/**
 * @brief Destroy the Vehicle:: Vehicle object
 * 
 */
Vehicle::~Vehicle() {
    delete strategy_;
}

/**
 * @brief 
 * 
 */
void Vehicle::VehicleSpeed() const {
    strategy_->calculateSpeed();
}