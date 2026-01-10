#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int i;
    int j;
    //for first half
    for(i = 1; i<=n; i++){
        //star
        for(j= 1; j<=i; j++) {
            cout<<"*";
        }
        //space
        for(j = 1; j<=2*(n-i); j++) {
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            cout<<"*";
        }
    cout<<endl;
    }
    // for lower half
    for(i=n;i>=1;i--){
        //star
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //stars
        for(j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }

    
}
