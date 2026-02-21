#include<stdio.h>
#include<stdbool.h>
int print(int n){
    if(n == 0 || n == 1) return 1;
    return n * print(n - 1);
    
}
int main (){
    int n; scanf("%d", &n);
    printf("%d", print(n));
}