#include <iostream>
using namespace std;
int main(){
//urinary operators
    int a = 4;
    a = a +1; //can also be written as a++ (increment operator)
    a = a - 1; //can also be written as a-- (Decrement operator)
    a++;
    a--;
    cout<<a<<endl;
    //a++ post increment                                                                               b = a++
    //++pre increment and same for decrement and both are not same in the separate variable case like  b = --a both gives diff outputs

    return 0;
}