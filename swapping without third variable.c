 #include<stdio.h>
void main (){
    int a,b;
    printf("swapping of two numbers");
  scanf(" %d%d",&a,&b );
  b=a+b;//a=10,b=20  b=a+b=>30
  a=b-a;// a=30-10=>20
  b=b-a;//b=30-20=>10
  printf(" after swapping: %d%d",a,b);
}