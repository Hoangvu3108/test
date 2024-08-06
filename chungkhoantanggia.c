#include <stdio.h>
int n;
int a[1000000];//bai toan cot loi la gi ? 
int main (){
	int sum,max,cnt,cntmax,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	
		scanf ("%d",&a[i]);
	cnt=1;
	cntmax=1;

	for (i=2;i<=n;i++) {
	if(a[i]>a[i-1]) cnt++;
	if(a[i]<a[i-1]) cnt=1;
	if (cnt>cntmax) cntmax=cnt;
	
	}
	printf("%d\n",cntmax);
	return 0;
}

