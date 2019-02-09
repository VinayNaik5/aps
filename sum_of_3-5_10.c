#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int sum;
    printf("enter sum :");
    scanf("%d",&sum);
    int temp[sum+1];
    memset(temp,0,sum*4+4);
    temp[0]=1;
    for(int i=3;i<=sum;i++){
        temp[i]+=temp[i-3];
    }
    for(int i=5;i<=sum;i++){
        temp[i]+=temp[i-5];
    }
    for(int i=10;i<=sum;i++){
        temp[i]+=temp[i-10];
    }
    printf("%d",temp[10]);
}
