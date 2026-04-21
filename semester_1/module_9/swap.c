# include <stdio.h>
int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("A = %d\nB = %d", a, b);
    return 0;
}