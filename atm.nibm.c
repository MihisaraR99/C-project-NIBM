#include<stdio.h>
#include<conio.h>
#include<time.h>
//GADSE19.1f044,GADSE19.1f027
int mainmenu();
int again();
int checkpin();
void selectlanguage();
void withdraw();
void deposit();
void checkbal();
void pinchange();
void printrec(int, int);
void reccheck();
int bal = 200000;
int pin = 1234;
int i;
int count=0;
int value;
int accno=12345678;
int main()
{
    int i,j,k,l,a,b,c;
    {
    printf("A project by GADSE19.1F---Group 'C'\n");
    printf("Members :- GADSE19.1f044,GADSE19.1f025,GADSE19.1f027,GADSE19.1f012\n");
    }
    printf("\t\t-----------------------------------------------------------\n");
    printf("\t\t-----------------------------------------------------------\n");
    printf("\t\t-----------------------------------------------------------\n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\--------BANK OF NIBM---------\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t---No:45,7th Floor---");
    printf("\n\n\n\t\t\t\t---World Trade Center---");
    printf("\n\n\n\t\t\t\t----Colombo 7----");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t BANK CDM SYSTEM");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t All Rights Received(c) \n");
    printf("\t\t\-----------------------------------------------------------\n");
    printf("\t\t-----------------------------------------------------------\n");
    printf("\t\t-----------------------------------------------------------\n");
    selectlanguage();
    value=checkpin();
    if (value!=0)
    {
        mainmenu();
    }
    else
    {
        return 0;
    }
}
void selectlanguage()//GADSE19.1f044
{
    printf("\n\t\t Please Select The Language \n\n\n\t1.Sinhala \n\t2.English \n\t3.Tamil \n");
    scanf("%d",&i);
    printf("\n***********************************************************************\n");
    switch(i)
    {
    case 1:
        printf("\n You Selected Sinhala Language \n");
        break;
    case 2:
        printf("\n You Selected English Language \n");
        break;
    case 3:
        printf("\n You Selected Tamil Language \n");
        break;
    default:
        printf("\n Invalid Response! \n");
        selectlanguage();
        break;
    }
}
int mainmenu()
{
    printf("\n\n\n\t\t\t Select The Transaction\n\n\n\t1.CASH WITHDRAWAL \n\t2.CASH DEPOSITE \n\t3.BALANCE INQUIRY \n\t4.PIN CHANGE \n\t5.TAKE CARD \n");
    scanf("%d",&i);
    printf("\n***********************************************************************\n");
    int checkcar();
    switch(i)
    {
    case 1:
        withdraw();
        break;
    case 2:
        deposit();
        break;
    case 3:
        checkbal();
        break;
    case 4:
        pinchange();
        break;
    case 5:
        printf("\n Please Take Your Credit Card \n");
        printf("\n Thanks For Using Our ATM Network, Come Again! \n");
        getch();
        return 0;
        break;
    default:
        printf("\n Invalid Response! \n");
        mainmenu();
    }
}
void withdraw()//GADSE19.1f025
{
    int i=0;
    int amt=0;
    int y=0;
    int a[5]= {0,505,1005,2005,5005};
    printf("\n\t\t\t Select The Response \n\n\n\t1. Rs. 500 \n\t2. Rs. 1000 \n\t3. Rs. 2000\n\t4. Rs. 5000\n\t5.Other Amount \n\t6.Go Back\n");
    scanf("%d",&i);
    printf("\n***********************************************************************\n");
    switch(i)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        if(a[i]>bal)
        {
            printf("\n Your Account Has Not Enough Money To Withdraw! \n");
            withdraw();
        }
        else
        {
            bal=bal-a[i];
            amt=a[i]-5;
            printf("\n Please Take Your Money, Your Account Balance Is Rs.%d \n",bal);
            reccheck(y,amt,1);
            again();
        }
        break;
    case 5:
        printf("\n\tYou Can Withdrawal Only less than or equal Rs.100000 \n");
        printf("\n Please Enter The Amount (that is divisible by 100) : ");
        scanf("%d",&amt);
        if ((amt+5)>bal && amt%100==0 && amt>0)
        {
            printf("\n Your Account Has Not Enough Money To Withdraw! \n");
            withdraw();
        }
        else if((amt+5)<bal && amt%100==0 && amt>0)
        {
            bal=bal-(amt+5);
            printf("\n Please Take Your Money, Your Account Balance Is Rs.%d \n",bal);
            reccheck(y,amt,1);
            again();
        }
        else if(amt<100||amt>=100000)
        {
            int exit=0;
            printf("\n Please Enter Valid Amount! \n");
            printf("1.Enter 1 to exit\n 2.Enter 2 to continue");
            printf("\n***********************************************************************\n");
            scanf("%d",&exit);
            switch(exit)
            {
            case 1:
                mainmenu();
                break;
            case 2:
                withdraw();
                break;
            default:
                printf("Invalid option\n");
                withdraw();
            }
        }
        break;
    case 6:
        mainmenu();
    default:
        printf("Invalid");
    }
}
void deposit()//GADSE19.1f025,GADSE19.1f044
{
    int acc=0;
    int y=0;
    int amt=0;
    int exit;
    printf("Please Enter Your Account Number: ");
    scanf("%d",&acc);
    printf("\t\t\t\t\t-----------------------------------------------------------\n\n\n\n\n");
    if(acc==accno)
    {
        count=0;
        printf("\tName:-A.W.S.C.Deshapriya \n\tAccount No:-12345678\n\n");
        printf("Enter Money You Want To Deposit(that is divisible by 100) : ");
        scanf("%d",&amt);
        if(amt%100==0)
        {

            printf("Your Transaction Is Complete");
            printf("\n***********************************************************************\n");
            printrec(3,amt);
            reccheck(y,amt,2);
            again();
        }
        else
        {
            printf("Please enter valid amount\n");
            printf("\n***********************************************************************\n");
            deposit();
        }
    }
    else
    {
        printf("Invalid account no: \n");
        printf("1.Enter 00 to exit\n 2.Enter 01 to continue");
        printf("\n***********************************************************************\n");
        scanf("%d",&exit);
        switch(exit)
        {
        case 00:
            mainmenu();
            break;
        case 01:
            deposit();
            break;
        default:
            printf("Invalid option\n");

        }
    }

}
void checkbal()//GADSE19.1f027
{
    printf("\n Do You Want A Receipt? \n\t1.YES \n\t2.NO \n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        printf("\n Your Account Balance Is Rs.%d \n",bal);
        printrec(2,0);
        again();
        break;
    case 2:
        printf("\n Your Account Balance is Rs.%d \n",bal);
        again();
        break;
    default:
        printf("\n Invalid Response! \n");
        checkbal();
    }
}
int again()
{
    printf("\n Do You Want Another Transaction?\n\t1.YES \n\t2.NO \n");
    scanf("%d",&i);
    printf("\n***********************************************************************\n");
    if (i==1)
    {
        value=checkpin();
        if (value==0)
            return 0;
        else
            mainmenu();
    }
    else if(i==2)
    {
        printf("\n Please Take Your Credit Card \n");
        printf("\n Thanks For Using Our ATM Network, Come Again! \n");
        getch();
        return 0;
    }
    else
    {
        printf("\n Invalid Response! \n");
        i=0;
        again();
    }
}
int checkpin()
{
    int tpin=0;
    printf("\n Enter the PIN Number : ");
    scanf("%d",&tpin);
    if (tpin==pin)
    {
        count=0;
        mainmenu();
    }
    else if (count == 2)
    {
        printf("\n Your Card Has Been Blocked, Please Contact The Bank Manager! \n");
        getch();
        return 0;
    }
    else if (tpin != pin)
    {
        ++count;
        printf("\n Invalid PIN Number! \n");
        checkpin();
    }
}
void pinchange()//GADSE19.1f012
{
    int newp;
    int new_pin;
    int i=0;
    int conp;
    int pin_len=0;
    printf("\n\nEnter Your Current PIN :");
    scanf("%d",&i);
    if(pin==i)
    {
        printf("\nEnter A New PIN : ");
        scanf("%d",&newp);
        new_pin = newp;
        while(new_pin != 0)
        {
            new_pin= new_pin/10;
            ++pin_len;
        }
        if(pin_len==4)
        {
            printf("\nEnter the New PIN Again : ");
            scanf("%d",&conp);
            if(newp==conp)
            {
                printf("\n\t\tPIN Change Success !\n");
                pin=newp;
                printf("\n***********************************************************************\n");
                mainmenu();
            }
            else
            {
                printf("\n\t\tThe System Cannot Change The PIN Number!\n");
                printf("\n***********************************************************************\n");
                mainmenu();
            }
        }
        else
        {
            printf("\n\t\tInvalid Pin\n***********************************************************************");
        }
    }
    else
    {
        printf("\n\t\tThe System Cannot Change The PIN Number!\n");
        printf("\n***********************************************************************\n");
        printf("\n***********************************************************************\n");
        mainmenu();
    }
}
void printrec//GADSE19.1f012,GADSE19.1f027
(int type, int amount)
{
    printf("\n\tReceipt\n\n");
    printf("\t****************************\n");
    printf("\t BANK OF NIBM\n");
    time_t t=time(NULL);
    struct tm*tm=localtime(&t);
    printf("\t%s\n\n",asctime(tm));
    printf("\tSAV : 1267*******\n");
    if (type==1)
    {
        printf("\tWITHDRAWAL AMOUNT Rs. %d\n\n",amount);
        printf("\tACTUAL BAL IS LKR : %d\n",bal);
        printf("\tAVAILABLE BAL IS LKR: %d\n",bal);
    }
    if (type==2)
    {
        printf("\tACTUAL BAL IS LKR : %d\n",bal);
        printf("\tAVAILABLE BAL IS LKR: %d\n",bal);
    }
    if (type==3)
    {
        printf("\n\tTotal Deposit: Rs.%d",amount);
        printf("\n\tStatus : Successful\n\n");
    }
    printf("\t\tTHANK YOU\n");
    printf("\t****************************\n\n");
}
void reccheck
(int y, int amt, int transaction_type)
{

    printf("\n Do You Want A Receipt?\n\t1.YES \n\t2.NO \n");
    scanf("%d",&y);
    switch (transaction_type)
    {
    case 1:
        if (y==1 && transaction_type==1)
        {
            printrec(1,amt);
            printf("\n Please Take Your Money and Receipt, Your Account Balance Is Rs.%d \n",bal);
        }
        else if (y==2 && transaction_type==1)
        {
            printf("\n Please Take Your Money, Your Account Balance Is Rs.%d \n",bal);
        }
    case 2:
        if (y==1 && transaction_type==2)
        {
            printrec(3,amt);
            printf("\n Please Take Your Receipt, Your Account Balance Is Rs.%d \n",bal);
        }
        else if (y==2 && transaction_type==2)
        {
            printf("\n Your Account Balance Is Rs.%d \n",bal);
        }
    }
}

