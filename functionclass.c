#include<stdio.h>
int add(int,int);
int sub();
int mul();
int main(){
    int a,b,sum;
    printf("enter a and b\n");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("Sum is %d \n",sum);


    return 0;
}
int add(int n1,int n2){
    int sum;
    //printf("enter the a and b");
    //scanf("%d%d",&a,&b);
    sum=n1+n2;
    printf("sum is %d\n",sum);
    return sum;
}
/*void sub(){
    int a,b,sub;
    printf("enter the a and b");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("sum is %d",sub);
}
void mul(){
    int a,b,mul;
    printf("enter the a and b");
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("sum is %d",mul);
}*/
