#include <iostream>
#include <windows.h>
#include "Leaver.h"

int main() {
    SetConsoleOutputCP(65001);
    std::locale::global(std::locale(""));
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;

    Leaver leaver;
    std::cout << leaver.leave(name) << std::endl;

    return 0;
}
