// # include <stdio.h>
// int main (){
//     int x = 10;
//     printf("%d\n", x);
//     // printf("%p\n",&x);

//     int* pointer;
//     pointer = &x;
   
//     printf("%p\n",pointer);
//    *pointer = 200;
//     printf("%d\n", *pointer);
//     printf("%d\n", x);
    
//     return 0;
// }

// # include <stdio.h>

// int fun(int* x){
//   *x = 50;
// }

// int main (){
//     int x = 20;
//     fun(&x);
//     printf("%d",x);
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int x;
//     scanf("%d",&x);
//     printf("%d",x);
//     return 0;
// }

//Pointer in array
// # include <stdio.h>
// int main (){
//     int a[5] = {10,20,30,40,50};
//     *(a + 2) = 200;
//     printf("%p\n",&a[0]);
//     printf("%p\n",&a);
    // printf("%d\n",a[1]);
    // printf("%p\n",&a[1]);
    // printf("%p\n",&a[2]);

//     for(int i = 0; i < 5; i++){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

//Function with array

// # include <stdio.h>

// void fun(int a[],int n){
//     a[2] = 2000;

//      for(int i = 0; i < n; i++){
//         printf("%d ",a[i]);
//     }
// }

// int main (){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d",&a[i]);
//     }

//     fun(a, n);
//     printf("\n");
//     for(int i = 0; i < n; i++){
//         printf("%d ",a[i]);
//     }


//     return 0;
// }

// # include <stdio.h>

// void fun (char a[]){
//     printf("%s", a);
// }
// int main (){
//     char a[10];
//     scanf("%s", a);
//     fun(a);
//     return 0;
// }

// # include <stdio.h>

// void swap (int *p, int *q){
//   int temp = *p;
//   *p = *q;
//   *q = temp;
// }

// int main (){
//     int a = 6, b = 5;
//     swap(&a, &b);
//      printf("%d %d\n", a,b);
//     return 0;
// }


// # include <stdio.h>

// void m (int *p){
//    int i= 0;
//    for(i = 0; i < 5; i++){
//     printf("%d ",p[i]);
//    }
// }

// int main (){
//     int a[5] = {6, 5,3};
//     m(a);
//     return 0;
// }

// # include <stdio.h>

// void swap (int p, int q){
//   int temp = p;
//    p = q;
//   q = temp;
// }

// int main (){
//     int a = 6, b = 5;
//     swap(a, b);
//      printf("%d %d\n", a,b);
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int ary[4] = {1,2,3,4};
//     printf("%d\n",*ary);
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int ary[4] = {1,2,3,4};
//     int *p;
//     p = ary + 3;
//     *p = 5;
//     printf("%d\n",ary[3]);
//     return 0;
// }


//Take 2 values as input and swap them using a function

// # include <stdio.h>
// int swap (int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("%d %d", a,b);
// }
// int main (){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     swap(a,b);
//     return 0;
// }

//Take an array as input and then reverse it using a function

# include <stdio.h>

int reverse(int a[], int n){
   
  int p = 0;
int q = n - 1;  
   
   for(int i = 0; i < n; i++){
           while (a[p] < a[q]){
        int temp = a[p];
        a[p] = a[q];
        a[q] = temp;
        p ++;
        q --;
    }
        printf("%d ", a[i]);
    }
}
int main (){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
reverse(a,n);
    return 0;
}

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }

//     int p = 0;
//     int q = n - 1;

     
    
//     for(int i = 0; i < n; i++){
//            while (a[p] < a[q]){
//         int temp = a[p];
//         a[p] = a[q];
//         a[q] = temp;
//         p ++;
//         q --;
//     }
//         printf("%d ", a[i]);
//     }
   
//     return 0;
// }