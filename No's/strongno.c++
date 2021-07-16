#include<iostream>
using namespace std;
// take factorial of each number and add
// if the sum == input its a strong number
void strong(int n){
    int rev = 0,prd,sum = 0,cpy = n;
    while(n>0){
        prd = 1;
        rev = n%10;
        for(int i=1;i<=rev;i++){
            prd = prd * i;
        }

        sum = sum + prd;

        n = n/10;
    }
    if(cpy == sum){
        cout<<" "<<cpy<<" is a strong number";
    }
    else{
        cout<<" "<<cpy<<" is not a strong number";
    }
}

int main(){
    int n,cpy,rev;
    cout<<" -- Strong Number -- \n";
    cout<<" Enter a value : ";
    cin>>n;
    strong(n);
    return 0;
}