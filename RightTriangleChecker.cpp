/*In a right triangle, the square of the length of one side is equal to the sum of
the squares of the lengths of the other two sides. Write a program that
prompts the user to enter the lengths of three sides of a triangle and then
outputs a message indicating whether the triangle is a right triangle.

You may name the program as you please, for example, "RightTriangleChecker.cpp"*/

#include <iostream>
typedef long long int ll; 										//to avoid overflow
ll a, b, c;														//globally declared

void input(){													//for input
	std::cout << "Enter the lengths of the three sides:\n";
	std::cin >> a >> b >> c;
}

bool check(){													//returns true if a, b, c provide a right-angled triangle 
	if (a <= 0 || b <= 0 || c <= 0 || c >= (a + b) || b >= (a + c) || a >= (b + c)){							//for cases that do not agree to definition of a triangle
		std::cout<<"\nInvalid Data Entry";
		return false;
	}
	if ( ((a * a) == ( b * b + c * c)) || ((b * b) == ( a * a + c * c)) || ((c * c) == ( a * a + b * b))){		//for valid cases following Pythagoras' theorem
		return true;
	}
	return false;
}

void print(){													//print the expected output
	if (check()){
		std::cout<<"\nThe triangle is a right-angled triangle";
	}
	else{
		std::cout<<"\nNo right-angled triangle could be obtained";
	}
}

int main(){														//for program to normally function
	input();
	print();
	return 0;
}
