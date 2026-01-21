#include <iostream>
using namespace std;
int main(){
    int a = 100;
    cout<<&a<<endl;//gives the address of the pointer
    cout<<*(&a)<<endl;//gives the value using the address
    //OR
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*(ptr)<<endl;
    return 0;
}