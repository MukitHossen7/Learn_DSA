# include <stdio.h>
int sum (){
    int a, b;
    scanf("%d %d",&a,&b);
    int ans = a + b;
    return ans;
}

# include <stdio.h>
int main (){
    int ans = sum();
    printf("%d", ans);
    return 0;
}