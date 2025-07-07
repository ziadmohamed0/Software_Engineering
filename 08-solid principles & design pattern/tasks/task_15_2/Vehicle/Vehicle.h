/**
 * @file Vehicle.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-05-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef _VECHILE_H_
#define _VECHILE_H_

#include "../IStrategy/IStrategy.h"

class Vehicle {
    public:
        Vehicle(IStrategy* strategy);
        ~Vehicle();
        void VehicleSpeed() const;
    private:
        IStrategy* strategy_;
};

#endif