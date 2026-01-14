#include <iostream>
using namespace std;
int main() {
    int i;
    int j;
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"*";//firststar
        for(j=1;j<=n-1;j++){
            if((i==1)||(i==n)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }

        cout<<"*"<<endl; //last star
    }

    return 0;

}