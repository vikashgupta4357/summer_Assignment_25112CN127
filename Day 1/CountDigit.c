#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    printf("%d",count);
    return 0;

}