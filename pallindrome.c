#include<stdio.h>
int main(){
    int a,r,sum,temp;
    printf("ASK FOR NUMBER\n");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        r=a%10;
        sum=(sum*10)+r;
        a=a/10;
    }
    if(temp=sum){
        printf("PALLINDROME NUMBER");

    }
    else{
        printf("NOT A PALLINDROME NUMBER");
    }
}