/**
 * @file lambda.cpp
 * @author Zid mohammed fathy
 * @brief 
 * @version 0.1
 * @date 2025-03-20
 */

#include <iostream> 

void using_lambda (void (*lmbda) (int), int num_to_print) {
    lmbda(num_to_print);
}

int main(void) {
    int num = 20;
    
    auto lambda = [](int a) -> void {
        std::cout << "lambda without capture\n" << "input: " << a <<  std::endl;
    };

    using_lambda(lambda, 40);

    auto lambda_1 = [&num](int a) -> void {
        std::cout << "\nlambda within capture\ncapture: " << num << "\ninput: " << a <<  std::endl;
    };
    lambda_1(90);

    return 0;
}