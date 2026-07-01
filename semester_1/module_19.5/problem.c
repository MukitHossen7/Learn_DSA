// problem - 1

// # include <stdio.h>
// int main(){
//     long long int a, b, k;
//     scanf("%lld %lld %lld", &a, &b, &k);
//     if( a % k == 0 && b % k == 0 ) printf("Both\n");
//     else if( a % k == 0 ) printf("Memo\n");
//     else if( b % k == 0 ) printf("Momo\n");
//     else printf("No One\n");

//     return 0;
// }

# include <stdio.h>
int main (){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int sum = 0;
     for(int i = 0; i < k; i++){
        sum += a[i];
    }
    printf("%d\n", sum);

    return 0;
}