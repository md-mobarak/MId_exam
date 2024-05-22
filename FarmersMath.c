#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);  // Read M1, M2, and D for each test case

        // Calculate the new number of days required with the additional farmers
        int new_days = D * M1 / (M1 + M2);

        // Calculate the difference in days
        int fewer_days = D - new_days;

        // Print the result for the current test case
        printf("%d\n", fewer_days);
    }

    return 0;
}
