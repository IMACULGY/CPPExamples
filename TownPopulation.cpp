/*
The population of a town A is less than the population of town B.

However, the population of town A is growing faster than the population of town B. Write a program that prompts the user to enter the

population and growth rate of each town. The program outputs after
how many years the population of town A will be greater than or equal
to the population of town B and the populations of both the towns at
that time. (A sample input is: Population of town A = 5000, growth
rate of town A = 4%, population of town B = 8000, and growth rate of
town B = 2%.)

You may name the program as you please, for example, "TownPopulation.cpp"

Please make sure the program compiles and runs as it should!
*/

#include<iostream>
#include<vector>

using namespace std;


vector<float> year_to_overtake(float pop_A, float pop_B, float growth_A, float growth_B)
{
	// calculate how many years it takes
	vector<float> result;
	float years = 0;
	if (pop_A > pop_B)
	{
		if (growth_A > growth_B)
		{
			result.push_back(-1);
			result.push_back(pop_A);
			result.push_back(pop_B);
			return result;
		}
		while(pop_A > pop_B)
		{
			years ++;
			pop_A = pop_A * growth_A + pop_A;
			pop_B = pop_B * growth_B + pop_B;
		}
	} else if (pop_B > pop_A) {
		if (growth_B > growth_A)
		{
			result.push_back(-1);
			result.push_back(pop_A);
			result.push_back(pop_B);
			return result;
		}
		while(pop_B > pop_A)
		{
			years ++;
			pop_A = pop_A * growth_A + pop_A;
			pop_B = pop_B * growth_B + pop_B;
		}
	} else if (pop_B == pop_A){
			result.push_back(0);
			result.push_back(pop_A);
			result.push_back(pop_B);
			return result;
	}
	result.push_back(years);
	result.push_back(pop_A);
	result.push_back(pop_B);

	return result;
}


void print_output(vector<float> result)
{
	// get output
	if (result[0] == -1)
	{
		cout << "The city will never be the same size" << endl;
	} else if(result[0] == 0) {
		cout << endl; 
	} else {
		cout << result[0] << " years" << endl;
	}

	cout << "City A has the following size: " << int(result[1]) << endl;
	cout << "City B has the following size: " << int(result[1]) << endl;

}

int main ()
{
	// get input
	float pop_A;
	cout << "What is the population of town A?" << endl;
	cin >> pop_A;
	float pop_B;
	cout << "What is the population of town B?" << endl;
	cin >> pop_B;
	float growth_A;
	cout << "What is the growth rate of town A?" << endl;
	cin >> growth_A;
	float growth_B;
	cout << "What is the growth rate of town B?" << endl;
	cin >> growth_B;

	vector<float> res = year_to_overtake(pop_A, pop_B, growth_A, growth_B);
	
	// display output
	if (pop_A == pop_B)
		cout << "A and B have already the same size";
	else if (pop_A > pop_B)
		cout << "For B to reach the same size as A: ";
	else
		cout << "For A to reach the same size as B: ";
	print_output(res);

}