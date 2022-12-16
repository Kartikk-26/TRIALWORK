#include<stdio.h>
void swap(int*,int*);
int main(){
	int a,b;
	printf("ENTER TWO NUMBERS\n");
	scanf("%d %d",&a,&b);
	printf("MAIN BEFORE SWAP: a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("MAIN AFTER SWAP: a=%d b=%d\n",a,b);
}
void swap(int *p,int *q){
	int temp;
	printf("FUNCTION BEFORE SWAP: p=%d q=%d\n",*p,*q);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("FUNCTION BEFORE SWAP: p=%d q=%d\n",*p,*q);
}
