/**
 * @file Task_8_2.cpp
 * @author ziad mohammed fathy
 * @brief C++ program to sort an array of integers in ascending order using function pointers. 
 *        Allow the user to choose between different sorting algorithms (e.g., bubblesort, selection sort) 
 *        using function pointers.
 * @version 0.1
 * @date 2025-03-28
 */

#include <iostream>

void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void printArray(int arr[], int size);

int main () {
    int num;
    std::cout << "Enter the number of elements: ";
    std::cin >> num;

    int arr[num];
    std::cout << "Enter " << num << " integers: ";
    for (int i = 0; i < num; ++i) {
        std::cin >> arr[i];
    }

    int choice;
    std::cout << "Choose a sorting algorithm:\n";
    std::cout << "1. Bubble Sort\n";
    std::cout << "2. Selection Sort\n";
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;

    void (*ptr_function)(int[], int) = nullptr;
    
    if (choice == 1) {
        ptr_function = bubbleSort;
    } 
    
    else if (choice == 2) {
        ptr_function = selectionSort;
    }
    
    else {
        std::cout << "Invalid choice!\n";
        return 1;
    }

    ptr_function(arr, num);

    std::cout << "Sorted array: ";
    printArray(arr, num);

    return 0;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}