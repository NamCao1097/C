#include <stdio.h>
int main(){
	int a,b;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	for(int i=a;true;i++){
		if(i%a==0&&i%b==0){
			printf("BCNN: %d",i);
			break;
		}
	}
}
