#include <stdio.h>

struct item{
	
	int no;
	float price;
	
};

int main(void){
	struct item item1;
	struct item item2;
	
	item1.no=1;
	item1.price=25.0;
	
	item2.no=2;
	item2.price=50.0;
	
	printf("\nItem No.: %d\tPrice: %.2f",item1.no,item1.price);
	printf("\nItem No.: %d\tPrice: %.2f",item2.no,item2.price);
	
}
