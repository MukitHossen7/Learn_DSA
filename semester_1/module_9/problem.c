# include <stdio.h>
# include <limits.h>
int main (){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
         scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
  
  
   for (int i = 0; i < n; i++){
        //  printf("%d ", arr[i]);
        if(arr[i] > max){
            max = arr[i];
            
        }
        if(arr[i] < min){
            min = arr[i];
         
        }
      while(max > min){
         int temp = min;
            min = max;
            max = temp;
      }
    
    }
     
    for (int i = 0; i <  n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    
    // printf("Maximum element: %d\n", max);
    // printf("Minimum element: %d\n", min);
    return 0;
}