#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int result=n;
	result=(result>>3)<<3;
	if(result==n)	
		printf("Divisible by 8\n"); 

	return 0;
}
