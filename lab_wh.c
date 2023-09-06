#include <stdio.h>

int main() {

    int x = 2;
    int y = 1;

    while (y <= 12) {

        int result = x * y;
        printf("%d * %d = %d\n", x, y, result);
        y++;

    }
    return 0;
}