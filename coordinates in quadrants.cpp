// 23070123014 AKSHIT MATHUR
#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"enter  the x cordinate:"<<endl;
    cin>>x;
    cout<<"enter  the y cordinate:"<<endl;
    cin>>y;
    if (x > 0 and y>0) {
            cout<<"it is in first quadrant"<<endl;
    }
    else if (x<0 and y>0) {
         cout<<"it is in second quadrant"<<endl;
    }
    else if (x<0 and y<0) {
        cout<<"it is in third quadrant"<<endl;
    }
    else if (x>0 and y<0) {
        cout<<"it is in fourth quadrant"<<endl;
    }
    else{
        cout<<"it is on origin"<<endl;
    }
    return 0;
}
//output
//enter  the x cordinate:
//2
//enter  the y cordinate:
//1
//it is in first quadrant
//enter  the x cordinate:
//-1
//enter  the y cordinate:
//2
//it is in second quadrant
//enter  the x cordinate:
//-3
//enter  the y cordinate:
//-2
//it is in third quadrant
//enter  the x cordinate:
//2
//enter  the y cordinate:
//-2
//it is in fourth quadrant
//enter  the x cordinate:
//0
//enter  the y cordinate:
//0
//it is on origin
