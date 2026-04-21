
//practice 1
// # include <stdio.h>
// int main (){
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if(A >= B){
//         printf("Yes");
//     }
//     else{
//         printf("No");
//     }
//     return 0;
// }

//practice 2
// # include <stdio.h>
// int main (){
//     int A, B;
//     scanf("%d %d", &A, &B);
//      if( A % B == 0 || B % A == 0){
//         printf("Multiples");
//      }else{
//             printf("No Multiples");
//      }
//     return 0;
// }

//practice 3
// # include <stdio.h>
// int main (){
//     int X;
//     scanf("%d", &X);
//     while (X >= 10)
//     {
//         X = X / 10;
//     }
//     if(X % 2 == 0){
//         printf("EVEN");
//     }else{
//         printf("ODD");
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int X;
//     scanf("%d", &X);
//     for(int i = 10; i<= X; i = i /10){
//         if(i % 2 == 0){
//             printf("EVEN");
//         }else{
//             printf("ODD");
//         }
//     }
//     return 0;
// }

// practice 4
// # include <stdio.h>
// int main (){
//     char ch;
//     scanf("%c", &ch);
//     if( ch >= 'a' && ch <= 'z'){
//         ch = ch - 32;
//         printf("%c", ch);
//     }else{
//         ch = ch + 32;
//         printf("%c", ch);
//     }
//     return 0;
// }

// practice 5
// # include <stdio.h>
// int main (){
//     char x ;
//     scanf("%c", &x);
//     if(x >= '0' && x <= '9'){
//         printf("IS DIGIT");

//     }else{
//      printf("ALPHA\n");
//      if(x >= 'a' && x <= 'z'){
//          printf("IS SMALL\n");
//     }else{
//          printf("IS CAPITAL\n");
//      }
//     }
//     return 0;
// }

// practice 6

// # include <stdio.h>
// int main (){
//     int A, B, C;
//     scanf("%d %d %d", &A, &B, &C);

//     if(A <= B && A <= C ){
//         printf("%d ", A);
//     }
//     else if(B <= A && B <= C ){
//         printf("%d ", B);
//     }
//     else if(C <= A && C <= B ){
//         printf("%d ", C);
//     };

//     if(A >= B && A >= C ){
//         printf("%d", A);
//     }
//     else if(B >= A && B >= C ){
//         printf("%d", B);
//     }
//     else if(C >= A && C >= B ){
//         printf("%d", C);
//     };
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int x = 0;
//    if(x == 1){
//    if(x== 0){
//        printf("x is 0");
//    }
//    }else{
//        printf("inside else\n");    
//     }

//     return 0;
// }

// # include <stdio.h>
// int main (){
//       int mark = 76;
//       if(mark >= 80){
//         printf("A+");
//       }else if (mark >= 70)
//       {
//       printf("A");
//       }else if (mark >= 70)
//       {
//         printf("A-");
//       }
      
      
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int x = 0;
//     if(x ==1){
//        if(x >= 0) {
//         printf("true\n");
//        }else{
//         printf("false\n");
//        }
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int x = 5;
//     int y = 4;
//     if(x>= y && x < y + 4){
//         if(y < 5){
//             printf("hi ");
//         }
//         if(y < 10){
//             printf("hi ");
//         }
//     }else
//     return 0;
// }

# include <stdio.h>
int main (){
    long long int x, y;
    scanf("%lld %lld", &x, &y);
  
    printf("%lld + %lld = %lld\n", x, y, x+y);
    printf("%lld * %lld = %lld\n", x, y, x*y);
    printf("%lld - %lld = %lld\n", x, y, x-y);
   
    return 0;
}