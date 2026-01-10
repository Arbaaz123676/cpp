#include <iostream>
using namespace std;
int main(){
    int n = 9;
    // cout<<"enter the number = ";
    // cin>>n;
    int i;
    for(i = 2; i<=n-1; i++ ){
    if (n%i==0){
            cout<<"the number is composite"<<endl;
            // break;
        } else(n%i!=0);{
                cout<<"The number is prime"<<endl;
                // break;
            }
    }


    return 0;
}