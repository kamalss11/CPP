#include<iostream>
using namespace std;

void insertion_sort(int ar[],int size){
    int i,j,temp;

    for(int i=1;i<size;i++){
        temp = ar[i];
        j = i - 1;
        while(j>=0 && ar[j]>temp){
            ar[j+1] = ar[j];
            --j;
        }

        ar[j+1] = temp;
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

    insertion_sort(ar,n);
    return 0;
}