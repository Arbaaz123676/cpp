#include <iostream>
using namespace std;
int main(){
    int *ptr = NULL;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;//we will get segmentation error
    //if we get this type of error then the further code will not be exhiguted 
    return 0;
}