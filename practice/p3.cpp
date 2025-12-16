#include <iostream>
using namespace std;
int main(){
    float a;
    float b;
    float c;

    cout<<"Enter the price of a pencil = ";
    cin>>a;
    cout<<"Enter the price of a pen = ";
    cin>>b;
    cout<<"Enter the price of an eraser = ";
    cin>>c;
    float x=a+18/100;
    float y=b+18/100;
    float z=c+18/100;
    float Tp;
    Tp = x+y+z ;
    cout<<"Your total bill is = "<<Tp<<endl;
    return 0;
}