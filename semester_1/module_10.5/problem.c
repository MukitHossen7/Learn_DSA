// problem 1

// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
    
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

//problem 2
// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int i = 0;
//     int j = n - 1;
//     int palindrome = 1;
//     while (i < j)
//     {
//         if(arr[i] != arr[j]){
//            palindrome = 0;
//         }
//         i++;
//         j--;
//     }
    
//    if(palindrome == 1){
//     printf("YES");
//    }else{
//     printf("NO");
//    }
//     return 0;
// }

//problem 3

// # include <stdio.h>
// # include <string.h>
// int main (){
//     int t;
//     scanf("%d", &t);
//     for(int i = 0; i < t; i++){
//     char s[101];
//     scanf("%s",&s); 

//     if( 10 < strlen(s)){
//       int length = strlen(s) - 2;
//      printf("%c" , s[0]);
//      printf("%d",length);
//      printf("%c\n" , s[length + 1]);
//     }else{
//     printf("%s\n",s);

//     }
//     }
//     return 0;
// }


// problem 4
// # include <stdio.h>
// # include <string.h>
// int main (){
//     char s[100001];
//     fgets(s,100001, stdin);
   
//     int length = strlen(s);

//     for(int i = 0; i < length; i++){
     
//      if(s[i] == '\,'){

//        s[i] = ' ';
//      }
//       if(s[i] >= 'a' && s[i] <= 'z'){
//         s[i] = s[i] - 32;
//       }else if (s[i] >= 'A' && s[i] <= 'Z')
//       {
//        s[i] = s[i] + 32;
//       }
      
//     }
//      printf("%s", s);
//     return 0;
// }

// problem 5
// # include <stdio.h>
// # include <strings.h>
// int main (){
//     char s[1001];
//     scanf("%s", &s);
//     int i = 0;
//     int j = strlen(s) - 1;
//     int palindrome = 1; 
//     while (i < j)
//     {
//         if(s[i] != s[j]){
//             palindrome = 0;
//         }
//         i++;
//         j--;
//     }

//     if(palindrome == 1){
//         printf("YES");
//     }else{
//         printf("NO");
//     }
    
//     return 0;
// }

//problem - 6
// # include <stdio.h>
// #include <string.h>
// int main (){
//     char a[11];
//     char b[11];
//     scanf("%s", &a);
//     scanf("%s", &b);
//     printf("%d %d\n", strlen(a), strlen(b) );
//     printf("%s%s\n", a, b);

//     char temp = a[0];
//     a[0] = b[0];
//     b[0] = temp;
//     printf("%s %s", a, b);
    
//     return 0;
// }

//problem - 7

// # include <stdio.h>
// # include <limits.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//    int max = INT_MIN;
//     int min = INT_MAX;
//     for(int i = 0; i < n; i++){
//         scanf("%d" ,&arr[i]);
//     }
//     for(int i = 0; i < n; i++){
//         if(max < arr[i]){
//         max = arr[i];
//         }
//         if(min > arr[i]){
//           min = arr[i];
      
//         }
//     }
 
//     for(int i = 0; i < n; i++){
//       int temp = min;
//         if(arr[i] == min){
//            arr[i] = max;
//         }else if ( arr[i] == max)
//         {
//               arr[i] = temp;
//         }
        
//         printf("%d ", arr[i]);
//     }
    

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
    
//     int palindromes = 1;

//     for(int i = 0, j = n - 1; i < j; i++, j--){
//         if(a[i] != a[j]){
//             palindromes = 0;
//         }
//     }
   
//     if(palindromes == 1){
//         printf("YES");
//     }else{
//      printf("NO");
//     }
//     return 0;
// }

# include <stdio.h>
# include <limits.h>
int main (){
    int t;
    scanf("%d", &t);

 
  for(int i = 0; i < t; i++){

    int n;
    scanf("%d", &n);
    int a[n];
   for(int i = 0; i < n; i++){
    scanf("%d",&a[i]);
   }


   int min = INT_MAX;

   for(int i = 0; i < n; i++){
     for(int j = i + 1; j < n; j++){

         int sum = a[i] + a[j] + (j - i);

        //   printf("%d\n", result);
// printf("i = %d , j = %d then result = a%d + a%d + j - i = %d + %d + %d-%d = %d\n", 
//                         i+1, j+1, i+1, j+1, a[i], a[j], j+1, i+1, result);
//       long long int  sum = a[i] + a[j] + (j-1);

    //   printf("%d %d\n", i, j);
      if(sum < min){
        min = sum;
      } 
     }
   }

     printf("%d", min);
  }
    return 0;
}