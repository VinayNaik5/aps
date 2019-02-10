#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int result=n&(n-1);// bit mainpulation to checkweather a number is power of 2 or not 
	printf("%d",result);// power of two if result is 0 else not a poer of 2
	return 0;
}
