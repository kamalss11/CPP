#include<iostream>
using namespace std;
// Encode the given string
// Ip => this is a secrer
// Op => tiet hsc iar sse
// Procedure :
// 1. Remove the spaces => thisisascret
// 2. find the length = > 13
// 3. find the length which is ceil of sqrt of len(13),w = > 4
// 4. seperate the string using w, string = this isas ecre t
// 5. take first character from each of new string and make 1st word. &
// take second character from each of new string & make 2nd word....continue the process
int main(){
    char ch[100],str[100];
    int i,j,k,count,len,cpcount;

    cout<<" --- Encrypt Pattern 1--- \n";
    cout<<" Enter a string : ";
    cin.getline(ch,100);

    for(i=0;ch[i];i++){
        if(ch[i] == ' '){
            j = i;
            for(j;ch[j];j++){
                ch[j] = ch[j+1];
            }
            ch[j] = '\0';
        }
    }

    cout<<" "<<ch<<"\n";


    for(len=0;ch[len];len++);
    cout<<" Length => "<<len<<"\n";

    for(i=1;i*i<len;i++);
    count = i;
    cpcount = count;

    for(i=0;ch[i];i++){
        if(i == count){
            for(k=len;k>i;k--){
                ch[k] = ch[k-1];
            }
            len++;
            ch[k] = ' ';
            count = count + cpcount+1;
        }
    }
    ch[len] =  '\0';

    cout<<" "<<ch<<"\n";
    cout<<" Length => "<<len<<"\n";
    j = 0;
    for(i=0;i<cpcount;i++){
        str[j++] = ch[i];
        int r = i + cpcount + 1;
        for(int k=0;k<cpcount-1;k++){
            if(r < len){
                str[j++] = ch[r];
            }
            r = r + cpcount + 1;
        }
        str[j++] = ' ';
    }
    str[len] = '\0';

    cout<<" Encoded String => "<<str;

    return 0;
}