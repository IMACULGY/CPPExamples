#include <iostream>
using namespace std;

bool isVowel(char c){
    int isLowercaseVowel, isUppercaseVowel;
    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)   //if either the vowel is a lowercase or an uppercase
        return true;
    else
        return false;             //when the alphabet is not a vowel
}

int main()
{
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;
    bool S = isVowel(c);
    cout << S;
}
