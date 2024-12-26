#include "sdt.h"
#include <iostream>

// Эта программа является учебной
int main() {
    int num1, num2;
    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;

    // Печать разности чисел
    std::cout << "Разность чисел: " << num1 - num2 << std::endl;

    return 0;
}
