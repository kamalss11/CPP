#include<iostream>
using namespace std;

int reverse(int n){
    int rev,sum=0;
    while(n!=0){
        rev = n % 10;
        sum = sum + rev;
        n/=10;
    }
    return sum;
}

int main(){
    int n,result;
    cout<<" ---Sum of all digits--- \n";
    cout<<" Enter a value : ";
    cin>>n;
    result = reverse(n);
    while(result/10!=0){
        result = reverse(result);
    }
    cout<<" "<<result;
    return 0;
}