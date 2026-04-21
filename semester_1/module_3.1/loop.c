 
//  # include <stdio.h>
//  int main (){
//     for(int i = 1; i <= 10; i++){
//         printf("hello world\n");
//     }
//     return 0;
//  }

//  # include <stdio.h>
//  int main (){
//     for(int i = 1; i <= 1000; i++){
//         printf("%d\n", i);
//     }
//     return 0;
//  }


//  # include <stdio.h>
//  int main (){
//     for(int i = 2; i <= 100; i += 2){
//         printf("%d\n", i);
//     }
//     return 0;
//  }

//   # include <stdio.h>
//  int main (){
//     for(int i = 4; i <= 100; i = i + 4){
//         printf("%d\n", i);
//     }
//     return 0;
//  }

//   # include <stdio.h>
//  int main (){
//     for(int i = 100; i >= 1; i--){
//         printf("%d\n", i);
//     }
//     return 0;
//  }

//  # include <stdio.h>
//  int main (){
//     for(int i = 2; i <= 100; i *= 2){
//         printf("%d\n", i);
//     }
//     return 0;
//  }

// # include <stdio.h>
// int main (){
//    int n;
//    scanf("%d", &n); 
//    int sum = 0;
//    for(int i = 1; i <= n; i++){
//      sum += i;
//    }
//    printf("total result: %d\n", sum);

// }


// # include <stdio.h>
// int main (){
//     for(int i = 1; i <= 10; i++){
//         if(i % 2 == 0){
//             printf("%d is even\n", i);
//         }
//          else{
//             printf("%d is odd\n", i);
//          }
//         }
//     }

// # include <stdio.h>
// int main (){
//     for(int i = 0; i <= 10; i++){
//     if(i == 5){
//         break;
//      }
//      printf("%d \n", i);
     
//     }
// }

// # include <stdio.h>
// int main (){
//     for(int i = 0; i <= 10; i++){
//     if(i == 5){
//         continue;;
//      }
//      printf("%d \n", i);
     
//     }
// }

// # include <stdio.h>
// int main (){
//     int i = 1;
//     while (i <= 10)
//     {
//         printf("%d \n", i);
//         i++;
//     }
    
// }

// # include <stdio.h>
// int main (){
//     int i = 100;
//    do{
//         printf("%d \n", i);
//         i++;
//    } while(i <= 10);
    
// }

// # include <stdio.h>
// int main(){
//     for( int j = 5; j<= 10; j++){
//     printf("hi ");
//     j ++;
//     } 
// }

// # include <stdio.h>
// int main(){
//     int i = 0, j = 0;  // 1 2 3 4 5
//     for(j = 1; j <= 5; j++){
//         i ++;
//     }
//     printf("%d",j);
    
// }

// # include <stdio.h>
// int main(){
//     for(int i = 0; i <= 10; i++){
//         int  x = 4;
//     }

//     printf("%d", i);
// }

// # include <stdio.h>
// int main(){
//     int i = 1;
//     do {
//         printf("%d \n", i);
//         i++;
//     } while(i < 5);
// }

// # include <stdio.h>
// int main (){
//     int i =  - 5;
//     while(i < 3){
//         printf("hello \n");
//         i += 2;
//     }
// }
// # include <stdio.h>
// int main (){
//     int i = 5;
//     while ( i < 10)
//     {
//      printf("i");
//      i++;
//     }
    
// }

// Write a c program to print 8’s time table to 200
// # include <stdio.h>
// int main (){
//     for(int i = 8; i <= 200; i += 8){
//         printf("%d\n", i);
//     }
//     return 0;

// }

// Write a c program to print all odd number from 100 to 1

// # include <stdio.h>
// int main (){
//     for(int i = 100; i >= 1; i--){
//         if(i % 2 != 0){
//             printf("odd number: %d\n", i);
//         }
//     }
// }

// # include <stdio.h>
// int main (){
//     for(int i = 99; i >= 1; i -= 2){
//        printf("odd number: %d\n", i);
//     }
// }

// Write the differences between break and continue

# include <stdio.h>
int main (){
    for(int i = 0; i <= 10; i++){
        if(i == 5){
            break; // it will exit the loop when i is equal to 5
        }
        printf("%d \n", i);
    }

    printf("=======\n");

    for(int i = 0; i <= 10; i++){
        if(i == 5){
            continue; // it will skip the current iteration when i is equal to 5 and continue with the next iteration
        }
        printf("%d \n", i);
    }
}