#include <stdio.h>
struct book
{
	char name[50];
	int price;
	int pages;
};
int main()
{
	int i;
	struct book s[2];
	for(i=0;i<2;i++){
	printf("\nEnter the name:");
	scanf("%s",s[i].name);
	printf("\nEnter the price:");
	scanf("%d",&s[i].price);
	printf("\nEnter the pages:");
	scanf("%d",&s[i].pages);
 	}
 	for(i=0;i<2;i++){
	printf("Name:%s\nPrice:%d\nPages:%d",s[i].name,s[i].price,s[i].pages);
	printf("\n");
	}

}


