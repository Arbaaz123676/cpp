#include <iostream>
#include<iomanip>
using namespace std;
// To get to know about the difference between float and double you have to include one more headder file called "iomanip"
//1 byte = 8bits
int main(){
    int age = 17; // Integer data type.It have 4 bytes.
    char GPA = 'A'; //It stores only one character.It have 1 byte.
    bool isadult = false; // Boolean data type.It have 1 byte.
    float pi = 3.141592653589793; // Floating point data type.It have 4 bytes.
    double pi2 = 3.141592653589793859641749696; // It have 8 bytes.
    cout<<"age = "<<age <<" GPA = "<<GPA<< " isadult = "<<isadult<<" pi = "<<fixed<<setprecision(15)<<pi<<" pi2 = "<<fixed<<setprecision(18)<<pi2; 
    return 0;
    
}