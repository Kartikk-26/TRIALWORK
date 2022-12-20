#include<stdio.h>
int main(){
    int a,n=97;
    int i,j;
    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%c ",n);
            n++;
        }
        printf("\n");
    }

}