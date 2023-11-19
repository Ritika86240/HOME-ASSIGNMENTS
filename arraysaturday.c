/*#include<stdio.h>
void main ()
{
int array[5]={1,2,3,4,5};
int i;
for(i=0;i<5;i++)
{printf("%d%d%d%d%d",array[i],*(1+array) , *(array+i) ,i[array],array }
}
#include<stdio.h>
void main ()
{ int array[30],ele,i,found=0,num;
  printf("enter the elements of array",i);
  scanf(" %d",&num);
  for(i=0;i<num;i++)
{
    printf("enter the element array[%d] ",i);
    scanf(" %d",&array[i]);
}
printf("enter the element to search");
scanf(" %d",&ele);
for(i=0;i<num;i++)
if(array[i]==ele)
{
    printf("element found at index %d=%d:\n",i,ele);
    found=1;
    break;
}
 if(!found){
    printf("element is not found");
 }
 }*/

#include<stdio.h>
void main ()
{ int array[30],ele,i,location,num;
  printf("enter the elements of array",i);
  scanf(" %d",&num);
  for(i=0;i<num;i++)
{
    printf("enter the element array[%d] ",i);
    scanf(" %d",&array[i]);
}
// read the location to delete
printf(" enter the location to delete");
scanf(" %d",&location);
while (location>num)
{array[location-1]=array[location];
location++;
}
num==1;
//print the array
for(i=0;i<num;i++)
{printf("%d\t",array[i]);}

}