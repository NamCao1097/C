//tim uoc chung lon nhat cua 2 so a, b
#include<stdio.h>
int main(){
	int a;
	printf("nhap a = ");
	scanf("%d",&a);
	int b;
	printf("nhap b = ");
	scanf("%d",&b);
	int UCLN = 0;
	for(int i; i>0 && i<=(a,b);i++){
		if(a%i == 0 && b%i == 0){
		UCLN = i;	
		}
	}printf("UCLN cua %d va %d = %d",a, b, UCLN);
	
}
