#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int max=0,dem =0;
	for(int i=0;i<n;i++){
		if(arr[i] >0){
			dem++;
			if(dem > max){
				max = dem;
			}
		}else{
			dem=0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat: %d",max);
}
