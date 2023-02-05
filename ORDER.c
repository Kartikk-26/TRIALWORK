#include<stdio.h>
int main()
{
    int a[5],b,c,swap;
    printf("ENTER THE VALUES FOR OPERTAION\n");
    for (b=0;b<5;b++)
    {
        
        scanf("%d",&a[b]);
    }
    for (b=0;b<5;b++)
    {

        for (c=b;c<5;c++)
        {
            if(a[b]<a[c])
            {
                swap=a[b];
                a[b]=a[c];
                a[c]=swap;

            }
            
        }
        
    }
    printf("THE ARRANGED VALUES IN DECENDING ORDER ARE \n");
    for (b=0;b<5;b++)
    {
        printf("%d\n",a[b]);
    }
    for (b=0;b<5;b++)
    {

        for (c=b;c<5;c++)
        {
            if(a[b]>a[c])
            {
                swap=a[b];
                a[b]=a[c];
                a[c]=swap;

            }
            
        }
        
    }
    printf("THE ARRANGED VALUES IN ASCENDING ORDER ARE \n");
    for (b=0;b<5;b++)
    {
        printf("%d\n",a[b]);
    }
    return 0;
}