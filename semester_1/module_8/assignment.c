// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         printf("%d. I Want More Assignments\n", i);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);

//     if(n > 0){
//         for(int i = 1; i <= n; i++){
//             printf("%d ", i);
//         }
//     }else{
//         for(int i = n; i <= 0; i++){
//             printf("%d ", i);
//         } 

//     return 0;
// }
// }


// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     if(n < 0){
//         for(int i = n; i <= 0; i++){
//             printf("%d ", i);
//         }  
//     }

//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//    for(int i = 0; i < n; i++){
//        scanf("%d", &arr[i]);
//     }
//     for(int i = n - 1; i >= 0; i--){
//         // printf("%d ", arr[i]);
//         // printf("%d ", i);
//         if(i % 2 != 0){
//           printf("%d ", arr[i]);   
//     }   
// }
// return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//    for(int i = 0; i < n; i++){
//        scanf("%d", &arr[i]);
//     }
//     for(int i = n - 1; i >= 0; i--){
//         if(i % 2 != 0){
//           printf("%d ", arr[i]);   
//     }   
// }
// return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     int positiveCount = 0;
//     int negativeCount = 0;
//     for(int i = 0; i < n; i++){
//          scanf("%d", &arr[i]);
//      }
//       for(int i = 0; i < n; i++){
//         //  printf("%d ", arr[i]);

//        if( arr[i] > 0){
//         //    printf("%d ", arr[i]);
//            positiveCount += arr[i];
//        }else{
//         // printf("%d ", arr[i]);
//         negativeCount += arr[i];
//        }
       
//      }
//         printf("%d %d", positiveCount, negativeCount);
     
//     return 0;
// }

# include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
     int x , v;
     scanf("%d %d", &x, &v);

   for(int i = n - 1; i >= 0; i--){
            if(i == x){
              arr[i] = v;
            }
        printf("%d ", arr[i]);
    }
    return 0;
}