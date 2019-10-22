#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
//This function will return bill amount for a regular customer;
double regularBill(double minutes)
{
    double cost;
    //if total spent time is less than equal 50 minutes then it's free of cost, only regular bill cost have to pay
    if(minutes <= 50)
        minutes = 0;
    else    //else first 50 minutes is free and after 50 minutes for each minute 0.2 will be charged;
        minutes -= 50;
    cost = 10 + minutes * 0.20;
    return cost;    //return regular bill cost;
}
//This function will return bill amount for a premimum customer;
double premiumBill(double minDay, double minNight)
{
    double cost,costDay,costNight;
    //if total time spent in day is less than equal 75 minutes than it's free of cost
    //only premimum bill charge have to pay;
    if (minDay <= 75)
        minDay = 0;
    else    //else first 75 minutes is free and after 75 minutes for each minute 0.1 will be charged;
        minDay -= 75;
    costDay = 0.10 * minDay;
    //if total time spent in night is less than equal 100 minutes than it's free of cost
    //only premimum bill charge have to pay;
    if (minNight <= 100)
        minNight = 0;
    else    //else first 100 minutes is free and after 75 minutes for each minute 0.05 will be charged;
        minNight -= 100;
    costNight = 0.05 * minNight;
    cost = 25 + costDay + costNight;
    return cost;    //return premimum bill cost;
}
int main()
{
    char service;
    long long int accnum;
    double cost;
    cout << "Enter account number:: ";
    cin >> accnum;  //account number of the customer;
    cout << "Enter ('r' or 'R') for regular service or ('p' or 'P') for premium service:: ";
    cin >> service; //type of the customer;
    cout << fixed << showpoint << setprecision(2);
    //'if' condition will execute is the customer is regular;
    if (service == 'r' || service == 'R')
    {
        double minutes;
        cout << "Enter the number of minutes used:: ";
        cin >> minutes; //total no minutes the customer spent;
        cost = regularBill(minutes);
        cout << "Cost: $ " << cost << endl;
    }
    //'else if' condition will execute if the customer is premimum;
    else if (service == 'p' || service == 'P')
    {
        double minDay, minNight;
        double costDay, costNight;
        cout << "Enter the number of minutes used at day and at night (separated by spaces):: ";
        cin >> minDay >> minNight;  //total no of minutes the customer spent in day and night;
        cost = premiumBill(minDay, minNight);
        cout << "Cost: $ " << cost << endl;
    }
    //this code will execute for wrong key press;
    else
        cout << "Incorrect input. Try again later::" << endl;
    return 0;
}
