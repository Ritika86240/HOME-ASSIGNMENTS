// with argument without returntype
//functions programs 
#include<stdio.h>
void main ()
{
    int add(int,int);
    int a,b,c;
    printf("enter the two numbers ");
    scanf(" %d%d",&a,&b);
    c=add(a,b);
    printf("sum=%d",c);

} 
int add(int a ,int b)
{
    int c;
 c=a+b;}