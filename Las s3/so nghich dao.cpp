#include<stdio.h>

int main(){
	int n,tmp;
	int res=0;
	printf("Nhap n:\n");
	scanf("%d", &n);
	if(n>=10000){
		printf("\n vuot qua 4 so:");
	}else if(n<=0){
		printf("\n so nhap vao phai la so nguyen duong:");
	}
	while(n>0){
		tmp = n % 10;
		res = res *10 + tmp;
		n = n / 10;
	}
	printf("so nghich dao la %d :\n", res);
}
