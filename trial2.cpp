#include<bits/stdc++.h>
using namespace std;
#define INF 999;
#define V 4;
int G[V][V]={
  {0,1,3,4},
  {1,0,2,0},
  {3,2,0,5},
  {4,0,5,0}
}; 
int main(){
    int no_edge=0;
    int selected[V];
    memset(selected,false,sizeof(selected));
    selected[0]=true;
    int x,y;
    cout<<"Edge - Weight\n";
    while(no_edge < V-1){
        int min=INF;
        x=0;
        y=0;
    }
}