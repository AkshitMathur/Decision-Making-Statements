// 23070123014 AKSHIT MATHUR EXP 3(C)
#include <iostream>
using namespace std;
int main() {
    int s1,s2,s3,s4,s5,avg;
    cout<<"enter  the s1 marks:"<<endl;
    cin>>s1;
    cout<<"enter  the s2 marks:"<<endl;
    cin>>s2;
    cout<<"enter  the s3 marks:"<<endl;
    cin>>s3;
    cout<<"enter  the s4 marks:"<<endl;
    cin>>s4;
    cout<<"enter  the s5 marks:"<<endl;
    cin>>s5;
    avg=(s1+s2+s3+s4+s5)/5;
    if (avg >= 90 and avg<100){
        cout<<"Your Grade is O"<<endl;
    }
    else if (avg>=80 and avg<=89){
         cout<<"Your Grade is A+"<<endl;
    }
    else if (avg>=70 and avg<=79){
        cout<<"Your Grade is A"<<endl;
    }
    else if (avg>=60 and avg<=69){
        cout<<"Your Grade is B+"<<endl;
    }
    else if (avg>=50 and avg<=59){
        cout<<"Your Grade is B"<<endl;
    }
    else if (avg>=40 and avg<=49){
        cout<<"Your Grade is C"<<endl;
    }
else{
        cout<<"Your Grade is F"<<endl;
    }
    return 0;
}
//output
//enter  the s1 marks:
//90
//enter  the s2 marks:
//85
//enter  the s3 marks:
//65
//enter  the s4 marks:
//75
//enter  the s5 marks:
//85
//Your Grade is A+
