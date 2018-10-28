#include<stdio.h>
#include<conio.h>
int gt( int n){
	int s=1;
	for (int i=1; i<=n; i++) s=s*i;
	return s;
}
int tonggt(int a[100], int n){
	int k=0;
	for(int i=0; i<n; i++)
	k=k+gt(a[i]);
	return k;	
}
int main(){
	int a[100];
	int n;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	if (n>100) printf("Nhap lai");
	else {
		for (int i=0; i<n; i++){
		printf("nhap vao phan tu thu %d cua mang: ",i+1);
		scanf("%d",&a[i]);
	}
}
    	printf("mang a=");
	for (int j=0; j<n; j++)
         printf("%d;",a[j]);
	printf("\ntong giai thua la: %d",tonggt(a,n));
}
   
