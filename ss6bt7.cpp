#include<stdio.h>
int main(){
	int a,i;
	printf("moi ban nhap so ");
	scanf("%d",&a);
	for(i=1;i <=a;i++){
		if(a%i==0){
			printf("cac uoc cua %d la %d\n",a,i);
		}
	}
	
}
