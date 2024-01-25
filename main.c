#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void listprods(int array[]) {
    int i = 0;

    while (i < 5){
	printf("%d available in stock for the product with the code %d \n",array[i],i);
	i++;
	}
}
int main(int argc, char *argv[]) {
	int prods[] = {1,2,3,4,5};
	int choice,i,Qte;
	
	printf("welcome to the stock management software \n");
	printf("type a number according to your choice: \n \n");
	
	printf("1. to add a product to the stock. \n");
	printf("2. to remove a product from the stock. \n");
	printf("3. to list all the product available in the stock. \n");
	printf("0. to exit and close the software. \n");
	scanf("%d",&choice);
	
	while (choice < 4 ) {
		if (choice == 3) {
			listprods(prods);
			choice = 0;
		}
			else if (choice == 2) {
					int t = 0;
					printf("please enter the product code : ");
					scanf("%d",&t);
					printf("please enter and the quantity you want to remove : ");
					scanf("%d",&Qte);
			
				if (t >= 0 && t < 5){
					prods[t] = prods[t] - Qte;
					printf("the quantity was removed succesfully to check the new stock type 1, or 2 to exit\n");
					int a=0;
					scanf("%d",&a);
					if (a == 1){
						listprods(prods);
						a=0;
					}	
					if(a==2) {
						return (0);
					}
				}	
				else {
					printf("the entered value isnt a code from the table, enter a code from the list below :\n");
					listprods(prods);
				}
				choice = 0;
				}
			}
		while (choice == 1) {
			int t = 0;
			printf("please enter the product code : ");
			scanf("%d",&t);
			printf("please enter and the quantity you want to add : ");
			scanf("%d",&Qte);
			
		if (t >= 0 && t < 5){
				prods[t] = prods[t] + Qte;
				printf("the quantity was added succesfully to check the new stock type 1, or 2 to exit\n");
				int a=0;
				scanf("%d",&a);
				if (a == 1){
					listprods(prods);
				}
				if(a==2) {
					return (0);
				}
			}	
			else {
				printf("the entered value isnt a code from the table, enter a code from the list below :\n");
				listprods(prods);
			}
			choice = 0;
		}
		if  (choice == 0) {
			exit(0);
		}
			printf("Please type a number from the list above");
		return 0;
	}
	
	


