// # include <stdio.h>
// #include <limits.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int low = INT_MAX;
//     int pos = 0 ;
//     for(int i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++){
//         if(a[i] < low){
//             low = a[i];
//             pos = i + 1;
//         }
//     }
//     printf("%d %d", low, pos);
  
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//        if( a[i] <= 10)
//        {
//            printf("A[%d] = %d\n", i, a[i]);
//        }
//     }
    
//     return 0;
// }

// # include <stdio.h>
// # include <stdlib.h>
// int main (){
//     long long int n;
//     scanf("%lld", &n);
//     long long int a[n];
//     long long int sum = 0;
//     for(int i=0; i<n; i++){
//         scanf("%lld", &a[i]);
//     }
//     for(long long int i=0; i<n; i++){
//         sum += a[i];
//     }
//      printf("%lld\n", abs(sum));
//     return 0;
// }

// # include <stdio.h>
// # include <stdlib.h>
// int main (){
//      int n;
//      scanf("%d", &n);
//      int a[n];
//      long long int sum = 0;
//     for(int i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i= 0; i< n; i++){
//         sum += a[i];
//     }
//     sum = llabs(sum);
//     printf("%lld\n", sum);
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//    int a[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }
//     int x;
//     scanf("%d", &x);
//     for(int i=0; i<n; i++){
//        if(a[i] == x){
//         printf("%d\n", i);
//         break;
//        }else if(a[i] != x && i == n-1){
//         printf("-1\n");
       
//        }
//     }

//     return 0;
// }

# include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
     if(a[i] > 0){
        a[i] = 1;
        printf("%d ", a[i]);
     }else if (a[i] < 0){
        a[i] = 2;
        printf("%d ", a[i]);
    }else if (a[i] == 0){
        a[i] = 0;
        printf("%d ", a[i]);
    }
}
    return 0;
}