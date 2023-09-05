#include<stdio.h>
#include<math.h>
void main()
 {
     int num1,temp,rem=0,sum=0;
     scanf("%d",&num1);
     temp=num1;
     while(num1>0)
     {
        rem=num1%10;
        sum=sum+(rem*rem*rem);
        num1=num1/10;

     }
     if(temp==sum)
     {
        printf("%d is armstrong\n",temp);
     }
    else
    {
        printf("%d is  not a armstrong\n",temp);
     }
 }