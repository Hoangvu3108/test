#include <stdio.h>
int x[100];
int n;//length of binary sequence 
int check(int v, int k){
	return 1;
}
void solution(){
	int i;
	for( i=1;i<=n;i++) printf("%d",x[i]);
	printf("\n");
}
void Try(int k){//try all values for x[k] sastifying constraints, aware of x[1],....,x[k-1]
    int v;
    for(v=0;v<=1;v++){
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
