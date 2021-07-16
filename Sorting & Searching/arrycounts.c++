#include <iostream>
using namespace std;

int main()
{
    int i,j,k,n,ar[100],nwar[100],nlen = 0,c,size;
    cout<<" Enter size : ";
    cin>>size;
    cout<<" Enter values \n";
    for(i=0;i<size;i++){
        cout<<" ";
        cin>>ar[i];
    }
    
    for(j=0;j<size;j++){
        if(j==0){
            nwar[j] = ar[j];
            ++nlen;
        }
        else{
            c = 0;
            for(k=0;k<nlen;k++){
                if(ar[j] == nwar[k]){
                    ++c;
                }
            }
            
            if(c==0){
                nwar[nlen] = ar[j];
                ++nlen;
            }
        }
    }
    
    for(int i=0;i<nlen;i++){
        int count = 0;
        for(int j=0;j<size;j++){
            if(nwar[i] == ar[j]){
                ++count;
            }
        }
        cout<<" "<<nwar[i]<<" - "<<count<<"\n";
    }

    return 0;
}