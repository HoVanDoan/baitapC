#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void nhapso(float *arr, int n){
	for (int i=0;i<n; i++){
		printf("Nhap so tu thu %d: ", i+1);
		scanf("%f",(arr+i));
	}
}
float amdautien(float *arr, int n)
{
   for (int i=0; i<n; i++)
      if (arr[i]<0) return arr[i];
}
int main(){
	int n;
    float *p=(float *)malloc(10*sizeof(float));
	printf("Nhap n: ");
	scanf("%d",&n);
	nhapso(p,n);
	float s=amdautien(p,n);
	if (s!=0) printf("So am dau tien la: %.0f",s);
    else printf("Ko co so am");
}
