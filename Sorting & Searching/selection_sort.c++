#include<iostream>
using namespace std;

void selection_sort(int ar[],int size){
    int i,j,temp,min;
    for(i=0;i<size-1;i++){
        min = i;
        for(j=i+1;j<size;j++){
            if(ar[j] < ar[min]){
                min = j;
            }
        }

        if(min != i){
            temp = ar[i];
            ar[i] = ar[min];
            ar[min] = temp;
        }
    }

    for(i=0;i<size;i++){
        cout<<" "<<ar[i];
    }
}

int main(){
    int n,ar[100],i,j;
    cout<<" ---Selection Sort--- \n";
    cout<<" Enter array size : ";
    cin>>n;
    cout<<" Enter array values \n";
    for(i=0;i<n;i++){
        cout<<" ";
        cin>>ar[i];
    }

    selection_sort(ar,n);
    return 0;
}