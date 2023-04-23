#include<bits/stdc++.h>
using namespace std;
void enter(int a[],int n){
    cout<<"Enter the values in t he array "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void disp(int a[],int n){
    cout<<"The elements of the array are"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void selectionsort(int a[],int n){
    int i,j,k,c;
    for(i=0;i<n-1;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(a[k]>a[j]){
                k=j;
            }
        }
        if(k!=i){
            c=a[i];
            a[i]=a[k];
            a[k]=c;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of the elements"<<endl;
    cin>>n;
    int a[n];
    enter(a,n);
    cout<<"1.Elements before sorting::\n";
    disp(a,n);
    selectionsort(a,n);
    cout<<"2.Elements after sorting1::\n";
    disp(a,n);
    return 0;
}