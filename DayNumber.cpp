#include <iostream>
using namespace std;
bool isLeapYear(int year);
bool isLeapYear(int year)
{
    if ((year  % 4 == 0) && (year % 100 != 0))
        ((year % 100 == 0) &&(year % 400 == 0));
    {
        cout << year << " is a leap year";
        return true;
}
    return false;
}
    int main ()
    {
        int day, month, year, dayNumber;
        char ch;
        cout << "\nEnter a date(mm-dd-yyyy) : ";
        cin >> month;
        cin >> ch;
        cin >> day;
        cin >> ch;
        cin >> year;
        dayNumber = 0;

        if ((month >= 1 && month <= 12) && (day >=1 && day <= 31))
        {
            while (month > 1 && month <= 12)
                {
                        switch (month - 1)
                        {
                            case 1:
                            case 3:
                            case 5:
                            case 7:
                            case 8:
                            case 10:
                            case 12:
                                dayNumber += 31;
                                break;
                            case 4:
                            case 6:
                            case 9:
                            case 11:
                                dayNumber += 30;
                                break;
                            case 2:
                                dayNumber += 28;
                                if (isLeapYear(year))
                                    dayNumber++;
                                break;
                        }
       month--;
         }
            }
            else {
                cout << "Enter Correct month or day";
                return 0;
            }
            dayNumber += day;
            cout << "\nThe day number is " << dayNumber;
            return 0;
        }
