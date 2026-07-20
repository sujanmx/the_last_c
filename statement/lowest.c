#include<stdio.h>

int main(){

    int a,b,c,d;

    printf("enter the first number ");
    scanf("%d",&a);

    printf("enter the second number ");
    scanf("%d",&b);

    printf("enter the third number ");
    scanf("%d",&c);

    printf("enter the third number");
    scanf("%d",&c);

    if(a<b && a<c && a<d){
        printf("a is the smaller number");
    }

    if(b<a && b<c && c<d )
    {
      printf("b is the samller number");
    }

    if(c<a && c<b && c<d ){

      printf("c is the smaller number");
    }

    else{
     printf("c is the smaller number");
    }
}