#include<stdio.h>

int main(){
	int a, b, c, min;
	scanf("%d%d%d", &a, &b, &c);
	printf("\nNhap 3 so a, b, c");
	min = a;
	if(b<min)
	    min = b;
    if(c<min)
        min = c;
    printf("\nSo nho nhat la %d", min);
    return 0;
}
