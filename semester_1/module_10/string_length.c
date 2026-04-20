// # include <stdio.h>
// int main (){
//     char str[101];
//     // scanf("%s", str);
//     fgets(str, 101, stdin);

//    int length = 0;
//    for(int i = 0; str[i] != '\0'; i++){
//          length++;
//    }
//    printf("%d\n", length);
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//     char str[20];
//     scanf("%s",&str);
//     int length = strlen(str);
//     printf("%d", length);
//     return 0;
// }

// # include <stdio.h>

// int main (){
//     char s[1000001];
//     fgets(s, 1000001, stdin);

//     for(int i = 0; s[i] != '\\'; i++){
//         printf("%c", s[i]);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     char s[1000001];
//     scanf("%s", &s);
//     int sum = 0;
//     for(int i = 0; s[i] != '\0'; i++){
//          sum = sum + ( s[i] - '0');
//     }
//     printf("%d ", sum);
//     return 0;
// }

# include <stdio.h>
int main (){
     char str[20];
     scanf("%c", &str);
     printf("%s", str);
    return 0;
}