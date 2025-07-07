/**
 * @file StrategyBMW.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-05-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef _STRATEGY_BWM_H_
#define _STRATEGY_BWM_H_

#include "../IStrategy/IStrategy.h"

class StrategyBMW : public IStrategy{
    public:
        virtual void calculateSpeed() const override;
    private:

};

#endif