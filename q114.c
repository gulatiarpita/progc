#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int start = 0, maxLen = 0;

    for (int i = 0; i < n; i++) {
        if (last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d", maxLen);
    return 0;
}
