#include <iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<&a<<endl;
    //pointers
    int *abc = &a;
    cout<<&a<<" = "<<abc<<endl;
    float b = 3.14;
    cout<<&b<<endl;
    float *cde = &b;
    cout<<&b<<" = "<<cde<<endl;
}