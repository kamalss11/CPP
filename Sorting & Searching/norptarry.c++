#include<iostream>
using namespace std;

int main(){
    int size,ar[100],i,j,k;
    cout<<" --Removing Repetation of an array-- \n";
    cout<<" Enter array size : ";
    cin>>size;
    for(i=0;i<size;i++){
        cout<<" ";
        cin>>ar[i];
    }

    for(i = 0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(ar[i]==ar[j]){
                for(k=j;k<size-1;k++){
                    ar[k] = ar[k+1];
                }
                --size;
            }
        }
    }

    cout<<"\n After removing repetation \n";
    for(i=0;i<size;i++){
        cout<<" "<<ar[i]<<"\n";
    }
    return 0;
}