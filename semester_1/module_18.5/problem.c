
//problem - 1

// # include <stdio.h>
// void recursive(int n){
//     if (n == 0){
//         return;
//     }
//     recursive(n-1);
//     printf("%d\n", n);
   
// }
// int main (){
//     int n;
//     scanf("%d", &n);
//     recursive(n);
//     return 0;
// }

// problem - 2
// # include <stdio.h>
// void recursive(int n){
//     if (n == 0){
//         return;
//     }
//     if(n == 1){
//         printf("%d", n);
//         return;
//     }
//     printf("%d ", n);
//     recursive(n-1);
   
// }
// int main (){
//     int n;
//     scanf("%d", &n);
//     recursive(n);
//     return 0;
// }

// problem - 3
// # include <stdio.h>
// # include <math.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int matrix[n][n];

//         for (int i = 0; i < n; i++){
//             for (int j = 0; j < n; j++){
//                 scanf("%d", &matrix[i][j]);
//             }
//         }
//         int primary_diagonal = 0;
//         int secondary_diagonal = 0;
//         for (int i = 0; i < n; i++){
//             for (int j = 0; j < n; j++){
//                 if (i == j){
//                     primary_diagonal += matrix[i][j];
//                 }
//                 if (i + j == n - 1){
//                     secondary_diagonal += matrix[i][j];
//                 }
//             }
           
//         }
//     int difference = primary_diagonal - secondary_diagonal;
//     printf("%d", abs(difference));
//     return 0;
// }

//problem - 4
// # include <stdio.h>
// int main (){
//     int r , c;
//     scanf("%d %d", &r, &c);
//     int matrix[r][c];

//     for (int i = 0; i < r; i++){
//         for (int j = 0; j < c; j++){
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     int x;
//     scanf("%d", &x);
//     for (int i = 0; i < c; i++){
//         for (int j = 0; j < r; j++){
//             if (matrix[j][i] == x){
//                 printf("will not take number");
//                 return 0;
//             }
//         }
        
//     }
//   printf("will take number");
//   return 0;  
// }

// problem - 5
# include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int left = 0;
    int right = n - 1;
    while (left <= right){
        printf("%d ", arr[left]);
        if (left != right){
            printf("%d ", arr[right]);
        }
      left++;
    right--;
    }
    return 0;
}

// problem - 6
// # include <stdio.h>  pora slove korbo

// problem - 7

// # include <stdio.h>
// void recursion(long long arr[], int n, int index){
//       long long sum = 0;
//       for (int i = 0; i <= index; i++){
//         sum += arr[i];
//     }
//     if (index == n - 1){
//         printf("%lld", sum);
//         return;
//     }
  
    

//     recursion(arr, n, index + 1);
    
// }
// int main (){
//    int n;
//     scanf("%d", &n);
//     long long arr[n];
//     for (int i = 0; i < n; i++){
//         scanf("%lld", &arr[i]);
//     }
//     recursion(arr, n, 0);
//     return 0;
// }

// problem - 8

// # include <stdio.h>
// # include <stdbool.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int count = 0;
//     bool allEven = true;
//    while (1){
//      for (int i = 0; i < n; i++){
//         if (arr[i] % 2 == 0){
//             arr[i] /= 2;
//         }else{
//             allEven = false;
//             break;
//         }
//     }
//     if (!allEven){
//         break;
//     }
//     count++;
//    }
//     printf("%d", count);
//     return 0;
// }