#include<stdio.h>
	int main() {
	int n, p, c;

	c=0;
	
	printf ("Insira um número: ");
	scanf ("%d", &n);
	
	for (p = 1; p <= n; p++){
		if (n % p == 0){
			c++;
		}
	}
	
	if (c++ == 2){
		printf ("O número inserido é primo");
	}else{
		printf ("O número inserido não é primo");
	}
	
	return 0;
}
