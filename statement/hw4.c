#include<stdio.h>

int main()
{
  float l,w;

  printf("enter the length of the rectangle : ");

  scanf("%f",&l);

  printf("enter the width of the rectangle: ");

  scanf("%f",&w);
  
  float area =l*w;
  float perimeter=2*(l+w);

  if(area>perimeter){

    printf("bro the area is grater than the perimeter");
  }

  else{
    printf("no bro perimeter is grater than the area");
  }
}