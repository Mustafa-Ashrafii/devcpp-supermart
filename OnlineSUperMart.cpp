#include <stdio.h>

int product();

int main() {
    int total = 0;
    while(1){
	
    puts("-----------------------------------SuperMart----------------------------");


    total = product();
    printf("Total: %d $\n", total);}
    return 0;

}
int product(){
	printf("MENU\n");
	printf("---------------------------------------------------------------------------------------------------------\n");
    printf("1.Apple 5$ \t\t\n2.Rice 40$\t\t\n3.BaseBall 60$\t\t\n4.Soap 8$\t\t\n5.Vegetables 25$\n");
    printf("6.Chocolates 10$\t\t\n7.Meat 30$\t\t\n8.Biscuits 15$\t\t\n9.Shampoo 17$\t\t\n10.Cake 55$\n");
    printf("---------------------------------------------------------------------------------------------------------\n");

    int user;
    int total, qty;
    int apple = 5, Rice = 40, baseBall = 60, Soap = 8, Vegetables = 25, Chocolate = 10, Meat = 30, Biscuit = 15, shampoo = 17, cake = 55;
    printf("\t\t\t\t\t|SHOP NOW|\n");
    printf("\nEnter your choice: ");
    scanf("%d", &user);
    
    printf("Enter quantity: ");
    scanf("%d", &qty);

    if (user == 1) {
        total = qty * apple;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
    } else if (user == 2) {
        total = qty * Rice;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
    } else if (user == 3) {
        total = qty * baseBall;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
    }else if (user == 4) {
        total = qty * Soap;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
		 }else if (user == 5) {
        total = qty * Vegetables;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
		 }else if (user == 6) {
        total = qty * Chocolate;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
		 }else if (user == 7) {
        total = qty * Meat;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
		 }else if (user == 8) {
        total = qty * Biscuit;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
		 }else if (user == 9) {
        total = qty * shampoo;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
		 }else if (user == 10) {
        total = qty * cake;
        printf("Your quantity is: %d\n", qty);
        printf("Your Total is: %d $\n", total);
		 }else {
        printf("Invalid choice.\n");
        total = 0;
    }

    return total;
}

