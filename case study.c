#include<stdio.h>
#include<math.h>

int main()
{
    double balance,amount;
    int choice;
    
    printf("Enter current account balance: ");
    scanf("%lf",&balance);
    
    if ( balance<0) 
    {
        printf("Invalid input for balance");
        return 1;
    }
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            
            printf("\n Current balance: %.2lf", balance);
            break;

        case 2:
            
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);
            
            if (amount <= balance)
             {
                balance -= amount; 
                printf("\n Transaction successful");
                printf("\n Remaining balance: %.2lf", balance);
            }
             else 
                printf("\n Insufficient balance");
            break;

        case 3:
            
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);
            
            balance += amount; 
            printf("\n Deposit successful");
            printf("\n Updated balance: %.2lf", balance);
            break;

        default:
            
            printf("\n Invalid option");
            break;
    }

    


    

    
    
    
    
 }