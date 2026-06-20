
// problem 1

// # include <stdio.h>
// int main (){
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c];
//     for (int i = 0; i < r; i++){
//         for (int j = 0; j < c; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (int i = 0; i < r; i++){
//         for (int j = c - 1; j >= 0; j--){
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// problem 2

// # include <stdio.h>
//  void recursion (int n){
//    if(n == 0){
//       return;
//    }
//   int rem = n % 10;
//   recursion(n / 10);
//   printf("%d ", rem);

 
//  }
//  int main (){
//   int t;
//   scanf("%d", &t);
//   while(t--){
//   int n; 
//  scanf("%d", &n);
//  if(n == 0){
//     printf("0");
//  }
//  recursion(n);
//  printf("\n");
//  }
//   return 0;
//  }

// problem 3

// # include <stdio.h>
// # include <string.h>
// int main (){
//   char s[210];
//   fgets(s, 210, stdin);
//    int length = strlen(s);
//    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
//    int count = 0;
//    for (int i = 0; i < length; i++){
//      for (int j = 0; j < 5; j++){
//        if (s[i] + 32 == vowels[j]){
//          count++;
//        }else if (s[i] == vowels[j]){
//          count++;
//        }
//      }
//    }
//    printf("Number of vowels: %d\n", count);
 
//    return 0;
// }

// problem 3
// #include <stdio.h>
// #include <string.h>

// int countVowels(char s[], int index) {
//     if (s[index] == '\0') {
//         return 0;
//     }

//     char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
//     int count = 0;

//     for (int j = 0; j < 5; j++) {
//         if (s[index] + 32 == vowels[j]) {
//             count++;
//         }
//         else if (s[index] == vowels[j]) {
//             count++;
//         }
//     }

//     return count + countVowels(s, index + 1);
// }

// int main() {
//     char s[210];

//     fgets(s, 210, stdin);

//     int count = countVowels(s, 0);

//     printf("%d\n", count);

//     return 0;
// }

// problem 4
# include <stdio.h>
void factorial(long long int n, long long int count){
    if (n == 0){
        printf("%lld\n", count);
        return;
    }
    factorial(n - 1, count * n);
}
int main (){
    long long int n;
   scanf("%lld", &n);
   factorial(n, 1);
  
    return 0;
}