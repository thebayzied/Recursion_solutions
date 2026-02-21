#include<stdio.h>
#include<stdbool.h>
bool check_palindrome(int a[], int i, int j){
    if(i >= j) return true;

    if(a[i] != a[j]) return false;
    return check_palindrome(a, i + 1, j - 1);
}
int main (){
    int n; scanf("%d", &n);
    int a[1005];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    if(check_palindrome(a, 0, n - 1)) printf("YES\n");
    else printf("NO\n");
}