#include <stdio.h>// chua xong...
#define N 1000001
 void input(){
 	int n;
 	scanf("%d",&n);
 		for (int i=1;i<=n;i++)
	
		scanf ("%d",&a[i]);
 }
 void solve(){
 	int ans=-1;//a[0]=1e9
 		int L=1;
		ans=L;
		for (int i=2;i<=n;i++) {
	if(a[i]>a[i-1]) L=L+1;
	else {
		if (ans<L)ans=L;
		L=1;
	}
}
	if(ans<L)ans=L;//update best
	printf("%d",ans);//reset the legth of new constructed increasing sub-sequence
	}
	int main(){
		input();
		solve;
		return 0;
	}
