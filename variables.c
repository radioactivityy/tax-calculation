#include <stdio.h>
 int main () {
    int spent, salary, tax;

    printf("Enter the amount spent on stock purchases: ");
    scanf("%d", &spent);
    printf("Enter the average salary in the Czech Republic: ");
    scanf("%d", &salary);

if (spent < 100000) {
    tax = 0;
} else if ( spent > 48 * salary) {
    tax = (int)(spent * 0.23);
} else {
    tax = (int)(spent * 0.15);
}
printf("spent = %d\n", spent);
printf("salary = %d\n", salary);
printf("tax = %d\n", tax);
return 0;

 }

