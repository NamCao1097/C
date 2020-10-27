//nhap so nguyen duong n, tim so trong day Fibonaxi nho hon va gan n nhat
#include<stdio.h>
int main (){
	int n;
	do{
		printf("nhap vao so nguyen duong : ");
		scanf("%d",&n);
	}while(n<=2);
	int a=0,b=0,c=1;
	for(int i=3;b+c<=n;i++){
		a=b;
		b=c;
		c=a+b;}
	printf("so trong day Fibonaci thoa man yeu cau: %d",c);
	}
