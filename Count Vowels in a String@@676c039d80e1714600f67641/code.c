#include <stdio.h>

int main() {
    char s[] = "OpenAI ChatGPT";
    int c = 0;
    for (int i = 0; s[i]; i++)
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') c++;
    printf("%d", c);
    return 0;
}