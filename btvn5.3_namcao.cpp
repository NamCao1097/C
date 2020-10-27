#include<stdio.h>
int main (){
	//nhap 2 so a,b. tim uoc chung lon nhat cua a va b.
	int a,b;
	do{
		printf("nhap vao so nguyen duong a: ");
		scanf("%d",&a);
	}while(a<=0);
	do{
		printf("nhap vao so nguyen duong b: ");
		scanf("%d",&b);
	}while(b<=0);
	if (a<=b){	
		for (int i=1;i<=a;i++){
			a%i==0;
			b%i==0;}
			printf("uoc chung lon nhat la: %d", i);
	}else{
		for (int i=1;i<=b;i++){
			a%i==0;
			b%i==0;}
			printf("uoc chung lon nhat la: %d", i);	
}

		}
