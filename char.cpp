#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cout<<"Enter the number or lines u need = ";
    cin>>n;
    char Elem = 'A';
    if(n<=7) {
        for(i=1;i<=n;i++){
                for(j=1;j<=i;j++){
                    cout<<Elem;
                    Elem++;
                }
        cout<<endl;
        }
    } else {
        cout<<"Invalid number.";
    }

    return 0;
}