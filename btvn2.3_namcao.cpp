#include <stdio.h>
int main(){
	int d;
	printf("nhap ngay:");
	scantf("%d",&d);
	int m;
	printf("nhap thang:");
	scantf("%d",&m);
	int x; //ngay thu....trong nam
	if(m==1){
		x=d;
	}
	if(m==2){
		x=31+d;
	}
	if(m==3){
		x=31+28+d;
	}
	if(m==4){
		x=31+28+31+d;
	}
	if(m==5){
		x=31+28+31+30+d;
	}
	if(m==6){
		x=31+28+31+30+31+d;
	}
	if(m==7){
		x=31+28+31+30+31+30+d;
	}
	if(m==8){
		x=31+28+31+30+31+30+d;
	}
	//lan luot m==12 tu lam nhe!
if(x%7==0){
	printf("day la ngay thu %d trong nam va la chu nhat")
}else{
	int thu = x%7+1;
	printf("day la ngay thu %d trong nam va la thu %d")
}
}

