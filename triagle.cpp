//floyd's triangle.cpp
#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    int k = 1;
    int n;
    cout<<"Enter the value = ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}