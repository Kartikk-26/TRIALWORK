#include<stdio.h>
int main(){
    int i,a;
    for(i=0;i<10;i++){
        printf("ENTER A NUMBER\n");
        scanf("%d",&a);
        if(a>100){
            continue;
            }
            else if(a%2==0){
                printf("%d\n",a);
            }
        
        else{
            printf("INVALID ENTRY\n");
        }
        
        }
        

    }
    
