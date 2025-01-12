#include <iostream>
#include <string>
using namespace std;
bool ispalindrome(string word){
    int start=0;
    int end=word.length()-1;
    while(start<end){
        if(word[start]!=word[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string word;
    cout << "Enter the word :"<< endl;
    cin >> word;
    if(ispalindrome(word)){
        cout << "The word is a palindrome" << endl;
        
    }
    else{
        cout<< "The word is not a palindrome"<< endl;
    }
    return 0;
}
