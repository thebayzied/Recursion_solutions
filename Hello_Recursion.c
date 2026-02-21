#include<stdio.h>
int sum_arr(int a[], int n, int i){
    if(i > n - 1) return 0;
    return a[i] + sum_arr(a, n, i + 1);
}
int main (){
    int t; scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n; scanf("%d", &n);
        int a[1005];
        for(int j = 0; j < n; j++) scanf("%d", &a[j]); 

        printf("Case %d: ", i);
        printf("%d\n", sum_arr(a, n, 0));
        }
    }