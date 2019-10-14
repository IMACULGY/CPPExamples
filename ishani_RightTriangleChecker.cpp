#include <iostream>
#include <cmath>

using namespace std;

/*
  max functin 
  @parm1,2,3 : the numbers from which you want to find the max 
  @return the maximum number amont those three
**/

int max(int a, int b, int c)
{

  int d = a > b ? a : b;  
  d = d > c ?  d : c;
  return d;

}

/***
  isright_triangle function 
  @return : whether the combination is a right angled triangle or not

**/

bool isright_triangle(int a, int b, int c)
{
  return pow(a,2) == pow(b,2) + pow(c,2);
}

int main(){
  int a,b,c;
  cout<< "Enter the First side:";
  cin >> a ;
  cout << "Enter the Second side:";
  cin >> b;
  cout << "Enter the Third side:";
  cin >> c;
  int d = max(a,b,c);
  bool val;
 if(d == a)
 {
  val = isright_triangle(a,b,c);
 }
 else if(d == b)
 {
  val = isright_triangle(b,a,c);
 }
 else{
  val = isright_triangle(c,b,a);
 }
 if(val)
 {
  cout << "a right angled triangle" << endl;
 }
 else
 {
  cout << "not a right triangle" << endl;
 }
return 0;
}
