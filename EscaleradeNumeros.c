#include <stdio.h>
int main(){
	int n;
	int i,j;
	int v;

	scanf("%d",&n);
	v=0;
	for(i=n;i>0;i--){
		for(j=1;j<=i;j++)
			printf("%d ",j);
		for(j=1;j<=v;j++)
			printf("\n");
		for(j=i;j>=1;j--)
			printf("%d",j);
		printf("\n");
		v=v+4;
	}
	return 0;
}
	