//23070123014 Akshit Mathur 
//Aim: to find the character is vowel or consonant
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter the character:"<<endl;
    cin>>ch;
    if (ch == 'a'||ch == 'A'||ch == 'e'||ch == 'E'||ch == 'i'||ch == 'I'||ch == 'o'||ch == 'O'||
        ch == 'u'||ch == 'U'){
        cout<< ch <<"Character is vowel"<<endl;
        }
    
    else{
        cout<< ch <<"Character is consonant"<<endl;
    }
    return 0;
}
//output
//Enter the character:
//a
//a Character is vowel
