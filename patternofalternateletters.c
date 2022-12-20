#include<stdio.h>
int main(){
    int a,l=1,k=0,s=97,i,j;
    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++,k++,l++)
		{
            if(k%2==0){
            	printf("%c ",l+64);
			}
			else printf("%c ",l+96);
        }
         printf("\n");
		}
    }

