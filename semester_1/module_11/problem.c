// # include <stdio.h>
// int main (){
//     char x[21], y[21];
//     scanf("%s %s", &x, &y);
//     int i = 0;
//     while (1)
//     {
//         if (x[i] == '\0')
//         {
//           printf("%s",x);
//           break;
//         }else if (y[i] == '\0')
//         {
//           printf("%s",y);
//           break;
//         }else if (x[i] == y[i])
//         {
//             i++;
//         }else if (x[i] < y[i])
//         {
//          printf("%s",x);
//           break;
//         }else if (x[i] > y[i])
//         {
//           printf("%s",y);
//           break;
//         }
   
//     }

//     return 0;
// }

// problem 2
// # include <stdio.h>
// # include <string.h>
// int main (){
//     char a[101], b[101];
//     scanf("%s %s", &a, &b);
//     int length = strlen(b);
//     for(int i = 0; i <= length; i++){
//         a[i] = b[i];
//     }
//     printf("%s %s", a, b);
//     return 0;
// }