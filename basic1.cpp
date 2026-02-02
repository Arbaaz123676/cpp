#include <iostream>
using namespace std;
void sayhello() {
    cout<<"Iam doing the work now! \n";
    cout<<"Hello world :)\n";
}
void assistant(){
    sayhello();
    cout<<"Work done";
}
int main(){
    assistant();


}