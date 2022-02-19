#include <stdio.h>
#include <time.h>

int main(){
	
	register int x,y,t,k,a;
		
	srand(time(NULL));
	
	x=1+rand()%6;
	y=1+rand()%6;
	
	t=x+y;
	a=t;
	if(t==7 || t==11)
		printf("Kazandiniz %d",t);
	else if(t==2 || t==3 || t==12)
		printf("Kaybettiniz %d", t);
	else
		while(a!=7){
			
			x=1+rand()%6;
			y=1+rand()%6;
			k=x+y;
			if(t==k){
				printf("7\'den once attiginiz numarayi buldunuz. %d, %d", k,t);
				k=7;
			}
			else if(7==k){
				printf("7\'den once attiginiz numarayi bulamadiniz. %d, %d", k, t);
			}
			
			a=k;
		}	
	
	return 0;
}
