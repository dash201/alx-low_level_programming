#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

void print_array(int *a, int n)
{
    int i = 0;
    for (i = 0; i < (n - 1); i++)
        printf("%d, ", a[i]);
    printf("%d\n", a[i]);
}

char *_strcpy(char *dest, char const *src)
{
    int a = 0;
    int x = 0;

    for(a = 0; src[a] != '\0'; a++) {
        dest[x] = src[a];
        x++;
    }
    dest[x] = '\0';
    return (dest);
}

int _atoi(char *str)
{

    int a = 0, nb = 0, i = 1, n = 0;

    for (a = 0; str[a] != '\0' && str[a] < '0' || str[a] > '9'; a++) {
        (str[a] == '-') ? i = i * -1 : 0;
    }
    while (str[a] >= '0' && str[a] <= '9') {
        n = (n * 10) + (str[a] - 48);
        if (n == 2147483647 && i == -1)
            return (-2147483647);
        if (n < 0 || n > 2147483647)
            return 0;
        else
            nb = n;
        a++;
    }
    return(nb * i);
}

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

int main(int ac, char **av)
{
    char dest[10];
    int sp[] = {1, 4, 6, 3, 7, 9, 0, 13, 56, 23, 78};
    printf("%s\n", create_password());
    return 0;
}
