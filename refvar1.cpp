#include <iostream>
using namespace std;
void changea(int &a){
    a = 20;
    cout<<a<<endl;
}
int main(){
    int a = 10;
    cout<<a<<endl;
    changea(a);
    cout<<a<<endl;
    return 0;

}