#include <iostream>
using namespace std;
int main(){
    cout << "basic of pointer" << endl;
    int x=10;
    int *pointer;
    pointer=&x;
    cout << "value in pointer "<< pointer<<endl;
    cout << "value the pointer poiting to "<<*pointer<<endl;
    int *y=NULL; // null pointer
    void *pointer; //is a void pointer
    return 0;
}
