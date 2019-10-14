// C++ program to check if three 
// sides form a triangle or not 
#include<bits/stdc++.h> 
using namespace std; 
  
// function to check if three sider 
// form a triangle or not 
bool checkValidity(int a, int b, int c) 
{ 
    // check condition 
    if (a + b <= c || a + c <= b || b + c <= a) 
        return false; 
    else
        return true; 
} 
  
// Driver function 
int main() 
{ 
    int a = 7, b = 10, c = 5; 
      
    if (checkValidity(a, b, c)) 
        cout << "Valid"; 
    else
        cout << "Invalid";     
} 