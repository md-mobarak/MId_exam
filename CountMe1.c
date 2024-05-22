#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int towCount = 0;
    int threeCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  
            towCount++;
        }
        if (arr[i] % 3 == 0 && arr[i]%2 !=0) {  
            threeCount++;
        }
    }

    printf("%d \n%d",  towCount,threeCount);
     // Add newline for better formatting

    return 0;
}