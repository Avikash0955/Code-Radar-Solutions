#include <stdio.h>
#include <string.h>

int main() {
    char *s = "Hello World"; // hardcoded string
    int c = 0;
    for (int i = 0; s[i]; i++)
        if (strchr("aeiouAEIOU", s[i])) c++;
    printf("%d\n", c); // outputs number of vowels
    return 0;
}
