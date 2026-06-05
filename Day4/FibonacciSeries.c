#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int first = 0;
    int second = 1;
    for(i=1; i<=n; i++){
        printf("%d\n",first);
        int next= first + second;
        first = second;
        second = next;
    }
    return 0;
}