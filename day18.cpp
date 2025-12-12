#include <iostream>
using namespace std;
int main(){
    float P;
    float R;
    float T;
    cout<<"Enter the Principle amount = ";
    cin>>P;
    cout<<"Enter the Intrest amount = ";
    cin>>R;
    cout<<"Enter the Time amount = ";
    cin>>T;
    float SI;
    SI = (P*R*T)/100;
    cout<<"The Simple intrest is = "<<SI;

}