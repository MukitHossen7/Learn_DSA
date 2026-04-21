# include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int div = n / 10;
    int rem = n % 10;
    if(rem == 0){
        printf("YES");
    }
    if(rem == 0 || div % rem == 0 || rem % div == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}