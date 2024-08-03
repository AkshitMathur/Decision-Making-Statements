//23070123014 Akshit Mathur
//Aim: to perform operations using switch case
# include <iostream>
using namespace std;
int main() {
    int x;
    int num1, num2;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.division"<<endl;
    cout<<"enter the number 1-4:"<<endl;
    cin>>x;
    cout<<"enter the num1:"<<endl;
    cin>>num1;
    cout<<"enter the num2:"<<endl;
    cin>>num2;
 switch(x) {

    case 1:
      cout<<"sum of num1 and num2 is:"<<num1 + num2<<endl;
      break;

    case 2:
      cout<<"substract num1 and num2 is:"<<num1 - num2<<endl;
      break;

    case 3:
      cout<<"multiplication of num1 and num2 is:"<<num1 * num2<<endl;
      break;

    case 4:
      cout<<"division of num1 and num2 is:"<<num1 / num2<<endl;
      break;

    default:
      // If the operator is other than 1, 2, 3 or 4, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
//output
//1.Addition
//2.Subtraction
//3.multiplication
//4.division
//enter the number 1-4:
//1
//enter the num1:
//5
//enter the num2:
//7
//sum of num1 and num2 is:12
