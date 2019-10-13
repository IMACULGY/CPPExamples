/* 
Is Character a Vowel Program #18

Write a value-returning function, isVowel, that returns the value true if a
given character is a vowel and otherwise returns false.

You may name the program as you please, for example, "VowelChecker.cpp"

Please make sure the program compiles and runs as it should!
*/

#include <iostream>
using namespace std;

bool isVowel(char c);

int main(){
    char ch, up;
    bool vowel;
    
    cout << "Please enter a character: ";
    cin >> ch;
    
    //checks if character is alphabetic, then converts it to uppercase and calls isVowel function
    if(isalpha(ch)){
        up = toupper(ch);
        vowel = isVowel(up);
    }
    
    cout << (vowel? "true": "false");


    return 0;
}

//takes user-input character and checks if it is in list of vowels
bool isVowel(char c){
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return true;
    }
 return false;
}
