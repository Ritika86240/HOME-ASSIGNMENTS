//functions programs 
/* // with argument and return type
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
int add(int x,int y)
{
    int z;
z=x+y; return z;
}*/
/*
// without argument with return type
//functions programs 
#include<stdio.h>
void main ()
{
    int add();
  int c=add();
    printf("sum=%d",c);

} 
int add()
{
    int a,b,z;
    printf(" enter the nos");
    scanf("%d%d",&a,&b);
z=a+b; return z;
}
*/
/*
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
 c=a+b;
}*//*
// without argument and without return type
//functions programs 
#include<stdio.h>
void main ()
{
    void  add();
 add();
}
void add()//that means we will not be giving any return value from the sub function 
{                                        //this starts sub function
    int a,b,z;                            
    printf(" enter the nos");        
    scanf("%d%d",&a,&b);
z=a+b;
printf("sum: %d",z);
}  */
#include<stdio.h>
void main()
{
    int a=7,b=2;
    float c;
    c=(float)a/b;
    printf("ans =%.1f",c);

}