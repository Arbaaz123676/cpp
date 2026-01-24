#include <iostream>
using namespace std;
void changea(int *ptr){
    *ptr = 20;
    cout<<*ptr<<endl;
}
int main(){
    int a = 10;
    cout<<a<<endl;
    changea(&a);
    cout<<&a<<endl;
    cout<<a<<endl;
    return 0;

}