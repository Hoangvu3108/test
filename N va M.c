#include <stdio.h>
int n, M;
int x[1000];
int T;// represent the sum of instantiated variable(variable having values)
void input(){
	scanf("%d%d",&n,&M);
}
int check(int v, int k){
	if(k<n) return 1;
	return T+v==M;//final check
}
void solution(){
	int i;
	for(i=1;i<=n;i++) printf("%d",x[i]);
	printf("\n");
}
void Try(int k){
	int v;
	for (v=1;v<=M-T-(n-k);v++){
		if(check(v,k)){
			x[k]=v;
			T=T+v;// update T(incremental global variable)
			if(k==n) solution();
			else Try(k+1);
			T=T-v;// recover T
		}
	}
}
int main(){
input();
T=0;
Try(1);
}

