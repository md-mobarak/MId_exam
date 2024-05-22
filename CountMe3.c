#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);  

    for (int t = 0; t < T; t++) {
        char S[10001];  
        scanf("%s", S);  
        int capitalCount = 0, smallCount = 0, digitCount = 0;

        int len =strlen(S);
        for (int i = 0; i <= len; i++) {
            if (S[i] >= 'A' && S[i] <= 'Z') {
                capitalCount++;
            } else if (S[i] >= 'a' && S[i] <= 'z') {
                smallCount++;
            } else if (S[i] >= '0' && S[i] <= '9') {
                digitCount++;
            }
        }

        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }

    return 0;
}
