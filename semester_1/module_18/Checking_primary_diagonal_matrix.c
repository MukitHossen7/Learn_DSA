# include <stdio.h>
# include <stdbool.h>
int main (){
    int r,c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
   
  bool isSecondaryDiagonal = true;
     if(r == c){
        for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
           if(i != j){
                 if(matrix[i][j] != 0){
                    isSecondaryDiagonal = false;
                    printf("The matrix is not a secondary diagonal matrix.\n");
                    return 0;
                 }
           }
        }

    }
    if(isSecondaryDiagonal){

        printf("The matrix is a secondary diagonal matrix.\n");
    }
    
     }else{
        printf("The matrix is not a secondary diagonal matrix.\n");
        return 0;
     }
    return 0;
}