#include<stdio.h>
int main(){
	
    int a[3][3],b[3][3],i,j,result[3][3],swap;;
    printf("ENTER THE DETAILS FOR MATRIX 1 \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ENTER NUMBER OF MATRIX 1 OF ELEMENT [%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            swap=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=swap;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n\n");
    }
    
    }