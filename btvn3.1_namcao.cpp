#include <stdio.h>
int main(){
	int n;
	printf("n = ");
	scanf("%d",&n);
	int x = 0;
	if(n!=0){
		x = x*10 + n%10;
		n /=10;
	}
	if(n!=0){
		x = x*10 + n%10;
		n /=10;	
	}
	if(n!=0){
		x = x*10 + n%10;
		n /=10;	
	}
	if(n!=0){
		x = x*10 + n%10;
		n /=10;	
	}
	printf("Dao nguoc: %d",x);
}
