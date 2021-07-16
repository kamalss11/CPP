#include<iostream>
using namespace std;

int main(){
    int size,ar[100],i,j,temp;
    cout<<" ---Bubble Sort--- \n";
    cout<<" Enter the size : ";
    cin>>size;
    cout<<" Enter the values \n";
    for(i=0;i<size;i++){
        cout<<" ";
        cin>>ar[i];
    }

    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(ar[j] > ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }

    cout<<" After Sorting";
    for(i=0;i<size;i++){
        cout<<" "<<ar[i];
    }

    return 0;
}