

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
    int count = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (matrix[i][j] == 0){
                count++;
            }
        }
    }
    int total = r * c;
    if(count == total){
        printf("The matrix is a zero matrix.\n");
    }
    else{
        printf("The matrix is not a zero matrix.\n");
    }
   
    return 0;
}