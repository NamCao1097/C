// Nhap so nguyen duong n, tim so thuoc day fibonaci nho hon n va gan n nhat ( v� du n=20 th� t�m ra s? 13)
#include<stdio.h>
int main(){
	int n;
	do{
		printf("nhap so nguyen duong = ");
		scanf("%d",&n);
	}while(n<0);
	int a=0, b=1, c=1;
	for(int i=3; (b+c)<n; i++){
		a = b;
		b = c;
		c = a+b;
	}
		printf("%d",c);
	
}
