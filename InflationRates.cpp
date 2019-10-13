/*
Write a program that outputs inflation rates for two successive years and
whether the inflation is increasing or decreasing. Ask the user to input the
current price of an item and its price one year and two years ago. To
calculate the inflation rate for a year, subtract the price of the item for that
year from the price of the item one year ago and then divide the result by
the price a year ago. Your program must contain at least the following
functions: a function to get the input, a function to calculate the results, and
a function to output the results. Use appropriate parameters to pass the
information in and out of the function. Do not use any global variables.

You may name the program as you please, for example, "InflationRates.cpp"

Please make sure the program compiles and runs as it should!
*/

#include<iostream>
#include<vector>

using namespace std;



vector<int> current_price(){
	// get the requiered prices
	vector<int> res;
	int tmp;
	cout << "What is the current price?" << endl;
	cin >> tmp;
	res.push_back(tmp);
	cout << "What was the price one year ago?" << endl;
	cin >> tmp;
	res.push_back(tmp);
	cout << "What was the price two years ago?" << endl;
	cin >> tmp;
	res.push_back(tmp);
	return res;
}

vector<float> inflation_rate(vector<int> prices){
	// calculate the inflation rate
	vector<float> inf_rate;
	for (int i=0; i < prices.size() - 1; i++)
	{
		float temp;
		temp = (prices[i] - prices[i+1])/static_cast<float>(prices[i+1]);
		inf_rate.push_back(temp);

	}
	return inf_rate;
}

void display_inflation_rate(vector<float> rates)
{
	// display the inflation rates
	cout << "The infations rate are (from most recent to oldest):" << endl;;
	for (const auto i:rates)
		cout << ' ' << i;
	cout << endl;
}

int main()
{
	// conbine all the functions called above
	vector<int> price = {};
	vector<float> inf_rate = {};
	price = current_price();
	inf_rate = inflation_rate(price);
	display_inflation_rate(inf_rate);
}