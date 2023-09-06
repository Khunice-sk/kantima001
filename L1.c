#include <stdio.h>
int main (void)
{
    char 	name[101];	
	int		water_unit , electric_unit;
    float   elec_price , water_price;
    double  total_elec , total_water , total;


    printf("Enter customer name \t: ");	
    scanf("%s"	,name);	
    printf("Enter electic unit \t: ");
    scanf("%d",&electric_unit);
	printf("Enter water unit \t: ");
    scanf("%d",&water_unit);
    printf("\n--------------------------------------- \t ");

    elec_price = 10.25;
    water_price = 50.50;
    
    printf("\n\nCustermor Name \t: %s", name);
    printf("\nElectric Price \t: %.2f", elec_price);
    printf("\nWater Price \t: %.2f", water_price);
    printf("\n\nElectric Unit \t: %d", electric_unit);
    printf("\nWater Unit \t: %d", water_unit);
    printf("\n--------------------------------------- \t ");

    total_elec  = electric_unit * elec_price;
    total_water = water_unit * water_price;

    printf("\n\nElectric Total Price \t: %.2f", total_elec);
    printf("\nWater Total Price \t: %.2f", total_water);
    printf("\n--------------------------------------- \t ");

    total       = total_elec + total_water;

    printf("\nTotal Price \t: %.2f", total);
    printf("\n--------------------------------------- \t ");

    return 0; 
}