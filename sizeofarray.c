#include<stdio.h>
void printarraysize(int);
int main(){
    int i;
    int a[5]={20,20,30,40,30};
    int size=sizeof(a)/sizeof(int);
    //Find number if element in array
    printf("%d\n",size);
    printarraysize(a);
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}
void printarraysize(int a){
    int size;
    int*ptr;
    //find number of element
    printf("%d\n",sizeof(size));
    printf("%ld\n",sizeof(ptr));
}