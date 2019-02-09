#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   int temp[n];
   //memset(temp,1,sizeof(temp));
   for(int i=0;i<n;i++){
    temp[i]=1;
   }
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(arr[j]<arr[i]){
            if(temp[j]+1>temp[i]){
                temp[i]=temp[j]+1;
            }
        }
    }
   }
   int max=1;
   for(int i=1;i<n;i++){
    if(temp[i]>max){
        max=temp[i];

    }
   printf("\n");
   }
   printf("max sub sequence : %d",max);
}
