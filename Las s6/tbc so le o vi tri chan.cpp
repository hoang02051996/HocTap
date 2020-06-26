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
	int S=0;
	int count=0;
	for(int i=1;i<n;i+=2){
		if(ary[i]%2==1){
			S+=ary[i];
		    ++count;
		}
	}
	printf("Trung binh cong = %f", (float)S/count);
	return 0;
}
	
	
