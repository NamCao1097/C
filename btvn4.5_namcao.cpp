#include<stdio.h>
int main (){
	int n;
	do{
		printf("nhap vao so nguyen duong : ");
		scanf("%d",&n);
	}while(n<=0);
	int uoc = 0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			uoc=uoc+1;
		}
	}
	if (uoc==2){
		printf("%d là SNT", n);}
	else{
		printf("%d khong la SNT", n);
	}
}
