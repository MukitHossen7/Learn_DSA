// # include <stdio.h>
// # include <string.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++){
//         char a[51], b[51];
//         scanf("%s %s",&a, &b);
//          for(int j = 0; j < strlen(a); j++){
//             for(int k = 0; k < strlen(b); k++){
//            if(j == k){
//            printf("%c%c", a[j], b[k]);
           
//          }
//             }
//          }
        
//         printf("\n");
//     }
//     return 0;
// }

// # include <stdio.h>

// int main (){
//     char a[21], b[21];
//     scanf("%s %s", &a, &b);
//     int i = 0;
//     while(1){
//         if (a[i] == '\0' && b[i] == '\0')
//         {
//           printf("%s", a);
//             break;
//         }else if(a[i] == '\0'){
//             printf("%s", a);
//             break;
//         }else if (b[i] == '\0')
//         {
//              printf("%s", b);
//              break;
//         }
//         else if (a[i] == b[i])
//         {
//              i++;
//         }  
        
//         else if (a[i] < b[i])
//         {
//                 printf("%s", a);
//                 break;
//         }else if (b[i] < a[i])
//         {
//                 printf("%s", a);
//                 break;
//         }
//     }
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//     char a[21], b[21];
//     scanf("%s %s", &a, &b);
//   int val = strcmp(a, b);
//   if(val > 0){
//     printf("%s", b);
//   }else if (val < 0)
//   {
//         printf("%s", a);
//   }else if (val == 0)
//   {
//      printf("%s", a);
//   }
  
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//      char a[15], b[15];
//      scanf("%s %s", &a, &b);
//      int a_length =  strlen(a);
//      int b_length = strlen(b);

//     printf("%d %d\n", a_length,b_length);
//     printf("%s%s\n",a,b);

    
//      for(int i = 0;i < strlen(a); i++) {
//     for(int j = 0;j < strlen(b); j++) {
//         if(i == 0 && j == 0){
//             char temp = a[i];
//             a[i] = b[j];
//             b[j] = temp;
//         }
//      }
//      }
//      printf("%s %s", a,b);
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//     char s[1000001];
//     scanf("%s",&s);
//     int length = strlen(s);
//     int sum = 0;
//     for(int i = 0; i < length; i++){
//       sum = sum + (s[i] - '0');
//     }
//     printf("%d", sum);
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//     int t;
//     scanf("%d", &t);
//     for(int i = 0; i < t; i++){
//         char s[101];
//         scanf("%s",&s);
//         int length_s = strlen(s);
//         int min_length = length_s - 2;
//         if(10 > length_s ){
//          printf("%s\n", s);
//         }else{
//             printf("%c%d%c\n",s[0],min_length,s[length_s-1]);
//         }
       
//     }
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//     char s[100001];
//     fgets(s, 100001, stdin);
//     int length = strlen(s);
//     for(int i = 0; i < length; i++){
//         if(s[i] == '\,'){
//             s[i] = ' ';
//         }
//         if(s[i] >= 'a' && s[i] <= 'z'){
//             s[i] = s[i] - 32;
//         }else if (s[i] >= 'A' && s[i] <= 'Z')
//         {
//               s[i] = s[i] + 32;
//         }
        
//     }
   
//       printf("%s",s);
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//     char a[1001];
//     scanf("%s", &a);
//     int length = strlen(a);
//     int x = 0;
//     int y = length - 1;
//     int p = 1;
//     while (x < y)
//     {
       
//        if(a[x] != a[y]){
//          p = 0;
//        }
//      x ++;
//      y -- ;
//     }
//      if(p > 0){
//         printf("YES");
//      }else{
//       printf("NO"); 
//      }

//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     long long int a[n];
//     for(int i = 0; i < n; i++){
//       scanf("%lld", &a[i]);
//     }
//     long long int sum = 0;
//     for(int i = 0; i < n; i++){
    
//      sum = sum + a[i];
    
//     }
//      if(sum < 0){
//       sum = sum * -1;
//      }
//      printf("%lld", sum);
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     int x;
//     scanf("%d", &x);

//    for(int i = 0; i < n; i++){
//        if(a[i] == x){
//         printf("%d",i);
//         break;
//        }else if (a[i] != x &&  i == n - 1)
//        {
//           printf("-1");
         
//        }
       
//     }
  
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//       scanf("%d",&a[i]);
//     }
//     for(int i = 0; i < n; i++){
//       if(a[i] > 0){
//          a[i] = 1;
//       }else if (a[i] < 0)
//       {
//           a[i] = 2;
//       }
//       printf("%d ",a[i]);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//       scanf("%d", &a[i]);
//     }
//     for(int i = 0; i < n; i++){
//       if(a[i] <= 10){
//       printf("A[%d] = %d\n", i, a[i]);
//       }
      
//     }
//     return 0;
// }

// # include <stdio.h>
// # include <limits.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 1; i <= n; i++){
//       scanf("%d",&a[i]);
//     }
//     int min = INT_MAX;
//     int idx = 0;
//     for(int i = 1; i <= n; i++){
//       if(min > a[i]){
//         min = a[i];
//         idx = i;
//       }
    
//     }

//     printf("%d %d",min, idx); 

//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//       scanf("%d",&a[i]);
//     }
//     int j = 0;
//     int k = n - 1;
//     while (j < k)
//     {
//       int temp = a[j];
//       a[j] = a[k];
//       a[k] = temp;
//       j++;
//       k--;
//     }
    
//     for(int i = 0; i < n; i++){
//       printf("%d ",a[i]);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//       scanf("%d",&a[i]);
//     }
//     int j = 0;
//     int k = n- 1;
//     int palindrome  = 1;
//     while (j < k)
//     {
//       if(a[j] != a[k]){
//         palindrome = -1;
//       }
//       j++;
//       k--;
//     }

//      if(palindrome > 0){
//       printf("YES");
//      }else{
//        printf("NO");
//      }

    
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     char a[n];
//     for(int i = 0; i < n; i++){
//       scanf("%c",&a[i]);
//     }
//     for(int i = 0; i < n; i++){
//       printf("%c",a[i]);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//       printf("%d\n",i);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int x[5];
//     for(int i = 0; i < 5; i++){
//      scanf("%d", &x[i]);
//     }
//     for(int i = 0; i < 5; i++){
//     //  printf("%d\n", x[i]);
//     if(x[i] != 1999){
//       printf("Wrong\n");
//     }else{
//             printf("correct");
//             break;
//     }
//     }
//     return 0;
// }

# include <stdio.h>
// int main (){
//     int x;
//     while (scanf("%d",&x) != EOF)
//     {
//       if(x != 1999){
//       printf("Wrong\n");
//     }else{
//             printf("Correct");
//             break;
//     }
//     }
    
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     for(int i = 1; i <= 12; i++){
//       printf("%d * %d = %d\n", n, i, n * i);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int x;
//     scanf("%d",&x);
//     int length = 0;
//     for(int i = 1; i <= x; i++){
//     if(x % i == 0){
//       length ++;
//     }
//     }
//      if(length == 2){
//       printf("YES");
//      }else{
//          printf("NO");
//      }
    
//     return 0;
// }

// # include <stdio.h>
// # include <stdbool.h>
// int main (){
//     int x;
//     scanf("%d",&x);

//     for(int i = 2; i <= x; i++){
//       bool is_prime = true;
//       for(int j = 2; j < i; j++){
//          if(i % j == 0){
//            is_prime = false;
//          }
//       }
//       if(is_prime == true){
//         printf("%d ",i);
//       }
      
//     }
    
//     return 0;
// }

// # include <stdio.h>

// int main (){
//     int n;
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//       if(n % i == 0){
//        printf("%d\n", i);
//       }
     
//     }

   
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     // char s[10000001];
//     char s[100001];
//     scanf("%s",&s);
//     printf("Hello, %s",s);
//     return 0;
// }

# include <stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);

    int sum = x+y;
    long long int mult = (long long int) x * y;
    int sub = x-y;
    printf("%d + %d = %d\n",x,y,sum);
    printf("%d * %d = %lld\n",x,y, mult);
    printf("%d - %d = %d",x,y, sub);
    return 0;
}