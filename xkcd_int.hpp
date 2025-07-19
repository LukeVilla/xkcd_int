#ifndef __XKCDI_INCLUDED__
#define __XKCDI_INCLUDED__

#include <string>

class xkcd_int {
	private:
		int number;
		static int rand_op(int num);
		static int randrange(int start, int end);
	public:
		xkcd_int();
		xkcd_int(int num);
		
		std::string to_string();
		
		xkcd_int operator=(const xkcd_int& that);
		
		friend xkcd_int operator+(xkcd_int a, xkcd_int b);
		friend xkcd_int operator-(xkcd_int a, xkcd_int b);
		friend xkcd_int operator*(xkcd_int a, xkcd_int b);
		friend xkcd_int operator/(xkcd_int a, xkcd_int b);
};

xkcd_int operator+(xkcd_int a, xkcd_int b);
xkcd_int operator-(xkcd_int a, xkcd_int b);
xkcd_int operator*(xkcd_int a, xkcd_int b);
xkcd_int operator/(xkcd_int a, xkcd_int b);

#endif
