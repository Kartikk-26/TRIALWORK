#include<stdio.h>
int main(){


    int a,n=1,i;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        n=n*i;
    }
    printf("FACTORIAL OF %d IS %d",a,n);

}