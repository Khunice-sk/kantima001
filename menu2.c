#include <Stdio.h>

int main(){
    char menu;
    printf(">> Menu << \n");
    printf("1) Papaya Salad  \n");
    printf("2) Grilled Chicken  \n");
    printf("3) Sticky Rice  \n");
    printf("Enter Mrnu Number  ");

    scanf("%c",&menu);

    switch (menu)
    {
        case '1' : 
        case 'a' : 
        case 'A' : printf("You order is Papaya Salad");         
                   break;

        case '2' : 
        case 'b' : 
        case 'B' : printf("You order is Grilled Chicken");         
                   break;

        case '3' : 
        case 'c' : 
        case 'C' : printf("You order is Sticky Rice");         
                   break;

        default : printf("lncorrect order");
    }

    return 0;

}