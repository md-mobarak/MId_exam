// #include <stdio.h>

// int main() {
//     int T, N, X;
    
//     // Read the number of test cases
//     scanf("%d", &T);
    
//     // Loop over each test case
//     for (int t = 0; t < T; t++) {
//         // Read the size of the array
//         scanf("%d", &N);
        
//         int A[N];
        
//         // Read the elements of the array
//         for (int i = 0; i < N; i++) {
//             scanf("%d", &A[i]);
//         }
        
//         // Read the integer X
//         scanf("%d", &X);
        
//         // Check if X is in the array A
//         int found = 0;
//         for (int i = 0; i < N; i++) {
//             if (A[i] == X) {
//                 found = 1;
//                 break;
//             }
//         }
        
//         // Print the result for this test case
//         if (found) {
//             printf("YES\n");
//         } else {
//             printf("NO\n");
//         }
//     }
    
//     return 0;
// }



 #include<stdio.h>
int main (){
    int testCase;
   scanf("%d", &testCase);
    int ArrSize;
    int CheckNumber;
    for (int i = 0; i < testCase; i++)
    {
        
        scanf("%d",&ArrSize);
        int arr[ArrSize];
        for (int i = 0; i < ArrSize; i++)
        {
            /* code  Array input */
            scanf("%d",&arr[i]);
        }
        scanf("%d",&CheckNumber);

        int found = 0;
        for (int i = 0; i < ArrSize; i++)
        {
            /* code */
            if(arr[i]==CheckNumber){
              found =1;
              break;
            }
        }
        if (found==1)
        {
            /* code */
            printf("YES\n");
        }else{
               printf("NO\n");
        }
        
        
        

    }
    
    return 0;
}