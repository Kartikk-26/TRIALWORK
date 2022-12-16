#include<stdio.h>
int main(){
	int a[5],swap,i,j;
	for(i=0;i<5;i++){
		printf("ENTER THE NUMBER \n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<=5;j++){
			if(a[i]>a[j]){
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
			}
		}
	}
	printf("ARRAY SORTED \n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
