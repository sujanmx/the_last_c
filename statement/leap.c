#include<stdio.h>

int main()

{   int year;

    printf("enter the year");

    scanf("%d",& year);

    if(year%4==0){
        printf("yea bro its a leap year");
    }

    else{
        printf("no it's a normmal year");
    }
}