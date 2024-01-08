#include <stdio.h>
#include <math.h>



int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int m;
	printf("nhap m: ");
	scanf("%d",&m);
	int cnt=1;
	float l=m;
	while (m>=10){
		cnt++;
		m=m/10;
	}
	l=l/pow(10,cnt);
	float flt;
	if (n<0){
		flt = n-l;
	}else{flt=n+l;
	}
	
	printf("\n%2f",flt);
	

}
