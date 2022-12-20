#include<stdio.h>
int main(){
	int a,n=1,i,j;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		for(j=1;j<=i;j++){
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}

}
