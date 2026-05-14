# include <stdio.h>
# include <string.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        char s[110];
        scanf("%s",&s);
        int length_s = strlen(s);
       
        if(10 >= length_s ){
         printf("%s\n", s);
        }else{
            int min_length = length_s - 2;
            printf("%c%d%c\n",s[0],min_length,s[length_s-1]);
        }
       
    }
    return 0;
}