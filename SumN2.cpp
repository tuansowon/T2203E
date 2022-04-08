#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	float S=0;
	float i=1;
	while (i<=n){
		S+=1/i;
		i++;
	}
	printf("S=%f\n",S);
}
