
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