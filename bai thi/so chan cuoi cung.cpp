#include<stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d", &n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap pt;\n");
		scanf("%d", &ary[i]);
	}
	int x=0;
	for(int i=n-1;i>=0;i--){
		if(ary[i]%2==0){
			x=ary[i];
			break;
		}
	}
	if(x%2!=0){
		printf("Mang ko he co so chan!");
	}else{
		printf("So chan cuoi cung: %d",x);
	}
}
