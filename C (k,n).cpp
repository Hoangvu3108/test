#include <stdio.h>
#define P 1000000007
int m[1000][1000];
int C(int k, int n){
    if (k==0||k==n)
    m[k][n]=1;
    else{
    	if( m[k][n]==-1)
    	m[k][n]= (C(k-1,n-1)+ C(k,n-1))%P;
	}
	return m[k][n];
	}
    
int main(){
	int i,j;
	for( i=0;i<1000;i++)
		for( j=i;j<1000;j++)
	  		m[i][j]=-1;
    int k,n;
    scanf("%d%d",&k,&n);  
    printf("%d",C(k,n));
    return 0;
    }
    
