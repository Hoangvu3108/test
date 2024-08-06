#include <stdio.h>
int n;
int x[100];
int Q[100][100];
int check(int v , int k){
 for (int i =1 ; i <= k-1 ; i++){
    if (x[i]==v )return 0;
    if (x[i]+i==v+k) return 0;
    if (x[i]-i==v-k) return 0;

 }
 return 1;

}
void solution(){
    for (int i =1 ; i<= n ; i++)
        for (int j = 1 ; j <=n ; j ++)
         Q[i][j] = 0 ;
    for (int i =1; i <= n ; i ++ ){
        int c =i ;
        int r = x[i];
        Q[r][c]=1;
    }
    for(int i =1 ; i <=n ; i++){
        for(int j = 1;j<= n ; j++) printf("%d",Q[i][j]);
        printf("\n");
    }
    printf("-------------------\n");


}
void Try(int k ){
 int v ;
 for(v=1; v<= n ; v++){
    if(check(v,k)){
        x[k]=v;
        if(k==n) solution();
        else Try(k+1);
    }
 }
}
int main(){
 scanf("%d",&n);
 Try(1);
}
