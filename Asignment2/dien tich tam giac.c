#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, p, s=0;
	printf("Nhap vao 3 canh cua tam giac a, b, c");
	scanf("%f%f%f", &a, &b, &c);
	if((a+b>c) && (a+c>b) && (b+c>a)){
		printf("\nDay la 3 canh cua tam giac");
		p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nChu vi cua tam giac la %f", p);
		printf("\nDien tich cua tam giac la %f", s);
	} else
	    printf("\nDay khong phai la ba canh cua tam giac");
}
