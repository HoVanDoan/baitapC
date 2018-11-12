#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void nhapso(float *arr, int n){
	for (int i=0;i<n; i++){
		printf("Nhap arr[%d]: ", i);
		scanf("%f",(arr+i));
	}
}
float tinhtong(float *arr, int n){
	float s=0;
	for (int i=0; i<n;i+=2){
		s=s+arr[i];
	}
	return s;
}
float tinhtb(float s, int n){
	float k;
	k=s/(n/2);
	return k;
}
int main(){
	int n;
	float *p=(float *)malloc(n*sizeof(float));
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	nhapso(p,n);
	printf("Trung binh cac phan tu nam o vi tri chan cua mang: %f",tinhtb(tinhtong(p,n), n) );
	
}
