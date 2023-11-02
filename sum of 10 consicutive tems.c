//program to add 10 consecutive numbers starting from 1 using while loop
#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("The sum of 10 consecutive numbers starting from 1 is %d",sum);
    return 0;
}