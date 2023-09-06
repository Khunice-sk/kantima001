#include <stdio.h>

int main(vold)
{
    char grade;
    int age;
    printf("Enter Grade and age : ");
    scanf("%c %d",grade ,&age);
    //printf("Enter age : ");
    //scanf("%c",&age);
    printf("My Grade\t = %c\n",grade);
    printf("My age\t\t = %d\n",age);

    return 0;
}