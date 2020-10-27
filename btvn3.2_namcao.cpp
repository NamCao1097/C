#include<stdio.h>
int main(){
	float tk=4000, ls=0.08;
	int n=0;
	for (int i=0;tk<1000000;tk+=tk*ls,n++,i++);
		printf("so nam can gui là: %d",n);
	}
//dong so 5 lenh for dang viet tat, co the viet chi tiet dung cau truc co ban. 
