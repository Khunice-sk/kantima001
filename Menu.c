#include <Stdio.h>

int main(){
    int menu;
    printf(">> Menu << \n");
    printf("1) Papaya Salad  \n");
    printf("2) Grilled Chicken  \n");
    printf("3) Sticky Rice  \n");
    printf("Enter Mrnu Number  ");

    scanf("%d",&menu);

    switch (menu)
    {
        case 1: printf("You order is Papaya Salad");
        break;

        case 2: printf("You order is Grilled Chicken");
        break;

        case 3: printf("You order is Sticky Rice");
        break;

        default : printf("lncorrect order");
    }

    return 0;

}

