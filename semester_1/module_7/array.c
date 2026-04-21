# include <stdio.h>
// int main (){
//     int num [5];
//     num [0] = 10;
//     num [1] = 20;
//     num [2] = 30;
//     num [3] = 40;
//    printf("%d\n", num [2]);
//    printf("%d\n", num [0]);
//    printf("%d\n", num [1]);
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int num [7];
//     for(int i = 0; i < 7; i++){
//         scanf("%d", &num [i]);
//     }
//     for(int i = 0; i < 7; i++){
//         printf("%d\n",num [i]);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int numArr [n];
//     for(int i = 0; i< n; i++){
//         scanf("%d", &numArr [i]);
//     }

//     for(int i = 0; i < n; i++){
//         printf("%d\n", numArr [i]);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int numArr [n];
//     for(int i = 0; i< n; i++){
//         scanf("%d", &numArr [i]);
//     }
//     for(int i= n-1; i>= 0; i--){
//         printf("%d\n", numArr [i]);
//     }
//     return 0;
// }

// Array initialization

// # include <stdio.h>
// int main (){
//     // int num_arr[5] = {10, 20}; //declara + initial
//     // int num_arr[5] = {10};
//     int num_arr[5] = {0};
//     for(int i = 0; i < 5; i++){
//         printf("%d ", num_arr [i]);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int num_arr [n];
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         scanf("%d", &num_arr [i]);
      
//     }
//         for(int i = 0; i < n; i++){
//             printf("%d ", num_arr [i]);
//               sum += num_arr [i];
//         }
//     printf("\nSum: %d\n", sum);
//     return 0;
// }

// Take an array from input and print all the even numbers of that array.
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int num_arr [n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &num_arr [i]);
//     }
//     for(int i = 0; i < n; i++){
      
//         if(num_arr [i] % 2 == 0){
//             printf("%d ", num_arr [i]);
//         }
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int num_arr [n];
//     int countOdd;
//     for(int i = 0; i < n; i++){
//         scanf("%d", &num_arr [i]);
//     }

//     for ( int i = 0; i < n; i++)
//     {
//         if(num_arr [i] % 2 != 0){
//             printf("%d ", num_arr [i]);
//                 countOdd++;
//         }
//     }
//         printf("\nCount of odd numbers: %d\n", countOdd);
    
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int num_arr [n];
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &num_arr [i]);
//     }

//     for(int i = 0; i < n; i++){
//         printf("%d ", num_arr [i]);
//         if(num_arr [i] > max){
//             max = num_arr [i];
//         }
//     }
//     printf("\nMax: %d\n", max);
//     return 0;
// }

# include <stdio.h>
# include <limits.h>
int main (){
    int n;
    scanf("%d", &n);
    int num_arr [n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_arr [i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", num_arr [i]);
        if(num_arr [i] < min){
            min = num_arr [i];
        }
    }
    printf("\nMin: %d\n", min);
    return 0;
}