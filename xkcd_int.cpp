#include "xkcd_int.hpp"
#include <random>
#include <string>
#include <iostream>

using namespace std;

int xkcd_int::randrange(int start, int end) {
	std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(start,end);
    return dist(rng);
}

int xkcd_int::rand_op(int number) {
    int num = xkcd_int::randrange(40,50);
    int choice = xkcd_int::randrange(0,1);
	if (choice == 0) {
		return number + num;
	}
	else {
		return number - num;
	}
}

string xkcd_int::to_string() {
	return std::to_string(this->number);
}

xkcd_int::xkcd_int() {
	this->number = 0;
}

xkcd_int::xkcd_int(int num) {
	this->number = num;
}

xkcd_int xkcd_int::operator = (const xkcd_int& that) {
		if (this == &that) {return *this;}
		this->number = xkcd_int::rand_op(that.number);
		return *this;
}

xkcd_int operator + (xkcd_int a, xkcd_int b) {
	return xkcd_int::rand_op(a.number + b.number);
}

xkcd_int operator - (xkcd_int a, xkcd_int b) {
	return xkcd_int::rand_op(a.number - b.number);
}

xkcd_int operator * (xkcd_int a, xkcd_int b) {
	return xkcd_int::rand_op(a.number * b.number);
}

xkcd_int operator / (xkcd_int a, xkcd_int b) {
	return xkcd_int::rand_op(a.number / b.number);
}
