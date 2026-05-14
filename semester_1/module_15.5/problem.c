// problem - 1 Add


// # include <stdio.h>

// void sum(int x, int y){
//     int ans = x + y;
//     printf("%d", ans);
// }
// int main (){
//     int x , y;
//     scanf("%d %d", &x, &y);
//     sum(x,y);
//     return 0;
// }

// problem - 2 Print

// # include <stdio.h>

// void print (int n){
//     for (int i = 1; i < n; i++){
      
//         printf("%d ", i);
      
//     }
//     printf("%d",n);
// }
// int main (){
//     int n;
//     scanf("%d", &n);
//     print(n);

//     return 0;
// }

//Max and MIN

// # include <stdio.h>
// # include <limits.h>


// void min_max(int a[], int n){
//      long long int min = INT_MAX;
//      long long int max = INT_MIN;
//     for(int i = 0; i < n; i++){
//         if(a[i] < min){
//             min = a[i];
//         } 
        
//         if(a[i] > max){
//             max = a[i];
//         }
  
//    }
//   printf("%lld %lld ",min,max);
// }

// int main (){
//    int n;
//    scanf("%d",&n);
//    if(n == 0){
//     return 0;
//    }
//    int a[n];
//    for(int i = 0; i < n; i++){
//     scanf("%d", &a[i]);
//    }

//    min_max(a, n);
    
//     return 0;
// }

//  Sort Numbers

// # include <stdio.h>
// int main (){
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if(a <= b && a <= c){
//         printf("%d\n",a);
//         if(b <= c){
//             printf("%d\n%d\n", b ,c);
//         }else{
//                 printf("%d\n%d\n",c, b);
//         }
        
//     } else if (b <= a && b <= c)
//     {
//     printf("%d\n",b);
//        if(c <= a){
//             printf("%d\n%d\n", c ,a);
//         }else{
//                 printf("%d\n%d\n",a, c);
//         }
//     } else if ( c <= a && c <= b)
//     {
//         printf("%d\n",c);

//            if(a <= b){
//             printf("%d\n%d\n", a ,b);
//         }else{
//                 printf("%d\n%d\n",b, a);
//         }
//     }

//     printf("\n%d\n%d\n%d", a, b,c);
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i = 0; i < n; i++){
//         if(a[i] <= 10){
//             printf("A[%d] = %d\n",i, a[i]);
//         }
//     }
//     return 0;
// }

//Extra Practice - 1
//  Write a function named my_abs() that receives an integer 
// value as parameter and returns the absolute value of that. 
// Absolute value means if the value is negative it will be 
// converted to positive value. Then print the value in the
//  main function.

// # include <stdio.h>
// int my_abs(int a){
//     int ans = 0;
//   if(a < 0){
//     ans = a * -1;
//   }else{
//     ans = a;
//   }
// }
// int main (){
//     int a;
//     scanf("%d", &a);
//     int ans = my_abs(a);
//     printf("%d", ans);
//     return 0;
// }

//Extra Practice - 2
// Write a function named my_len() which receives a string as
//  a parameter and then counts the length of that string and
// returns that count. Don’t use strlen() function to get the
// length of the string. After receiving that count in the
// main function print it.

// # include <stdio.h>
// # include <string.h>
// int my_len(char s[]){
//     int len = 0;
//     for(int i = 0; s[i] != '\0'; i++){
//         len ++;
//     }
// ;
//   return len;
// }
// int main (){
//     char s[10001];
//     scanf("%s", &s);
//     int ans = my_len(s);
//     printf("%d", ans);
//     return 0;
// }

////Extra Practice - 3

//  Write a function named count_odd() which receives 
//  an array of integers and the size of that array and 
//  counts the number of odd elements in that array and 
//  returns that. Call that function in the main function 
//  and print the count there.

// # include <stdio.h>
// int count_odd(int a[], int n){
//       int odd = 0;
//       for(int i = 0; i < n; i++){
//          if(a[i] % 2 != 0){
//             odd ++;
//          }
//       }
//       return odd;
// }
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     int ans = count_odd(a,n);
//     printf("%d", ans);
//     return 0;
// }

//Extra Practice - 4
// Make a function named change_it() which receives an array 
// of integers and the size of that integer. In the function 
// you need to change the value of the last index of that 
// array and assign 100 there. You don’t need to 
// return anything. After that print the array in 
// the main function and see if it is updated.

// # include <stdio.h>
// void change_it(int a[], int n){
//     a[n - 1] = 100;
  
// }

// int main (){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }

//     change_it(a,n);
      
//     for(int i = 0; i < n; i++){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

//Extra Practice - 5

# include <stdio.h>
void swap_it(int* a, int* b){
     int temp = *a; 
     *a = *b;
     *b = temp;
}
int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(&a, &b);
    printf("%d %d", a, b);
    return 0;
}