#include <iostream>
#include <windows.h>  
// Функция вычисления квадрата числа 
auto square(int x) -> int { return 
    x * x; 
} 
int main() { 
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    // Униформ-инициализация 
    auto number{7}; 
    // Вызов функции 
    auto result = square(number); 
    std::cout << "Число: " << number << std::endl;
    std::cout << "Квадрат: " << result << std::endl; 
    return 0; 
} 
