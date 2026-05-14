# include <stdio.h>
# include <string.h>
int main (){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int val = strcmp(a,b);
    if(0 > val){
        printf("A is smaller");
    }else if (0 < val)
    {
        printf("B is smaller");
    }else if (0 == val)
    {
        printf("Equal");
    }

    return 0;
}
