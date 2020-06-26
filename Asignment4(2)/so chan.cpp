#include<stdio.h>

int main(){
	int n;
	printf("Nhap n = \n");
	scanf("%d", &n);
	printf("Cac so chan <n la :");
	for(int i=0;i<n;i++){
		if(i%2 == 0)
		printf("%d,",i);
	}
    return 0;
}

	
