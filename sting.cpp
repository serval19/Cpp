#include <iostream>
using namespace std;
int main(){
    string name="Diwa Tomy";
    cout << name << endl;
    cout << name.find("w")<<endl;
    cout << name.size()<<endl;
    name.pop_back();
    cout << name << endl;
    cout << name.length() << endl;
    return 0;
}
