#include<iostream>
using namespace std;
// 1
//  2 1
//  1 2 3
//  4 3 2 1
//  1 2 3 4 5
int main(){
    int i,j,k,n;
    cout<<" --Pattern 1 -- \n";
    cout<<" Enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2 == 0){
            for(j=i;j>0;j--){
                cout<<" "<<j;
            }
        }

        else{
            for(j=1;j<=i;j++){
                cout<<" "<<j;
            }
        }
        cout<<"\n";
    }
    return 0;
}