#include<stdio.h>

int main()
{
    float cost,sell;
    
    printf("enter the cost of the product: ");

    scanf("%f",&cost);

    
    printf("enter the selling price: ");

    scanf("%f",&sell);
    

    if(sell>=cost){
        
        float n = ((sell-cost)/cost)*100;
        float profit = sell-cost;
        printf("the net profit %f,profit",profit);
        
        printf("percentage of profit %f",n);


    }

    else{

         float m = ((cost-sell)/cost)*100; 
        printf("loss ho gaya %f",m);

       

    }

}