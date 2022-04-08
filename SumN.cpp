#include <stdio.h>
int main(){
	int S=0;
	int i=0;
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	while(i<=n){
		S+=i;
		i++;
	}
	
	printf("S=%d\n",S);
}
