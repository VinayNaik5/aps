// to find fibonacci series using bottem up approch
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    long int arr[100];
    memset(arr,0,sizeof(arr));
    //for(int s=0;s<100;s++)
      //  printf("%d  ",arr[s]);
    int n;
    int i;
    int x;
    arr[0]=0;
    arr[1]=1;
    int count=0;
    printf("enter number of inputs: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter a number to find fibonacci series: ");
        scanf("%d",&x);
        if(x!=0 && arr[x]==0){
            for(int j=2;j<=x;j++){
                if(arr[j]==0){
              //      printf("%d\n",arr[j]);
                    //count++;
                    arr[j]= arr[j-1]+ arr[j-2];
                }
                else {

                }
            }
            //printf("%d\n",count);
            printf("%d\n",arr[x]);
        }
        else printf("%d\n",arr[x]);

    }
}
