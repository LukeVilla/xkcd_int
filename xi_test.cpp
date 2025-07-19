#include "xkcd_int.cpp"
#include <iostream>

using namespace std;

int main() {
	xkcd_int xi(10);
	xkcd_int one(1);
	cout << (xi + one).to_string() << " = 10 + 1" << endl;
	cout << (xi - one).to_string() << " = 10 - 1" << endl;
	cout << (xi * one).to_string() << " = 10 * 1" << endl;
	cout << (xi / one).to_string() << " = 10 / 1" << endl;
	xi = xkcd_int(2);
	cout << (xi + one).to_string() << " = 2 + 1" << endl;
	cout << (xi - one).to_string() << " = 2 - 1" << endl;
	cout << (xi * one).to_string() << " = 2 * 1" << endl;
	cout << (xi / one).to_string() << " = 2 / 1" << endl;
	return 0;
}
