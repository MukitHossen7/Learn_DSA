// # include <stdio.h>
// int main (){
//     char str[10];
//     scanf("%s", &str);
//     printf("%s\n", str);
//     printf("%d\n", str[5]);

//     return 0;
// }

# include <stdio.h>
int main (){
    char str[50];
    // gets(str);
    fgets(str,50, stdin);
    // gets(str);
    printf("%s", str);
    return 0;
}