#include <iostream>
using namespace std;
int main(){
    int *ptr;
    ptr= new int();
    *ptr=10;
    cout << ptr<< endl;
    int *arr;
    
    arr=new int[10];
    
    delete ptr; //free the dynamically allocated memory
    delete[] arr;
    
    return 0;
}
