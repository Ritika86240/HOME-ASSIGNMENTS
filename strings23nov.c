/*//strings
#include<stdio.h>
void main ()
{
    char a[100];
    printf("enter the string ");
    scanf("%s",a);
    printf("the string is %s ",a);
   printf("enter the string");
   gets (a);
   printf("the strings is %s",a);
   printf("enter the string");
   scanf("%s[^\n] ",a);
 printf("the string is %s",a);
}

#include<stdio.h>
#include<string.h>
void main ()
{
    char a[100];
    printf("enter the string ");
    scanf("%s[^\n]",a);
    int l=strlen(a);
    int vow=0,con=0;
    
    for(int i=0;i<l;i++)
   { 
     if (a[i]=='A'|| a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
   
{  vow++;

}
else
{
  con++;
}
   }
printf(" vowels in the string =%d",vow);
printf("consonant is the string=%d",con);
}

#include<stdio.h>
#include<string.h>
void main ()
{
    char a[100];
    printf("enter the string ");
    scanf("%s[^\n]",a);
    int l=0;
    for(int i=0;;i++)
    {
      if(a[i]=='\0')
    break;
    else
    l++;
    }
    printf("the length is=%d",l);
    }*/#include<stdio.h>
#include<string.h>
void main ()
{
    char a[100],b[100];
    printf("enter the string ");
    scanf("%s[^\n]",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    b[i]=a[i];
    printf(" the copied string is =%s",b);}