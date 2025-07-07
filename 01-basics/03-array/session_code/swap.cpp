/**
 * @file swap.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-03-18
 */

#include <iostream>

/**
 * @brief Swap two numbers by addresses.
 */
void swap_add(int *a, int *b) {
    std::cout << "Inside swap_add (Before Swap) -> a: " << *a << ", b: " << *b << std::endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << "Inside swap_add (After Swap)  -> a: " << *a << ", b: " << *b << std::endl;
}

/**
 * @brief Swap two numbers by reference.
 */
void swap_ref(int &a, int &b) {
    std::cout << "Inside swap_ref (Before Swap) -> a: " << a << ", b: " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swap_ref (After Swap)  -> a: " << a << ", b: " << b << std::endl;
}

/**
 * @brief Swap two numbers by value.
 */
void swap_val(int a, int b) {
    std::cout << "Inside swap_val (Before Swap) -> a: " << a << ", b: " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swap_val (After Swap)  -> a: " << a << ", b: " << b << std::endl;
}

int main() {
    int x = 20, z = 30;

    std::cout << "\n--- Initial ---\n";
    std::cout << "Initial Values -> x: " << x << ", z: " << z << std::endl;

    std::cout << "\n--- Calling swap_ref() ---\n";
    swap_ref(x, z);
    std::cout << "After swap_ref() -> x: " << x << ", z: " << z << " (Values changed)\n";

    std::cout << "\n--- Calling swap_add() ---\n";
    swap_add(&x, &z);
    std::cout << "After swap_add() -> x: " << x << ", z: " << z << " (Values changed)\n";

    std::cout << "\n--- Calling swap_val() ---\n";
    swap_val(x, z);
    std::cout << "After swap_val() -> x: " << x << ", z: " << z << " (Values NOT changed)\n";

    return 0;
}
