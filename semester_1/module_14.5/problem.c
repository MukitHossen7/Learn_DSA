
// Problem 1
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int star = n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < star; j++){
//             printf("*");
//         }
//         printf("\n");
//         star --;
        
        
//     }
//     return 0;
// }


// Problem 2
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space = n - 1;
//     for(int i = 0; i < n; i++){
//         for(int k = 0; k < space; k++){
//             printf(" ");
//         }
//         for(int j = 0; j < star; j++){
//             printf("*");
//         }
//         printf("\n");
//         star += 2;
//         space --;
        
        
//     }
//     return 0;
// }

// Problem 3
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space = n - 1;
//     for(int i = 0; i < n; i++){
//         for(int k = 0; k < space; k++){
//             printf(" ");
//         }
//         for(int j = 0; j < star; j++){
//             printf("*");
//         }
       
//         printf("\n");
//         star += 2;
//         space --;
        
        
//     }
  
//     int star2 = (n * 2) - 1;
//     int space2 = 0;
//     for(int i = 0; i < n; i++){
//         for(int k = 0; k < space2; k++){
//             printf(" ");
//         }
//         for(int j = 0; j < star2; j++){
//             printf("*");
//         }
       
//         printf("\n");
//         star2 -= 2;
//         space2 ++;
        
        
//     }
//     return 0;
// }

//Problem - 4
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(a[i] > a[j]){
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
        
//         }
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

//Problem - 5
// # include <stdio.h>

// void shift_zero(int a[], int n){
//   for(int i = 1; i <= n; i++){
//         if(a[i] != 0){
//            printf("%d ", a[i]);
//         }
//     }
//   for(int i = 1; i <= n; i++){
//         if(a[i] == 0){
//            printf("%d ", a[i]);
//         }
//     }
        
//     }



// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 1; i <= n; i++){
//         scanf("%d", &a[i]);
//     }
  
//     shift_zero(a, n);
    

//     return 0;
// }

// Problem - 6
// # include <stdio.h>
// # include <limits.h>
// void min_max (int a[], int n){
//  int min = INT_MAX;
//     int max = INT_MIN;
//     for(int i = 0; i < n; i++){
//         if( min > a[i]){
//             min = a[i];
//         }
//         if( max < a[i]){
//             max = a[i];
//         }
//     }
//    printf("%d %d",min, max);

// }


// int main (){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d",&a[i]);
//     }

//     min_max(a,n);
   
//     return 0;
// }

// Problem 7

# include <stdio.h>
int main (){
    int a , b, c;
    char s, q;

    scanf("%d %c %d %c %d",&a, &s,&b, &q, &c);

    int ans = 0;
    if(s == '+' ){
        ans = a + b;
    } else if(s == '-' ){
        ans = a - b;
    } else if(s == '*' ){
        ans = a * b;
    }



    if(ans == c){
        printf("Yes");
    }else{
        printf("%d",ans);
    }
    return 0;
}

//Extra problem - 1

// # include <stdio.h>
// int main (){
//      int n;
//      scanf("%d", &n);
//      int star = 1;
//      int space = n - 1;
//      for(int i = 0; i < n; i++){
//         for(int j = 0; j < space; j++){
//             printf(" ");
//         }
//         for(int k = 0; k < star; k++){
//             printf("*");
//         }
//         printf("\n");
//         star ++;
//         space --;
//      }
//     return 0;
// }

//Extra problem - 2

// # include <stdio.h>
// int main (){
//      int n;
//      scanf("%d", &n);
//      int star = (n * 2) - 1;
//      int space = 0;
//      for(int i = 0; i < n; i++){
//         for(int j = 0; j < space; j++){
//             printf(" ");
//         }
//         for(int k = 0; k < star; k++){
//             printf("*");
//         }
//         printf("\n");
//         star -= 2;
//         space ++;
//      }
//     return 0;
// }

//Extra problem - 3

// # include <stdio.h>

// int char_to_ascii(char a){
//     int ans = a;
//    return ans;
  
// }

// int main (){
//     char a;
//     scanf("%c",&a);
//     int ans = char_to_ascii(a);
//     printf("%d", ans);
//     return 0;
// }

//Extra problem - 4
// # include <stdio.h>

// char  small_to_capital(char a){
//     int ans = a - 32;
//    return ans;
  
// }

// int main (){
//     char a;
//     scanf("%c",&a);
//     char ans = small_to_capital(a);
//     printf("%c", ans);
//     return 0;
// }

//Extra problem - 5
// # include <stdio.h>

// char  capital_to_small(char a){
//     int ans = a + 32;
//    return ans;
  
// }

// int main (){
//     char a;
//     scanf("%c",&a);
//     char ans = capital_to_small(a);
//     printf("%c", ans);
//     return 0;
// }