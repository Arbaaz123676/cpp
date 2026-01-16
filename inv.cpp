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
            cout<<" ";}
        //stars
        for(k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
   
    return 0;
}