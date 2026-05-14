# include <stdio.h>
void sum(int a, int b){
    int ans = a + b;
    printf("%d", ans);
}

# include <stdio.h>
int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    return 0;
}