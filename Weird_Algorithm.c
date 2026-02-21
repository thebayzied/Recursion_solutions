#include<stdio.h>
void rec(int n){
    printf("%d ", n);
    if(n == 1){
        return;
    }
    if(n % 2 == 0){
        return rec(n / 2);
    }
    else{
        return rec(3 * n + 1);
    }
}
int main (){
    int n; scanf("%d", &n);
    rec(n);
}