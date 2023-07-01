#include<stdio.h>
#include<string.h>
int main(){
	int x[5]={2,5,6,8,10},*a;
	a=&x[0];
	printf("address = %p",a);
}
