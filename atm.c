#include<stdio.h>
#include<time.h>

int main(){
    //system("color 3F");
    int pin=1234,option, enteredPin, count=0, amount=1;
    float balance=5000;
    int continueTrasaction=1;
    
    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t %s",ctime(&now));
    printf("\n\t\t=====Welcome to our ATM Banking services=====");

    while(pin !=enteredPin){
        printf("\n Please enter your pin :");
        scanf("%d",&enteredPin);

        if(enteredPin != pin){
         //  Beep(610,500);
           printf("Invalid pin \n");
        }
        count++;
        if(count==3 && pin != enteredPin){
            exit(0);
        }
    }   
    while (continueTrasaction !=0){
        printf("\n\t\t\t=========*Available Transactions*======");
        printf("\n\t\t\t 1. Withdrawal");
        printf("\n\t\t\t 2. Deposit");
        printf("\n\t\t\t 3. Balance");
        printf("\n\n\t Please Select an option: ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            while (amount %500 != 0){
                printf("\n\t Enter the amount : ");
                scanf("%d",&amount);
                if(amount %500 !=0)
                printf("\n\t Sorry insufficient balance");
            }
            if (balance<amount){
                printf("\n\t Sorry, insufficient balance");
                amount=1;
                break;
            }
            else{
                balance -= amount;
                printf("\n\t\t You have withdrawn Ksh.%d. Your new balance is %.2f ",amount,balance);
                amount=1;
                printf("\n\t\t ======Please collect your money. Thank you======");
                break;
            }
            case 2:
                printf("\n\t\t Please enter the amount : ");
                scanf("%d",&amount);
                balance += amount;
                printf("\n\t\t You have deposited Ksh. %d. Your new balance is Ksh. %.2f",amount,balance);
                amount=1;
                printf("\n\t\t ======Thank you======");
                break;
            case 3:
                printf("\n\t\t Your Balance is Ksh. %.2f",balance);
                break;
        default:
                
                printf("Invalid Option!!!");
                break;
        }    
        printf("\n\t\t Do you wish to perform another transaction? Press 1[Yes], 0[No]");
        scanf("%d",&continueTrasaction);
}
    }
        