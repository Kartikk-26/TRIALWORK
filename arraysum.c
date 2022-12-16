#include<stdio.h>
int main(){
	int i,sum=0,a[5];
	for(i=0;i<5;i++){
		printf("ENTER THE NUMBER \n");
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<5;i++){
			sum=sum+a[i];
	}
		printf("SUM IS %d",sum);
}
