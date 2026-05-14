// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i + 1; j < n; j++){

//         // printf("%d %d\n" ,a[i], a[j]);

//             if(a[i] > a[j]){
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j]= temp;
//             }
            
//         }
       
//     }

//     for(int i = 0; i<n; i++){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
    
//     for(int i = 1; i<=5; i++){
//         for(int j = 1; j<=1; j++){
//            printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// # include <stdio.h>
// int main (){
  
//     for(int i = 3; i >= 1; i--){
//         for(int j = 1; j <= i;j++){
//             printf("*");
//         }
//         printf(" ");
//     }
//     return 0;
// }

// Extra Problem - 1
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space = n - 1;
//     for(int i = 0; i < n; i++){
        
//         for(int k = 1; k <= space; k++){
//          printf(" ");
//         }

//         for(int j = 0; j < star; j++){
//            printf("* ");
//         }
        
//         printf("\n");
//         star ++;
//         space --;
//     }
//     return 0;
// }

// Extra Problem - 2
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int val = 1;
//     int space = n - 1;
//     for(int i = 1; i <= n; i++){
        
//         for(int k = 1; k <= space; k++){
//          printf(" ");
//         }

//         for(int j = 1; j <= val; j++){
//            printf("%d " ,j);
//         }
        
//         printf("\n");
//         val ++;
//         space --;
//     }
//     return 0;
// }

// Extra Problem - 3
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int star = n;
//     int space = 0;
//     for(int i = 0; i < n; i++){
        
//         for(int k = 1; k <= space; k++){
//          printf(" ");
//         }

//         for(int j = 1; j <= star; j++){
//            printf("*");
//         }
        
//         printf("\n");
//         star --;
//         space ++;
//     }
//     return 0;
// }

// Extra Problem - 4
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int star = (n *2 ) - 1;
//     int space = 0;
//     for(int i = 1; i <= n; i++){
        
//         for(int k = 1; k <= space; k++){
//          printf(" ");
//         }

//         for(int j = 1; j <= star; j++){
//            printf("*");
//         }
        
//         printf("\n");
//         star -= 2;
//         space ++;
//     }
//     return 0;
// }

// Extra Problem - 5
# include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int star = 65;
   
    for(int i = 1; i <= n; i++){

        for(int j = 65; j <= star; j++){
           printf("%c ",  j);
        }
        
        printf("\n");
        star ++;
       
    }
    return 0;
}