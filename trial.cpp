
#include<bits/stdc++.h>
using namespace std;
int main(){
    char text[20],pat[20];
    int a,b;
    cout<<"Enter the text :";
    gets(text);
    cout<<"Enter the pattern :";
    gets(pat);
    a=strlen(pat);
    b=strlen(text);
    for(int i=0;i<=b-a;i++){
        int j;
        for(j=0;j<a;j++){
            if(text[i+j]!=pat[j]){
                break;
            }
        }
        if(j==a){
            cout<<"Found at position "<<i+1<<endl;
        }
    }
    return 0;
}

