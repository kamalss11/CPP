#include<iostream>
using namespace std;
void harshad_no(int num){
    int cpy = num,rev,sum = 0;
    while(num!=0){
        rev = num % 10;
        sum = sum + rev;
        num = num / 10;
    }

    if(cpy%sum == 0){
        cout<<" "<<cpy<<" is a Harshad Number";
    }
    else{
        cout<<" "<<cpy<<" is not a Harshad Number";
    }

}

int main(){
    int n,i,j;
    cout<<" --Harshad Number-- \n";
    cout<<" Enter a value : ";
    cin>>n;
    harshad_no(n);
    return 0;
}