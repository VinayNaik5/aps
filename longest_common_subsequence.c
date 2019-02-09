// to find the lognest common sub sequence using dynamic programming 
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char str1[]="anup";
   char str2[]="anoop";
   int len1=strlen(str1);
   int len2=strlen(str2);
   int temp[len1+1][len2+1];
    int i,j;
   for(i=0;i<len1+1;i++){
    temp[i][0]=0;
   }
   for(j=1;j<len2+1;j++){
    temp[0][j]=0;
   }
   for(i=1;i<len1+1;i++){
        for(j=1;j<len2+1;j++){
            if(str1[i-1]==str2[j-1]){
                temp[i][j]=temp[i-1][j-1]+1;
            }
            else{
                int max=temp[i-1][j];
                if(temp[i][j-1]>=max){
                    temp[i][j]=temp[i][j-1];
                }
                else{
                    temp[i][j]=temp[i-1][j];
                }
            }
        }
   }

   for(i=0;i<len1+1;i++){
    for(j=0;j<len2+1;j++){
        printf("%d ",temp[i][j]);
    }
         printf("\n");
   }
    printf("%d",temp[len1][len2]);
}
