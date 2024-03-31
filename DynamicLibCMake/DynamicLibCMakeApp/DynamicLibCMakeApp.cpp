#include <iostream>
#include "DynamicLibCMake/leaver.h"

int main() {
    setlocale(LC_ALL, "Russian");
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;

    Leaver leaver;
    std::cout << leaver.leave(name) << std::endl;

    return 0;
}
