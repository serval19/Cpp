#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<< "Enter the value for n :";
    cin>> n;
    
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout << "The sum of n natural numbers is : "<< sum << endl;
    return 0;
}
