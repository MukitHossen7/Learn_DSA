# include <stdio.h>

int distinct (int a[], int n){
  
   for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
       
    }
    
    int sum = 1;
   
    for(int k = 1; k < n; k++){
       if(a[k] != a[k - 1]){
        sum ++;
       }
    }
     return sum;
}
int main (){
    int n;
    scanf("%d",&n);

    if (n <= 0) {
        printf("0\n");
        return 0;
    }
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

     int ans = distinct(a, n);
     printf("%d", ans);
    return 0;
}



// # include <stdio.h>
// void swap (int x, int y){
//     int temp = x;
//     x = y;
//     y = temp;
//     printf("%d %d",x,y);
// }


// int main (){
//     int x , y;

//     scanf("%d %d",&x, &y);
//     swap(x,y);
//     return 0;
// }