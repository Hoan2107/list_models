# include <stdio.h>
# include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)){
		printf("La nam nhuan");
	}
	else{
		printf("Khong phai nam nhuan");
	}
}
