#include<iostream>
using namespace std;
// 1  2  3  4  5
// 11 12 13 14 15
// 21 22 23 24 25
// 16 17 18 19 20
// 6  7  8  9  10

int main(){
    int n,row,col,val,count = 0;
    cout<<" --Pattern 4--(Sandwich) \n";
    cout<<" Enter a value : ";
    cin>>n;
    for(row=1;row<=n;row+=2){
        val = (row-1)*n+1;
        for(col=1;col<=n;col++){
            cout<<"\t"<<val++;
        }
        cout<<"\n";
    }

    for(row=n;row>=1;row--){
        if(row%2==0){
            val = (row-1)*n+1;
            for(col=1;col<=n;col++){
                cout<<"\t"<<val++;
            }
            cout<<"\n";
        }
    }
    return 0;
}