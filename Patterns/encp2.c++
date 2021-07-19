#include<iostream>
using namespace std;

int main(){
    char str[100],ch[100];
    int i,j,count=0,temp,len;
    cout<<" --- Encrypt Pattern 2--- \n";
    cout<<" Enter string : ";
    cin.get(str,50);
    for(len=0;str[len];len++);
    cout<<" String Length = > "<<len<<"\n";

    for(i=len-1;i>=0;i--){
        if(str[i] != ' '){
            temp = str[i] + count;
            if(temp > 122){
                temp = temp - 26;
            }
            cout<<" "<<temp;
            ch[i] = temp;
            ++count;
        }

        else if(str[i] == ' '){
            ch[i] = ' ';
            count = 0;
        }
    }
    ch[len] = '\0';

    cout<<"\n "<<ch;
    return 0;
}