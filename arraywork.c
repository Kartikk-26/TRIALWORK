#include<stdio.h>
int main(){
	int marks[4],i;
	for(i=0;i<4;i++){
		printf("ENTER THE VALUE OF %d ELEMENT OF ARRAY IS \n",i);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<4;i++){
			printf("THE ENTERED VALUE OF %d ELEMENT OF ARRAY IS %d \n",i,marks[i]);
	}
	return 0;
}

