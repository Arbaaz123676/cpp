#include <iostream>
using namespace std;
int sum(int a, int b);
int sum(double a, double b);
int sum(int a, int b, int c);
int main(){
    int a;
    cout<<"Enter the number = ";
    cin>>a;
    int b;
    cout<<"Enter the number 2 = ";
    cin>>b;
    sum(a,b);
    sum(a,b);
    sum(a,b);
    return 0;

}