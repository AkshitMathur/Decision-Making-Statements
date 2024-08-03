//23070123014 Akshit Mathur 
#include <iostream>
using namespace std;
int main() {
    int num1,num2,num3;
    cout<<"Enter the number1:"<<endl;
    cin>>num1;
    cout<<"Enter the number2:"<<endl;
    cin>>num2;
    cout<<"Enter the number3:"<<endl;
    cin>>num3;
    if (num1>num2 && num1>num3){
        cout<<"the number1 is Larger"<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<"The number2 is larger"<<endl;
    }
    else{
        cout<<"The number3 is larger"<<endl;
    }
    return 0;
}
//output
//Enter the number1:
//5
//Enter the number2:
//4
//Enter the number3:
//3
//the number1 is Larger

//Enter the number1:
//3
//Enter the number2:
//2
//Enter the number3:
//6
//The number3 is larger

//Enter the number1:
//2
//Enter the number2:
//5
//Enter the number3:
//3
//The number2 is larger
