#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int Factorial = 1;
    for(i=1;i<=n;i++){
        Factorial=Factorial * i;
    }
    printf("The Factorial Of %d is:  %d",n ,Factorial);
    return 0;

}