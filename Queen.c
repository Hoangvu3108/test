#include <stdio.h>
int n;
int x[100];
int Q[100][100];// for ddisplay a so;ution under 0-1 table
int check(int v,int k){// return true if value v can be assigned to variablex{k}
						//whithout violating given constraints
int i;
for(i=1;i<=k-1;i++)	{
	if(x[i]==v) return 0;
	if(x[i]+i==v+k)return 0;
	if(x[i]-i==v-k)return 0;
}
return 1;
}
void solution(){
	int i,j;
	for(i=1;i<=n;i++) 
		for(i=1;j<=n;j++)
		Q[i][j]=0;
for ( i=1;i<=n;i++){
	int c=i;
	int r=x[i];
	Q[r][c]=1;// a queen is palce at the cell(r,c)=(x[i],i)
  }		
printf("-------------\n");
}
void Try(int k){
	int v;
	for (v=1;v<=n;v++){
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


							
