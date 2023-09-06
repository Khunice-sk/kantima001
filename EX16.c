#include <stdio.h>

int main(void)
{
    int weight, height;
        printf("Enter weight(kg) : "); scanf("%d", &weight);
        printf("Enter hetght(cm) : "); scanf("%d", &height);

    float hMeter = height/100.0;
    float BMI = (float)weight/(hMeter*hMeter);
    printf("You BMI : %.1f\n",BMI);

    if(BMI<18.5)
        printf("Too thin \n");

    else if (BMI >=18.5 && BMI <=22.9)
        printf("Good \n");

    else if (BMI >=22.9 && BMI <=24.9)
        printf("Little fat \n");

    else if (BMI >=24.9 && BMI <=29.9)
        printf("Big Fat \n");

    else 
        printf("Dangerous Fat \n");
        
    return 0;
} 