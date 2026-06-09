#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum = 0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("perfect number");
    }
    else

        printf("not a perfect number");
    return 0;
}