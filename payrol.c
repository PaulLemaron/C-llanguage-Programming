#include<stdio.h>
#include<time.h>
#include<string.h>
int main(){
    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t %s",ctime(&now));
    printf("\n\t=====County Government Of Kajiado Payroll=====");

    //declaration
    char emp_name[200]; //size of characters
    int days_worked=0;
    float rate_per_day=0.00;
    float salary=0.00;

    printf("\nEmployees Name : ");
    gets(emp_name);
    printf("\n Number of Days worked : ");
    scanf("%d",&days_worked);
    printf("Give Rate Per Day : ");
    scanf("%f",&rate_per_day);
    printf("\n\n");
    salary= (days_worked*rate_per_day);
    printf("\n");
    printf("================================\n");
    printf("Employees Name : %s \n",emp_name);
    printf("Employees Salary :Ksh. %2.2f \n",salary);
    printf("\n\n");
    
    printf("================================\n");

}
