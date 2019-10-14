#include <iostream>
#include <iomanip>

using namespace std;
double cost;

double regularBill()
{
    int minutes;

    cout << "Enter the number of minutes used: ";
    cin >> minutes;

    if (minutes <= 50)
      minutes = 0;
    else
      minutes -= 50;
    
    cost = 10 + minutes * 0.20;
    return cost;
}

double premiumBill()
{
    int minDay, minNight;
    double costDay, costNight;

    cout << "Enter the number of minutes used at day and at night (separated by spaces): ";
    cin >> minDay >> minNight;

    if (minDay <= 75)
      minDay = 0;
    else
      minDay -= 75;
    costDay = 0.10 * minDay;

    if (minNight <= 100)
      minNight = 0;
    else
      minNight -= 100;
    costNight = 0.05 * minNight  ;

    cost = 10 + costDay + costNight;
    
    return cost;
}
int main()
{
  char service;
  int accnum;
  cout << "Enter account number: ";
  cin >> accnum;
  cout << "Enter 'r' for regular service or 'p' for premium service: ";
  cin >> service;
  cout << fixed << showpoint << setprecision(2);

  if (service == 'r' || service == 'R')
  {
         cout << "Cost: $" << regularBill();
  }
  else if (service == 'p' || service == 'P')
  {
    cout << "Cost: $" << premiumBill();
  }
  else
    cout << "Incorrect input. Try again later.";


  return 0;
}