#include <iostream>
using namespace std;
int main(){
    //and(Binary)
    cout<<((3<5)&&(5<10))<<endl;
    cout<<((3>5)&&(5>10))<<endl;
    cout<<((3<5)&&(5>10))<<endl;
    cout<<((3>5)&&(5<10))<<endl;
    //or(Binary)
    cout<<((3<5)||(5<10))<<endl;
    cout<<((3>5)||(5>10))<<endl;
    cout<<((3<5)||(5>10))<<endl;
    cout<<((3>5)||(5<10))<<endl;
    //not (Unary)
    cout<<(!((3<5)&&(5<10)))<<endl;
    cout<<!(((3>5)&&(5>10)))<<endl;
    cout<<!(((3<5)&&(5>10)))<<endl;
    cout<<!(((3>5)&&(5<10)))<<endl;

    


return 0;

}