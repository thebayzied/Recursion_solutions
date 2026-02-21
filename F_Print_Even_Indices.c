#include<stdio.h>
void fac(int a[], int n, int i){
    if(i < 0) return; // base case

    if(i % 2 == 0){
        printf("%d ", a[i]);
    }
    fac(a, n, i - 1); //recursive case
}
int main (){
    int n; scanf("%d", &n);
    int a[1005];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    fac(a, n, n - 1);
}