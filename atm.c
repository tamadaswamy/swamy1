/*DATE:17/07/2025
  DRISCRIPTION: WAP FOR ATM WORKING*/
  #include<stdio.h>
  int main()
  {
    printf("1.Telugu\n2.English\n3.Hindi\n4.Tamil\n5.Kannada\n6.Marathi\n");
    printf("choose the correct option from 1to6 to select Language\n");
    int Balance=100000;
    int Passward=2003;
    int num;
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("your language is Telugu\n");
        break;
        case 2:
        printf("your language is English\n");
        printf("1.current Account\n2.Saving Account\n3.other\n");
        int account_type;
        scanf("%d",&account_type);
        switch(account_type)
        {
            case 1:
            printf("Current\n");
            printf("1.Withdraw\n2.Deposite\n3.minstatement\n");
            printf("choose the option\n");
            int option;
            scanf("%d",&option);
            switch(option)
            {
                case 1:
                printf(" ------------withdraw-----------\n");
                printf("enter the amount multiple of 500\n");
                int Amount;
                scanf("%d",&Amount);
                if(Amount%500==0)
                {
                    printf("---PLEASE ENTER PIN--\n");
                    int PIN;
                    scanf("%d",&PIN);
                    if(PIN==Passward)
                    {
                        if(Amount<=Balance)
                        {
                            printf("please collect your cash\n");
                        }
                       else
                       {
                        printf("Insufficient balance\n");
                       }
                      
                    }
                    else
                    {
                        printf("Incorrect PIN\n");
                    }
                  break;
                  case 2:
                  printf(" ----------------deposite------------------\n");
                  break;
                  case 3:
                  printf("----------------minstatement-------------");

                 break;
                }
              else
             {
                printf("Please Enter amount multiple of 500\n");
             }
            }
            break;
            case 2:
            printf("Saving\n");
            printf("1.Withdraw\n2.Deposite\n3.minstatement\n");
            int op;
            scanf("%d",&op);
            switch(op)
            {
                case 1:
                printf(" --------withdraw--------\n");
                printf("enter the amount multiple of 500\n");
                int amount;
                scanf("%d",&amount);
                if(amount%500==0)
                {
                    printf("---PLEASE ENTER PIN--\n");
                    int PIN;
                    scanf("%d",&PIN);
                    if(PIN==Passward)
                    {
                        if(amount<=Balance)
                        {
                            printf("Please Collect your cash\n");
                        }
                        else
                        {
                            printf("insufficient Balance");
                        }
                    }
                    else
                    {
                        printf("Incorrect PIN\n");
                    }
                }
                else
                {
                    printf("Please Enter amount multiple of 500\n");
                }
                break;
                case 2:
                printf(" ---------deposite-------\n");
                break;
                case 3:
                printf(" ----ministatement-----------\n");
                break;
            }
            break;
            case 3:
            printf("other\n");
        }
        break;
        case 3:
        printf("your language is Hindi\n");
        break;
        case 4:
        printf("your language is Tamil\n");
        break;
        case 5:
        printf("your language is Kannada\n");
        break;
        case 6:
        printf("your language is Marathi\n");
        break;
        default:
        printf("choose correct option from 1 to 6");
    }
  }