#include<stdio.h>
#include<conio.h>
int kt(char s[]){   
    int x;
    x=0;   
    while (s[x] != '\0')
    x=x+1;   
    return(x);
}  
int main(){
	char c[100];
    printf("Nhap vao chuoi ki tu: ");
	scanf("%s",&c);
	printf("\nChuoi co %d ki tu", kt(c));
}
   
