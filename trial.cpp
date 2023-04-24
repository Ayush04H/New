//prims algo code
// Prim's Algorithm in C++
#include <bits/stdc++.h>
using namespace std;
#define INF 9999999
// number of vertices in graph
#define V 4
// create a 2d array of size 4*4
//for adjacency matrix to represent graph

int G[V][V] = {
  {0,1,3,4},
  {1,0,2,0},
  {3,2,0,5},
  {4,0,5,0}};

int main(){
    int no_edge=0;
    int selected[V];
    memset(selected,false,sizeof(selected));
    selected[0]=true;
    int x,y;
    cout<<"Edge - Weight\n";
    while(no_edge<V-1){
        int min=INF;
        x=0;
        y=0;
        for(int i=0;i<V;i++){
            if(selected[i]){
                for(int j=0;j<V;j++){
                    if(!selected[j] && G[i][j]){
                        if(min>G[i][j]){
                            min=G[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        cout<<x<<" - "<<y<<"  :"<<G[x][y]<<endl;
        selected[y]=true;
        no_edge++;
    }
}
