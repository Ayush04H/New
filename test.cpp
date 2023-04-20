
#include<stdio.h>

int max(int a, int b) {
   if(a>b){
       return a;
   } else {
      return b;
   }
}
int knapsack(int W, int wt[], int val[], int n) {
   int i, w;
   int knap[n+1][W+1];
   for (i = 0; i <= n; i++) {
      for (w = 0; w <= W; w++) {
         if (i==0 || w==0)
            knap[i][w] = 0;
         else if (wt[i-1] <= w)
            knap[i][w] = max(val[i-1] + knap[i-1][w-wt[i-1]], knap[i-1][w]);
         else
            knap[i][w] = knap[i-1][w];
      }
   }
   return knap[n][W];
}
int main() {
 //size=3;

   int wt[3];
   int val[3];
   int W ;

   printf("\n Enter the values in Val array :");
   for(int i=0;i<3;i++){
      scanf("%d",&val[i]);
   }

   printf("\n Enter the values in Weight array :");
   for(int i=0;i<3;i++){
     scanf("%d",&wt[i]);
   }

    printf("\n Enter the value of capacity :");
   scanf("%d",&W);
   


   int n = sizeof(val)/sizeof(val[0]);
   printf(" \n The solution is : %d ", knapsack(W, wt, val, n));
   return 0;
}