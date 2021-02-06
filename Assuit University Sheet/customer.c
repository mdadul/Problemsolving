#include <stdio.h>
#include <conio.h>
#include <string.h>
struct date
{
	int month;
	int day;
	int year;
};
struct account
{
	char name[80];
	char street[80];
	char city[80];
	int acct_no;
	char acct_type;
	float oldbalance;
	float newbalance;
	float payment;
	struct date lastpayment;
}customer[100];

void readinput(int i){
	printf("\nCustomer no. %d\n", i+1);
	printf("  Name:  ");
	scanf(" %[^\n]", customer[i].name);
	printf("  Street  ");
	scanf(" %[^\n]", customer[i].street);
	printf("  City  ");
	scanf(" %[^\n]", customer[i].city);
	printf("  Account Number :    ");
	scanf(" %d", &customer[i].acct_no);
	printf("  Previous Balace:    ");
	scanf(" %d", &customer[i].oldbalance);
	printf("  Current Balace :   ");
	scanf("%d", &customer[i].payment);
	printf("  Payment date(mm/dd/yyyy):  ");
	scanf(" %d/%d/%d", &customer[i].lastpayment.month, &customer[i].lastpayment.day, &customer[i].lastpayment.year);
}
void writeoutput(int i){
	printf("\nName :     %s",customer[i].name);
	printf("     Account Number :   %d\n",customer[i].acct_no);
	printf("Street:   %s\n",customer[i].street);
	printf("City:  %s\n", customer[i].city);
	printf("Old Balace:   %7.2f\n", customer[i].oldbalance);
	printf("  Current payment:  %7.2f\n",customer[i].payment);
	printf("New Balance :    %7.2f\n\n", customer[i].newbalance);
	printf("Account Status:  \n");

	switch(customer[i].acct_type) {
		case 'C':
			printf("Current\n");
			break;
		case 'O':
			printf("Overdue \n");
			break;
		case 'D':
			printf("Delinquent\n");
			break;
		default:
			printf("Error\n");	
	}
}

int main(int argc, char const *argv[])
{
	int i,n;
	printf("Customer Billing System\n");
	printf("How many customers are there?\n");
	scanf("%d",&n);

	for(i=0; i < n; i++){
		readinput(i);
		if(customer[i].payment>0){
			customer[i].acct_type=(customer[i].payment < 0.1 * customer[i].oldbalance)?'O':'C';
		}
		else{
			customer[i].acct_type=(customer[i].oldbalance > 0) ? 'D' : 'C';
		}
		/*adjust account balance*/
		customer[i].newbalance = customer[i].oldbalance - customer[i].payment;
	}
	for(i = 0; i < n; i++){
		writeoutput(i);
	}
	return 0;
}