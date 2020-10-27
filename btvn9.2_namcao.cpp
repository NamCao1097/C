#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("Nhap so chuoi n: ");
	scanf("%d",&n);
	char ars[n][20]; //mang n string
	for(int i=0; i<n;i++){
		printf("Nhap chuoi %d: ",i);
		scanf("%s",ars[i]);
	}
	printf("Nhung chuoi vua nhap: \n");
	for (int i=0; i<n; i++){
		printf("%s\n", ars[i]);
		}
	//sap xep mang tren theo abc
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			//so sanh de swap 2 phan tu ars[j] va ars[j+1]
			if (strcmp(ars[j],ars[j+1])==0){
			printf("Chuoi tuong duong: %s", ars[i][j]);
			}else{
				if (strcmp(ars[j],ars[j+1])<0){
				printf("%s\n%s", ars[j], ars[j+1]);
				}else{
					printf("%s\n%s", ars[j+1], ars[j]);
				}
			}
		}
	}
	//printf("Nhung chuoi vua nhap: \n");
	//scanf("%s", ars);
}	
