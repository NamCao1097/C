//Tinh tong 100 so le >0 dau tien
#include<stdio.h>
int main (){
	int s = 0;
	int n;//so so le
	for(n=1;n<=100;n++){
		s=s+(2*n-1);
	}
	printf("Tong 100 so le dau tien S = %d", s);
}
