#include <iostream>
using namespace std;
#define pi 3.14 // macros bolte hai isse
int main() {
    int num = 25;
    num = 30;
    cout<<num<<endl;
    const int num1 = 25;
    cout<<num<<endl;
    // const requires an initializer
    const int num2 = 39;
    
    cout<<num1<<endl;
    //diffrence b/w macros and const is macros memory me store nhi hoge and const memory me store hoge 
    //macros is basically used for modifying data types And const is used for preparing a constant like pi universal gravitational constant etc
    
    return 0;
}