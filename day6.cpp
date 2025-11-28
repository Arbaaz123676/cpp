// Preparing a simple calculator which adds the two numbers which have been taken from the user
#include <iostream>
using namespace std;
int main(){
    // inputing the first number
    int num1;
    cout<<"Enter your first number = ";
    cin>> num1;
    // inputing the second number
    int num2;
    cout<<"Enter your second number = ";
    cin>>num2;
    // Calculating the sum
    int sum = num1 + num2;
    //Calculating the product
    int product = num1 * num2;
    //Calculating the quotient
    int quotient = num1 / num2;
    //Calculating the Remainder
    int remainder = num1 % num2;
    cout<< "The sum of the two numbers given is = "<<sum;
    cout<< "\nThe product of the two numbers given is = "<<product;
    cout<< "\nThe quotient of the two numbers given is = "<<quotient;
    cout<< "\nThe remainder of the two numbers given is = "<<remainder;
    cout<<endl;
    return 0;
}