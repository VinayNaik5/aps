#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int result=n&1;
	printf("%d",result); //1 of odd 0 for even
	return 0;
}
