#include <iostream>
using namespace std;
int main(){
    float sciencemarks;
    cout<<"Enter Your Science Marks = ";
    cin>>sciencemarks;
    float mathsmarks;
    cout<<"Enter Your Maths Marks = ";
    cin>>mathsmarks;
    float englishmarks;
    cout<<"Enter Your English Marks = ";
    cin>>englishmarks;
    float averagemarks;
    averagemarks = (sciencemarks+mathsmarks+englishmarks) / 3;
    cout<<"Your Average Marks is = "<<averagemarks;
    return 0;
}