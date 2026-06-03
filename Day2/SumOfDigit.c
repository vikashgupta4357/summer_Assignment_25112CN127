#include<stdio.h>
int main(){
int n,i;
printf("Enter a number:");
scanf("%d",&n);
int sum = 0;
int reminder = 0;
while(n!=0){
    reminder = n % 10;
    sum = sum + reminder;
    n = n/10;
}
printf("the number of digit are %d",sum);
return 0;

}


