#include<iostream>
using namespace std;
void palindrome(int n){
    int cpy=n,rev=0;
    while(n!=0){
        rev = rev*10+n % 10;
        n/=10;
    }

    if(rev == cpy){
        cout<<" "<<cpy<<" is palindrome";
    }
    else{
        cout<<" "<<cpy<<" is not palindrome";
    }
}
int main(){
    int n;
    cout<<" ---Palindrome No--- \n";
    cout<<" Enter a no : ";
    cin>>n;
    palindrome(n);
    return 0;
}