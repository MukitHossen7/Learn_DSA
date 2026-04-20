// # include <stdio.h>
// # include <string.h>
// int main (){
//     char s[1001];
//     scanf("%s", s);
//     char t[1001];
//     scanf("%s", t);
//    int s_size = strlen(s);
//    int t_size = strlen(t);
   
//     printf("%d %d", s_size, t_size);
//     printf("\n%s %s", s, t);
    
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int t;
//     scanf("%d", &t);
//    for(int i = 0; i < t; i++){
//        int w, h;
//        scanf("%d %d", &w, &h);
//        if(w == h){
//            printf("Square\n");
//        }
//        else{
//            printf("Rectangle\n");
//        }
//    }
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//     char s[100001];
//      fgets(s, 100001, stdin);
//     int length = strlen(s);
  
//     for(int i = 0; i < length; i++){
//         if(s[i] == '\,'){
//             s[i] = ' ';
//         }
       
//         if( s[i] >= 'a' && s[i] <= 'z'){
//           s[i] = s[i] - 32;
//         }else if( s[i] >= 'A' && s[i] <= 'Z'){
//           s[i] = s[i] + 32;
//         }
          
//          printf("%c", s[i]);
//         }
//         return 0;
//     }
     

# include <stdio.h>
# include <string.h>
int main (){
    char s[1001];
   scanf("%s", &s);
   int i = 0;
   int j = strlen(s) - 1;
   int palindrome = 1;
   while (i < j)
   {
     if(s[i] != s[j]){
       palindrome = 0;
     }
     i++;
     j--;
   }
   if(palindrome == 1){
    printf("YES");
   }else{
    printf("NO");

   }

    return 0;
}