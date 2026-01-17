#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int j;
    for(int i =1; i<=n; i++){

        for(j=1; j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

//row=n-i+1
//row n = n+1



    return 0;
}