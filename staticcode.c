#include<stdio.h>
int main()
{
    display();
    display();
    display();
}

void display()
{
    int i=10;
    static int count=1;

    printf("%d\n%d", i,count);
    i++;
    count++;
}