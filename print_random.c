#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();  // Declaration of randchar function

int main() {
    int a;

    srand((unsigned)time(NULL));

    printf("Today's random word: ");
    for (a = 0; a < 7; a++)
        putchar(randchar());
    putchar('\n');

    return 0;
}

