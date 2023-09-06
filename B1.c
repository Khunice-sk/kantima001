#include <stdio.h>
int main (void)
{
    char grade;
    int age;
    float GPA;
    double next;

    printf("Enter Grade : \t\t");
    scanf("%c" ,&grade);
    printf("Enter Age : \t\t");
    scanf("%d" ,&age);
    printf("Enter GPA : \t\t");
    scanf("%f" ,&GPA);
    printf("Enter Next GPA : \t");
    scanf("%lf", &next);
    
    printf("\nMy Grade\t= %c", grade);
    printf("\nMy Age\t\t= %d", age);
    printf("\nMy GPA\t\t= %.2f", GPA);
    printf("\nMY Next GPA\t= %.4f", next);
    return 0; 
}