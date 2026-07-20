#include<stdio.h>

int main(){

 printf("we just do home work that mention in the sir video");
 
 int a,b,c,d;

 printf("enter the first number: ");
 
 scanf("%d",&a);

 printf("enter the second number: ");

 scanf("%d",&b);

 printf("enter the third number: ");

 scanf("%d",&c);

 printf("enter the fourth number: ");

 scanf("%d",&d);

 if(a>b && a>c && a>d)
 {
    printf("the first number is greater");
 }
 if(b>a && b>c && b>d){
    printf("the second number i9s grater");
 }

 if(c>a && c>b && c>d){
    printf("the third number is great");
 }

 else{
  printf("fourth number is grater");
 }
}