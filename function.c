#include<stdio.h>
void fun(int []);
int main(){
    int ar[5]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        printf("THE MAIN ARRAY IS %d\n",ar[i]);
    }
    fun(ar);
    for(int i=0;i<5;i++)
    {
        printf("THE MAIN ARRAY BEFORE UPDATE IS %d \n",ar[i]);
    }
    

}


void fun(int ar[]){
    printf("ENTER NEW VALUE OF ARRAY\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("THE NEW ARRAY IS %d\n",ar[i]);
    }
    
}