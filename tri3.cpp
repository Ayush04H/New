    //selection sorting 
    #include<bits/stdc++.h>
    using namespace std;
    void enter(int a[],int n){
        cout<<"Enter the elements\n";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }
    void disp(int a[],int n){
        cout<<"The elements are:\n";
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
        cout<<"Enter the number of elements inn the array\n";
        cin>>n;
        int a[n];
        enter(a,n);
        disp(a,n);
        selectionsort(a,n);
        cout<<"The sorted array is:::: \n";
        disp(a,n);
    }