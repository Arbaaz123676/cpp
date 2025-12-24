#include <iostream>
using namespace std;
int main(){
    int T;
    cout<<"Enter your total score = ";
    cin>>T;
    if(T>=90 && T<=100){
        cout<<"Your Grade is = 'A'";
    } else if(T>=80 && T<90){
        cout<<"Your Grade is = 'B'";
    } else if (T>=40 && T<80){
        cout<<"Your Grade is = 'C'";
    }
    else if(T>100){
        cout<<"Invalid score";
    }
    else{
        cout<<"You have failed your exam.";
    }


    return 0;
}
