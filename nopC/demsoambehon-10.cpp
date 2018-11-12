#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void nhapso(float *arr, int n){
	for (int i=0;i<n; i++){
		printf("Nhap so tu thu %d: ", i+1);
		scanf("%f",(arr+i));
	}
}
int dem(float *arr, int n)
{   int s=0;
   for (int i=0; i<n; i++)
      if (arr[i]<-10) s=s+1;
    return s;
}
int main(){
	int n;
    float *p=(float *)malloc(10*sizeof(float));
	printf("Nhap n: ");
	scanf("%d",&n);
	nhapso(p,n);
	int s=dem(p,n);
	if (s!=0) printf("So luong so am la: %d",s);
	else printf("Ko co so am");
}
