/*
Write a function, reverseDigit, that takes an integer as a parameter and returns the number with its digits reversed. For example, the value of reverseDigit(12345) is 54321; the value of reverseDigit(5600) is 65; the value of reverseDigit(7008) is 8007; and the value of reverseDigit(-532) is -235.

You may name the program as you please, for example, "DigitReverser.cpp"

Please make sure the program compiles and runs as it should!
*/

#include<iostream>

using namespace std;


int swap_digit(int x)
{
	static int revers = 0;
	static int base = 1;

	if (x > 0){
		swap_digit(x/10);
		revers += (x%10)*base;
		base *= 10;
	}
	return revers;
}

int swap_negativ_digits(int x)
{
	int res;
	if (x < 0){
		x = x*(-1);
		res = swap_digit(x);
		res = res*(-1);
	} else if (x == 0){
		res = 0;
	} else if (x > 0){
		res = swap_digit(x);
	}
	return res;
}


int main ()
{
	int res = swap_negativ_digits(-12000);
	cout << res;
}