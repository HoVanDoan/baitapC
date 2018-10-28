#include<stdio.h>
#include<conio.h>
int main(){
int moi,cu;
	int k=0,l=0;
	printf("Nhap chu so dien cu=");
	scanf("%d",&cu);
	printf("\nNhap chu so dien moi=");
	scanf("%d",&moi);
	k=moi-cu;
	printf("\nChu so dien dung trong thang la:=%d",k);
	if(k<=50){
		l=k*1500;
	}
	else if((k>50)&&(k<=100)){
		l=k*2000;
	}
	else if(k>100){
		l=k*3000;
	}
	printf("\nSo tien dien phai tra la:%d",l);
	return 0;
}
