# include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    int div = n / 10;
    int rem = n % 10;
    printf("%d\n", div);
    printf("%d\n", rem);
    if(div % rem == 0 || rem % div == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}