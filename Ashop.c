#include <stdio.h>

void costOfPurchasedQuantity(double Revenue);

int main(){

    double Quantity, unitCost, Revenue, Discount;

    printf("Enter the unitCost: ");
    scanf("%lf", &unitCost);
    printf("Enter the quantity: ");
    scanf("%lf", &Quantity);
    
    Revenue = Quantity * unitCost;
    
    printf("The unit cost is: %.2lf \n", unitCost);
    printf("The quantity is: %.2lf \n", Quantity);
    printf("The total cost for user on all items purchased is %.2lf \n", Revenue);

    costOfPurchasedQuantity(Revenue);

    return 0;
}

void costOfPurchasedQuantity(double Revenue){
    double Discount;
    if(Revenue >= 1000){
        Discount = Revenue * 0.10; // Calculate 10% of the revenue
        Revenue -= Discount; // Subtract the discount from the total revenue
        printf("After applying a 10%% discount, the total cost is %.2lf\n", Revenue);// Printing the final total
    }else{
        printf("No discount given.");
    }
}