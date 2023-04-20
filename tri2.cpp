//linear search
#include<bits/stdc++.h>
using namespace std;
void lsearch(int a[20],int n,int x){
    int i;

    
    for(i=0;i<n;i++){
        if(a[i]==x){
            cout<<"The element is found at "<<i+1<<" Index\n";
            break;
        }
    }
}
void enter(int a[20],int n){
    cout<<"Enter the elements of the list"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int main(){
    int n,x;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    enter(a,n);
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;
    lsearch(a,n,x);
}