#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int result=0;
	while(n){
		result=result+1;
		n=n&n-1;
	}
	printf("%d\n",result);
	return 0;
}
