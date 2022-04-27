#include <stdio.h>
#include "reverseArray.h"

int main(){
	int n;
	do{
		printf("Nhap kich thuoc cua mang: ");
		scanf("%d",&n);
	}while(n<=0);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so phan tu %d: ", (i+1));
		scanf("%d",ary+i);
	}
	reverseArray(ary,n);
	printf("Reversed array:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",ary[i]);
	}

}
