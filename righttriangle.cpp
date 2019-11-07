//#23 is right triangle program
#include <bits/stdc++.h> 
using namespace std; 

bool Triplets(long long a, long long b, long long c) 
{ 
	if (a <= 0 || b <= 0 || c <= 0) 
		return false; 

	vector<long long> vec{ a, b, c }; 
	sort(vec.begin(), vec.end()); 

	// Re-initialize a, b, c in ascending order 
	a = vec[0], b = vec[1], c = vec[2]; 

	// Check validation of sides of triangle 
	if (a + b <= c) 
		return false; 

	long long p1 = a, p2 = c - b; 

	// Reduce fraction to simplified form 
	long long div = __gcd(p1, p2); 
	p1 /= div, p2 /= div; 

	long long q1 = c + b, q2 = a; 

	// Reduce fraction to simplified form 
	div = __gcd(q1, q2); 
	q1 /= div, q2 /= div; 

	// If fraction are equal return 
	// 'true' else 'false' 
	return (p1 == q1 && p2 == q2); 
} 

 
string checkTriplet(long long a, long long b, long long c) 
{ 
	if (Triplets(a, b, c)) 
		return "Yes,its a right angled triangle"; 
	else
		return "No,its not a right triangle"; 
} 

 
int main()
{ 
	long long a,b,c;
    cout<<"Enter three sides:";
    cin>>a>>b>>c;  
	cout << checkTriplet(a, b, c) << endl; 
	return 0; 
} 
