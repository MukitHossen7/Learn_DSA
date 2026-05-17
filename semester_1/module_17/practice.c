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
# include <stdio.h>
void recursion (int n){
 if(n == 11){
    return;
 }
 
 recursion(n + 1);
 printf("%d\n", n);
}
int main (){
    int n = 1;
    recursion(n);
    return 0;
}
