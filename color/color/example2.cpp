#include <iostream>
#include <string>
#include <Windows.h>
#include "color.h"

int r;
int g;
int b;

auto main() -> int {
	SetConsoleTitle(L"rgba console");
	std::cin >> r;
	std::cin >> g;
	std::cin >> b;
	std::cout << color(r, g, b) << "Colored World" << ~color() << std::endl;
}
