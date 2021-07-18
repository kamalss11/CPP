#include<iostream>
using namespace std;

// There must be an sorted array

void binary_search(int ar[],int s,int data){
    int l=0,r=s-1,mid;
    while(l <= r){
        mid = (l+r) / 2;
        if(data == ar[mid]){
            cout<<" "<<data<<" is present in the position "<<mid;
            break;
        }

        else if(data < ar[mid]){
            r = mid - 1;
        }

        else{
            l = mid + 1;
        }
    }

    if(l > r){
        cout<<" "<<data<<" is not in an array";
    }
}

int main(){
    int s,ar[100],i,j,k;
    cout<<" ---Binary Search--- \n";
    cout<<" Enter a size : ";
    cin>>s;
    cout<<" Enter array values \n";
    for(i=0;i<s;i++){
        cout<<" ";
        cin>>ar[i];
    }

    cout<<" Enter a key value to search : ";
    cin>>k;

    binary_search(ar,s,k);
    return 0;
}