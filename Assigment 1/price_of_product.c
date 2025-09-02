//question 1
#include <stdio.h>
int main(){
	float price,tax;
	printf("What is your original price: ");
	scanf("%f",&price);
	printf("tell me rate of tax:");
	scanf("%f",&tax);
	printf("this is your price of product:%f",price+(price*tax/100));
	return 0;

}
