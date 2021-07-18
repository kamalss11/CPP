#include<iostream>
using namespace std;

void linear_search(int ar[],int s,int key){
    int count = 0;
    for(int i=0;i<s;i++){
        if(ar[i] == key){
            ++count;
            cout<<" "<<key<<" is present in the position "<<i;
            break;
        }
    }

    if(count == 0){
        cout<<" "<<key<<" is not present in an array";
    }
}

int main(){
    int ar[100],s,i,key;
    cout<<" ---Linear Serach--- \n";
    cout<<" Enter array size : ";
    cin>>s;
    cout<<" Enter array values : \n";
    for(i=0;i<s;i++){
        cout<<" ";
        cin>>ar[i];
    }

    cout<<" Enter a key value to search : ";
    cin>>key;
    linear_search(ar,s,key);
    return 0;
}