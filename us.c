#include <stdio.h>

int us(int x,int y){
	
	if(x==0)
		return 1;
		
	if(x>0)
		return y*(us(x-1,y));	
	
	
}

int main(){
	
	int x,y;
	
	printf("x\'e deger giriniz.\n");
	scanf("%d", &x);
	
	printf("y\'ye deger giriniz.\n");
	scanf("%d", &y);
	
	printf("%d", us(x,y));
	
	return 0;
}
