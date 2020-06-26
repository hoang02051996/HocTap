#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c, delta;
	printf("Nhap vao 3 so a, b, c");
	scanf("%d%d%d", &a, &b, &c);
	if(a==0){
		if(b==0){
			if(c==0)
			printf("Phuong trinh co vo so nghiem");
			else 
			printf("Phuong trinh vo nghiem");
		}
        else 	
		    printf("Phuong trinh co nghiem duy nhat la: %d", -c/b);
		}	
	else {
	    d = b*b -4*a*c;	
	    if(d<0)
	        printf("Phuong trinh vo nghiem");
	    else if(d==0)
	        printf("Phuong trinh co nghiem kep la: %d", -b/(2*a));
	    else 
	        printf("Phuong trinh co 2 nghiem phan biet la: %d, %d", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
	}
}	    
