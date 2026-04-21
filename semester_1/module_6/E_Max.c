# include <stdio.h>
int main (){
    int n, max = 0;
    scanf("%d", &n);
     for(int i = 1; i <= n; i++){
      int m;
      scanf("%d", &m);
      if(m > max){
        max = m;
      }
     }
    printf("%d\n", max);
    return 0;
}