# include <stdio.h>
int main (){
int n;
scanf("%d",&n);
int r = n;
int c = n;
int arr[r][c];
for(int i = 0;i < r; i++){
    for(int j = 0; j < c; j++){
        scanf("%d", arr[r][c]);
    }
}
for(int i = 0;i < r; i++){
    for(int j = 0; j < c; j++){
        printf("%d", arr[r][c]);
    }
}
    return 0;
}