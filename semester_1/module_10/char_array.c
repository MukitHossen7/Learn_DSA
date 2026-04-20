# include <stdio.h>
int main (){
    char charArr[4];
    for(int i = 0; i < 4; i++){
        scanf("%c", &charArr[i]);
    }
    for(int i = 0; i < 4; i++){
        printf("%c", charArr[i]);
    }
    return 0;
}