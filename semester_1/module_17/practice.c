// print from 1 to N using recursion

// # include <stdio.h>
// void recursion (int n){
//  if(n == 11){
//     return;
//  }
//  printf("%d\n", n);
//  recursion(n + 1);
// }
// int main (){
//     int n = 1;
//   recursion(n);
//     return 0;
// }

// print from N to 1 using recursion
// # include <stdio.h>
// void recursion (int n){
//  if(n == 0){
//     return;
//  }
//  printf("%d\n", n);
//  recursion(n - 1);
// }
// int main (){
//     int n = 10;
//     recursion(n);
//     return 0;
// }

// print from N to 1 using recursion
// # include <stdio.h>
// void recursion (int n){
//  if(n == 11){
//     return;
//  }
 
//  recursion(n + 1);
//  printf("%d\n", n);
// }
// int main (){
//     int n = 1;
//     recursion(n);
//     return 0;
// }
// # include <stdio.h>
// void recursion (int n , int i){
//   if(i == n + 1){
//     return;
//   }
//   printf("I love Recursion\n");
//   recursion(n , i + 1);
// }


// int main (){
//     int n;
//     scanf("%d", &n);
//   recursion(n , 1);
//     return 0;
// }

# include <stdio.h>
void recursion (int n , int i){
  if(i == 1){
     printf("1");
    return;
  }
 printf("%d ",i);

  recursion(n , i - 1);

}


int main (){
    int n;
    scanf("%d", &n);
    recursion(n ,n);
    return 0;
}