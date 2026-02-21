#include<stdio.h>
#include<stdbool.h>
void recursion(int n){
    if(n == 0) return;
    printf("I love Recursion\n");
    return recursion(n - 1);
}
int main (){
    int n; scanf("%d", &n);
    recursion(n);
}