#include<stdio.h>
main()
{
    int num,rem,count=0,armstrong=0;
    printf("enter a number");
    scanf("%d",&num);
    int orignum=num;
        int nn=num;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("count:%d",count);
        while(orignum!=0)
        {
        int prod=1;
        rem=orignum % 10;
        orignum=orignum/10;
        for(int p=1;p<=count;p++)
        prod=prod*rem;
        armstrong=armstrong+prod;
        
        }
        printf("its sum is %d",armstrong);
        if(armstrong==nn)
        printf("its a armstrong number");
        else
        printf("it is not a armstrong number");

    }