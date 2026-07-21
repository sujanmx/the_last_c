#include<stdio.h>

int main()
{ 
  int a;
  printf("enter the number: ");

  scanf("%d",&a);
  
  if(a%3==0 && a%5==0 ){
    if(a%15!=0){

    printf("bro its good");

    }
  }

  else{
    printf("that not the thing");
  }
}