/*
During the tax season, every Friday, J&J accounting firm provides assistance
to people who prepare their own tax returns. Their charges are as follows.

a. If a person has low income (<= 25,000) and the consulting time is less
than or equal to 30 minutes, there are no charges; otherwise, the service
charges are 40% of the regular hourly rate for the time over 30 minutes.

b. For others, if the consulting time is less than or equal to 20 minutes, there
are no service charges; otherwise, service charges are 70% of the regular
hourly rate for the time over 20 minutes.

(For example, suppose that a person has low income and spent 1 hour and 15 minutes, and
the hourly rate is $70.00. Then the billing amount is 70.00 x 0.40 x (45 / 60) = $21.00.)
Write a program that prompts the user to enter the hourly rate, the total consulting time,
and whether the person has low income. The program should output the billing amount.

Your program must contain a function that takes as input the hourly rate, the total
consulting time, and a value indicating whether the person has low income. The function
should return the billing amount. Your program may prompt the user to enter the
consulting time in minutes.

You may name the program as you please, for example, "TaxReturns.cpp"

Please make sure the program compiles and runs as it should!
*/
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