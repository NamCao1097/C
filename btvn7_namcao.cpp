#include <stdio.h>
int main(){
	// nhap so luong phan tu trong mang
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	// Nhap mang va sap xep luon ngay sau khi nhap gia tri
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[] = ");
		scanf("%d",&arr[i]);
		// Sap xep lai luon -> mang co i+1 phan tu (0->i)
		for(int j=0;j<i;j++){
			for(int k=0;k<i-j;k++){
				if(arr[k]>arr[k+1]){
					int tmp = arr[k];
					arr[k] = arr[k+1];
					arr[k+1] = tmp;
				}
			}
		}
		// da sap xep xong thu tu be->lon cua danh sach: 0 ->i
		printf("in thu xem moi xong nhap gia tri:\n");
		for(int k=0;k<=i;k++){
			printf("%5d",arr[k]);
		}
		printf("\n In xong \n");
	}
	// Sau khi nhap xong tat ca, kiem tra ket qua
	printf("Mang sau khi nhap:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
