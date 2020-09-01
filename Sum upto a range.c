#include<stdio.h>
#include<stdlib.h>

int main(){

    int range, sum=0;
    printf("Enter the range");
    scanf("%d", &range);

    for(int i=0; i<=range; i++){
        sum = sum + i;
    }
    printf("Total sum is %d",sum);
}
