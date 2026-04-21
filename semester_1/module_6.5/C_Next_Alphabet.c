# include <stdio.h>
int main (){
    char alphabet;
    scanf("%c", &alphabet);
    if(alphabet == 'z' ){
        printf("%c", alphabet - 25);
    }else{
       printf("%c", alphabet + 1);
    }
    
    return 0;
}