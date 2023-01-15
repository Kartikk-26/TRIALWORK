#include<stdio.h>
int main(){
    int arr1[5] = {3,8,11,14,15};
    int arr2[5] = {4,7,16,20,25},arr3[10];
    int i,j,swap;

    //MERGING THE DETAIL OF ARRAY 1 AND 2 IN 3ARRAY
    for(i=0;i<5;i++){
        arr3[i]=arr1[i];
    }
    for(i=0;i<5;i++){
        arr3[i+5]=arr2[i];
    }
    
    //PRINTING THE MERGED ARRAY
    printf("ELEMENTS OF MERGED ARRAY ARE \n");
    for(i=0;i<10;i++){
        printf("%d ",arr3[i]);
    }

    //SORTING THE ARRAY 3
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(arr3[i]>arr3[j]){
                swap=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=swap;
            }
        }
    }

    //PRINTING THE SORTED ARRAY 
    printf(" \nSORTED ARRAY IN ASCENDING ORDER \n");
    for(i=0;i<10;i++){
        printf("%d ",arr3[i]);
    }

}