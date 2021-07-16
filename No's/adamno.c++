#include<iostream>
using namespace std;
int sqaure(int n){
    return n*n;
}

int reverse(int r){
    int rev = 0;
    while(r!=0){
        rev = rev*10 + r%10;
        r = r / 10;
    }
    return rev;
}
int main(){
    int n,cpy,sn,rn,srn,rsrn;
    cout<<" --Adam Number-- \n";
    cout<<" Enter a value : ";
    cin>>n;
    sn = sqaure(n);
    cout<<" Square of "<<n<<" is "<<sn<<"\n";
    rn = reverse(n);
    cout<<" Reverse of "<<n<<" is "<<rn<<"\n";
    srn = sqaure(rn);
    cout<<" Sqaure of Reverse of "<<n<<" is "<<srn<<"\n";
    rsrn = reverse(srn);
    cout<<" Reverse of Sqaure of Reverse of "<<n<<" is "<<rsrn<<"\n";
    if(rsrn == sn){
        cout<<" "<<n<<" is an adam number";
    }
    else{
        cout<<" "<<n<<" is not an adam number";
    }
    return 0;
}