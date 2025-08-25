#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> array = {1,2,3,4,5};
    cout << "Iterating by value" << endl;
    for(auto x: array){
        cout << x << endl;
        
    }
    cout << "Iterating by reference" << endl;
    for(auto &x: array){
        x = x*2;
        cout << x << endl;
    }
    cout << "Iterating by reference can lead to direct modification of elements " << endl;
    for(auto &x: array){
        cout << x << " ";
    }
    return 0;
}
