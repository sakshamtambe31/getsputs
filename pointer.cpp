#include<stdio.h>
int main(){
	int *x,a;//pointer
//	int* x;
//	int a;
//	x=&a; wrong
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("\n a = %d\n",a);//%p prints the hexadecimal address
    x=&a;
    printf("Address= %p\n",x);
	printf("value= %d",*(x));
}
// a = 10
//Address= 000000000062FE14
// value= 10
