#include <stdio.h>

int main() {
    char *s = "Hello World";
    int c = 0;
    for (int i = 0; s[i]; i++)
        if (strchr("aeiouAEIOU", s[i])) c++;
    printf("%d\n", c);
    return 0;
}