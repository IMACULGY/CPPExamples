#include<iostream>

using namespace std;

int main()

{
	// get hourly rate, vondulting time and the income
	int hour_rate, consulting_time, income;
	cout << "What are the hourly rates?"<< endl;
	cin >> hour_rate;
	cout << "What was the total consulting time [in min]?"<< endl;
	cin >> consulting_time;
	cout << "What is your income?"<< endl;
	cin >> income;
	float tax_to_pay;

	// for low income
	if (income <= 25000){
		cout << "You have a low income :("<< endl;
		if (consulting_time <= 30) {
			tax_to_pay = 0;
		} else {
		int time_charge = consulting_time - 30;
		float pay_rate = 0.4;
		tax_to_pay = hour_rate * pay_rate * time_charge/60;
		}
	// for high income
	} else if (income > 25000) {
		cout << "You have a high income :)"<< endl;
		if (consulting_time <=20) {
			tax_to_pay = 0;
		} else {
		int time_charge = consulting_time - 20;
		float pay_rate = 0.7;
		tax_to_pay = hour_rate * pay_rate * time_charge/60;
		}
	}
	// display the tax amount due, and return it afterwards
	cout << "You have to pay " << tax_to_pay << "$"<< endl;
    return tax_to_pay;

}