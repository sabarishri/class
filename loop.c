#include <stdio.h>

int main(void) {
	// your code goes here
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum+=i;
	printf("Sum=%d",sum);
	return 0;
}
