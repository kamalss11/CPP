#include<iostream>
using namespace std;
// 1  0  1  0  1
// 0  1  0  1  0
// 1  0  1  0  1
// 0  1  0  1  0
// 1  0  1  0  1
int main(){
    int n,i,j;
    cout<<" --Pattern 3-- \n";
    cout<<" Enter a value : ";
    cin>>n;

    for(i=1;i<=n;i++){
        if(i%2==0){
            for(j=1;j<=n;j++){
                if(j%2==0){
                    cout<<" 1 ";
                }
                else{
                    cout<<" 0 ";
                }
            }
            cout<<"\n";
        }

        else{
            for(j=1;j<=n;j++){
                if(j%2==0){
                    cout<<" 0 ";
                }
                else{
                    cout<<" 1 ";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}