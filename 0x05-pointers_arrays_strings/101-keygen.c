#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

char *create_password(void)
{
    int i = 0, b = 0, a = 127;
    char *pasw = malloc(sizeof(char) * 9);
    srand(getpid() * time(NULL));
    while (i < 8) {
        b = rand() % a;
        if (b >= 32) {
            pasw[i] = b;
            i++;
        }
    }
    pasw[i] = '\0';
    return(pasw);
}

int main(void)
{
    char dest[10];
    int sp[] = {1, 4, 6, 3, 7, 9, 0, 13, 56, 23, 78};
    printf("%s\n", create_password());
    return 0;
}
