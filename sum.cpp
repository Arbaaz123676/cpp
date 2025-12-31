#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number till which u have to print = ";
cin>>n;
int sum = 0;
for(int a=0; a<=n; a++){

    sum += a;

}
cout<<"sum = "<<sum<<endl;



return 0;
}