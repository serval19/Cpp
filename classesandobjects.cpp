#include <iostream>
using namespace std;
class Person{
    public: // class elements are private by default
    int age;
    string name;
    
    
};
int main(){
    Person diwa={20,"diwa"};
    
    cout<< diwa.name << endl;
    cout << diwa.age <<endl;
    
    return 0;
}
