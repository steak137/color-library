/*
	https://github.com/steak137
	dev: watan beck
*/

#ifndef __COLOR_H__
#include <fstream>
#include <format.h>

class color {
public:
	color(int r, int g, int b) : r_(r), g_(g), b_(b) {}
	friend std::ostream& operator<<(std::ostream& os, const color& color) {
		return os << std::format("\x1B[38;2;{};{};{}m", color.r_, color.g_, color.b_);
	}
	~color() {}
	friend std::ostream& operator<<(std::ostream& os) {
		return os << std::::format("\x1B[38;2;255;255;255m");
	}
private:
	int r_, g_, b_;
};

#endif __COLOR_H__
