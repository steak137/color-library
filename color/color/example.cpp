#include <iostream>
#include <string>
#include <Windows.h>
#include "color.h"

auto main() -> int {
	SetConsoleTitle(L"rgba console");
	std::string a;
	std::cout << color(123, 231, 174) << "deneme" << color(255, 255, 255) << std::endl;
	std::cin >> a;
}