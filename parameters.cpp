#include <iostream>
using namespace std;
int sum(int a,int c);

int main() {
int a;
int c;
cout<<"Enter the number = ";
cin>>a;
cout<<"Enter the number = ";
cin>>c;
    int sum(int a,int c);//yaha a,c are parameters
    int s = sum(a,c);//yaha voh arguments (actully yaha numbers ate hai laikin mai na yaha pe input liya hu to yahi argument banega
    cout<<"The sum of the two numbers is = "<<s;
}
int sum(int a,int c) {
    int sum = a+c;
    return sum;
}