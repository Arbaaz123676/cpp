#include <iostream>
using namespace std;
int main(){

    cout<<(10/3);
    cout<<"\n"<<(10/3.0);
    //This is happen by compiler itself to prevent data loss
    //note:- bool -> char -> float -> double
    cout<<"\n"<<('A'+1);
    cout<<"\n"<<('A'-0); //A = 65; B = 66.......................................................................
    cout<<"\n"<<('a'-0); //a = 97; b = 98.......................................................................
    return 0;
}