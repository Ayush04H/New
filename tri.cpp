//strinng matching
#include<bits/stdc++.h>
using namespace std;
void strmatch(char text[20],char pat[20]){
    int a,b;
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
            cout<<"pattern found at "<<i+1<<endl;
        }
    }
}
int main(){
    char text[20],pat[20];
    cout<<"Enter the text :\n";
    gets(text);
    cout<<"Enter the pattern :\n";
    gets(pat);
    strmatch(text,pat);
    return 0;
}