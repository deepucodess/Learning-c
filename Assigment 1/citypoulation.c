//population of city
#include <stdio.h>
int main(){
	int city=30000;
	int city2ndyear,city3rdyear;
	city2ndyear = city+city*20/100;
	city3rdyear = city2ndyear+(city2ndyear*30/100);
	printf("population of city in 3 years:%d",city3rdyear);
}
