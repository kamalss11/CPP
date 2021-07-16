#include<iostream>
using namespace std;
// 1 2 3 4
// 2 3 4 5
// 3 4 5 6
// 4 5 6 7
int main(){
    int n,i,j;
    cout<<" --Pattern 2-- \n";
    cout<<" Enter a value : ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=i;j<i+n;j++){
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    return 0;
}