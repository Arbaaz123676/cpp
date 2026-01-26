#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int &b = a;
    b = 25;
    cout<<a<<endl;
    cout<<&b<<endl;
    cout<<b<<endl;
}