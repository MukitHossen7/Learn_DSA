// problem 1
// # include <stdio.h>
// int main(){
//     printf("I Love Practice");
// }

// problem 2
// # include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int sum = a + b;
//     printf("%d",sum);
// }


// problem 3

// # include <stdio.h>
// int main(){
//     int a;
//     long long int b;
//     double c;
//     char d;
//     scanf("%d %lld %lf %c",&a,&b,&c,&d);
//     printf("%d\n%lld\n%.2lf\n%c",a,b,c,d);
// }

// problem 4
// # include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         printf("I Love Practice \n");
//     }
// }

// problem 5
// # include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         if(i % 5 == 0){
//             printf("%d Yes\n",i);
//         }else{
//             printf("%d No\n",i);
//         }
//     }
// }

// # include <stdio.h>
// int main(){
//     int a;
//     int b;
//     scanf("%d %d",&a,&b);
//     long long int mult = (long long int)a * b;
//     printf("%lld",mult);
//     return 0;
// }

// # include <stdio.h>
// int main(){
//     long long int A;
//     long long int B;
//     scanf("%lld %lld",&A,&B);
//     long long int mult = A * B;
//     printf("%lld",mult);
//     return 0;
// }

// # include <stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);
//     if(N % 3 == 0){
//         printf("YES"); 
//     }else{
//         printf("NO");
// }
//   return 0;
// }

// # include <stdio.h>
// int main(){
//   int N;
//     scanf("%d",&N);
//     for(int i = 1; i <= N; i++){
//        if(i % 3 == 0 && i % 7 == 0){
//            printf("%d\n",i);
//        }
//     }
// }

// # include <stdio.h>
// int main(){
//     long long int N;
//     scanf("%lld",&N);
//     if(N > 1000){
//         printf("I will buy Punjabi\n");

//         if(N - 1000 >= 500){
//             printf("I will buy new shoes\n");
//             printf("Alisa will buy new shoes\n");
//         }
//     }else
//     {
//         printf("Bad luck!\n");
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int div = n / 10;
//     int rem = n % 10;
//     if(rem == 0){
//         printf("YES");
//     }
//     if(div % rem == 0 || rem % div == 0){
//         printf("YES");
//     }else{
//         printf("NO");
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int t;
//     scanf("%d", &t);

//     for(int i = 1; i <= t; i++){
//        int n;
//         scanf("%d", &n);
//         if(n == 0){
//         printf("0\n");
//     }else{
//      while (n > 0)
//        {
//          int rem = n % 10;
//           printf("%d ", rem);
//           n = n / 10;
//   }
//      printf("\n");
//     }
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//   int t;
//   scanf("%d", &t);
//   for(int i = 1; i <= t; i++){
//     int n;
//     scanf("%d", &n);
//     long long int fact = 1;
//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//     }
//     printf("%lld\n", fact);
//   }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//         printf("%d\n" ,i);
//     }
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
   int t;
   scanf("%d", &t);
   for(int i = 1; i <= t; i++){
     int x, y;
    scanf("%d %d", &x, &y);

    int min, max;
    int sum = 0;

    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }

    for (int i = min + 1; i < max; i++) {
       
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);
   }
    return 0;
}