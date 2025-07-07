/**
 * @file IStrategy.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-05-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef _ISTRATEGY_H_
#define _ISTRATEGY_H_

class IStrategy {
    public:
        IStrategy() = default;
        virtual void calculateSpeed() const = 0;
        ~IStrategy() = default;
    private:
};

#endif