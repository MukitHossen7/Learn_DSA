//problem 1

// # include <stdio.h>
// # include <math.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int matrix[n][n];
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     int primary = 0, secondary = 0;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             if(i == j){
//                 primary += matrix[i][j];
//             }
//                 if(i + j == n - 1){
//                     secondary += matrix[i][j];
//                 }
//         }
//     }
//     int absolute_difference = abs(primary - secondary);
//     printf("%d", absolute_difference);
//     return 0;
// }

//problem 2

# include <stdio.h>
int main (){
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int x ;
    scanf("%d", &x);
    int flag = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if(matrix[i][j] == x){
                flag = 1;
                break;
            }
        }
       
    }
  
    if(flag != 1){
        printf("will take number");
    }else{
        printf("will not take number");
    }
    return 0;
}