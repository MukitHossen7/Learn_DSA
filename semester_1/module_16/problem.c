// # include <stdio.h>
// int count_before_one(int a[], int n){
//   int count = 0;
//     for (int i = 0; i < n; i++){
//         if(a[i] == 1){
//             break;
//         }
//         count++;
//     }
//     return count;
// } 

// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     int ans = count_before_one(a,n);
  
//     printf("%d\n", ans);

//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int is_palindrome(char str[]){

//   int left = 0;
//   int right = strlen(str) - 1;
//   while (left < right){
//     if (str[left] != str[right]){
//       return 0;
//     }
//     left++;
//     right--;
//   }
//   return 1;
// }
// int main (){
//     char str[1010];
//     scanf("%s", str);
//     int ans = is_palindrome(str);

//     if(ans){
//         printf("Palindrome\n");
//     } else {
//         printf("Not Palindrome\n");
//     }
//     return 0;
// }

// # include <stdio.h>

// void odd_even(){
//      int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     int even_count = 0;
//     int odd_count = 0;
//     for (int i = 0; i < n; i++){
//         if (a[i] % 2 == 0){
//             even_count++;
//         } else {
//             odd_count++;
//         }
//     }
//     printf("%d %d", even_count, odd_count);
// }
// int main (){
//     odd_even();
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int space = n - 1;
  
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= space; j++){
//             printf(" ");
//         }
        
//         for(int j = i; j >= 1; j--){
//             printf("%d", j);
//         }
//         printf("\n");
//          space--;
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);

//     int a[n];
//     for(int i = 1; i <= n; i++){
//         scanf("%d", &a[i]);
//     }
//     int p = 1;
//     int q = n;
//     for(int i = 1; i <= n; i++){
//          while (p < q){
//             int temp = a[p];
//             a[p] = a[q];
//             a[q] = temp;
//             p++;
//             q--;
//         }
    
//         printf("%d ", a[i]);
//     }
//     return 0;
// }



# include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
  
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        
        for(int j = 1; j <= star; j++){
            if(i % 2 != 0){
                printf("#");
            } else {
                printf("-");
            }
       
        }
        printf("\n");

        star += 2;
        space--;
    }

     int star2 = (n * 2) - 3;
      int space2 = 1;
      for(int i = n - 1; i >= 1; i--){
        for(int j = 1; j <= space2; j++){
            printf(" ");
        }
        
        for(int j = 1; j <= star2; j++){
            if(i % 2 != 0){
                printf("#");
            } else {
                printf("-");
            }
       
        }
        printf("\n");

        star2 -= 2;
         space2++;
    }
    return 0;
}