#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    int k;
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    for(i=1;i<=n;i++){
        //spaces
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}