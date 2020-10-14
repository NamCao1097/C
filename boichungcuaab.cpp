// nhap 2 so a, b tim boi chung nho nhat cua a va b
#include<stdio.h>
int main(){
	int a;
	printf("nhap a = ");
	scanf("%d",&a);
	int b;
	printf("nhap b = ");
	scanf("%d",&b);
	
	int BCNN = 0;
	int UCLN = 0;
	for(int i; i>0 && i<=(a,b);i++){
		if(a%i == 0 && b%i == 0){
		UCLN = i;
		BCNN = a*b/UCLN;	
		}
	}
	printf("BCNN cua %d va %d : %d", a, b, BCNN);
}
