#include <iostream>
#include <string>
using namespace std;
struct person{
    int age;
    string name;
    
};
int main(){
    struct person diwa ={21,"Diwa"};
    cout << diwa.age << endl;
    cout << diwa.name << endl;
    return 0;
}
