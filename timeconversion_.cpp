//C++ program to convert 24 hours time to 12 hours time format
#include<iostream>
#include<cstring>

using namespace std;

//defining class for 24 hour format time
class timeForm24
{
   private:
      int hour, minute, second;
   public:
      timeForm24()
      {
         hour = 0;
         minute = 0;
         second = 0;
      }

      timeForm24(int hrs, int mins, int sec)
      {
         hour = hrs;
         minute = mins;
         second = sec;
      }

      int returnHour(){return hour;}
      int returnMinute(){return minute;}
      int returnSecond(){return second;}
      void display()
      {
         cout << hour << ":" << minute << ":" << second;
      }
};

//class for 12 hour format time
class timeForm12
{
   private:
      int hour, minute, second;
      bool pm;
   public:
      timeForm12()
      {
         hour = 0;
         minute = 0;
         second = 0;
      }

      timeForm12(int hrs, int mins, int sec, char *t)
      {
         hour = hrs;
         minute = mins;
         second = sec;
         if(strcmp(strupr(t),"PM")==0)
            pm = 1;
         else
            pm = 0;
      }
   //time conversion
   timeForm12(timeForm24 time)
   {
      hour = time.returnHour()%12;
      minute = time.returnMinute();
      second = time.returnSecond();
      pm = static_cast<bool>(time.returnHour()/12);
   }
   //operator function for time conversion
   operator timeForm24()
   {
      int hrs = pm ? hour + 12 : hour;
      int mins = minute;
      int sec = second;
      return timeForm24(hrs, mins, sec);
   }

   void display()
   {
      cout << hour << ":" << minute << ":" << second << " " << (pm?"PM":"AM") << endl;
   }
};

int main()
{
   timeForm24 time24(14, 30, 44); //creating and assigning value to the object time 24 of class timeForm24
   timeForm12 time12; //creating time12 object of class timeForm12
   time12 = time24; //assigns time12 object to time12 object

   cout << "24 hour time format: ";
   time24.display();
   cout << "\nEquivalent 12 hour time: ";
   time12.display();

   timeForm12 t12(4, 30, 12, "PM");
   timeForm24 t24;
   t24 = t12;
   cout << "\n12 hour time format: ";
   t12.display();
   cout << "Equivalent 24 hour time: ";
   t24.display();
   cout << "\n";
   return 0;
}
