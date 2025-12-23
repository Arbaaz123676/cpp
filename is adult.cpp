#include <iostream>
using namespace std;
int main(){
    bool isadult;
    int age;
    cout<<"Enter your age = ";
    cin>>age;
    isadult = age>=18? true:false;
    cout<<isadult;
    
    return 0;
}