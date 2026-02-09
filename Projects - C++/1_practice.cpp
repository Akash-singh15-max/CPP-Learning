// Bank Management System
#include<iostream>
#include<string.h>
using namespace std;

const char* ACCOUNT_FILE = "account.dat";
typedef struct 
{
    int acc_no;
    float balance;
    char name[50];
}Account;

void create_account();
void deposite_money();
void withdraw_money();
void check_balance();
void clear_screen(){
    system("cls");
}


int main(){
    while (1)
    {
        int choice;
        cout<<"\n*** Bank Management System ***"<<endl;
        cout<<"\n1. Create account"<<endl;
        cout<<"2. Deposite money"<<endl;
        cout<<"3. Withdraw money"<<endl;
        cout<<"4. Check balance"<<endl;
        cout<<"5. Exit bank"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            create_account();
            break;
        case 2:
            deposite_money();
            break;
        case 3:
            withdraw_money();
            break;
        case 4:
            check_balance();
            break;
        case 5:
            clear_screen();
            cout<<"\nExiting the bank..."<<endl<<"Thanks for visiting....."<<endl;
            exit(0);
        default:
            cout<<"\nIncorrect choice!"<<endl;
            break;
        }
    }
    

    return 0;
}

void create_account(){
    clear_screen();
    FILE *file = fopen(ACCOUNT_FILE,"ab+");
    if (file==NULL)
    {
        cout<<"\nUnable to open file...."<<endl;
        return;
    }
    Account acc;
    char c;
    do
    {
        c = getchar();
    } while (c!=EOF && c!='\n');
    cout<<"\nEnter your name : ";
    fgets(acc.name,sizeof(acc.name),stdin);
    int ind = strcspn(acc.name,"\n");
    acc.name[ind] = '\0';
    cout<<"Create your account number : ";
    cin>>acc.acc_no;
    acc.balance = 0;
    fwrite(&acc,sizeof(acc),1,file);
    fclose(file);
    cout<<"\nAccount created successfully...."<<endl;
    
    
}

void deposite_money(){
    clear_screen();
    FILE *file = fopen(ACCOUNT_FILE,"rb+");
    if (file==NULL)
    {
        cout<<"\nUnable to open file...."<<endl;
        return;
    }
    Account acc_to_read;
    int acc_no;
    float money;
    cout<<"\nEnter your account number : ";
    cin>>acc_no;
    cout<<"Enter your amount to deposite : ";
    cin>>money;
    while (fread(&acc_to_read,sizeof(acc_to_read),1,file))
    {
        if (acc_to_read.acc_no==acc_no)
        {
            acc_to_read.balance+=money;
            fseek(file,-sizeof(acc_to_read),SEEK_CUR);
            fwrite(&acc_to_read,sizeof(acc_to_read),1,file);
            fclose(file);
            cout<<"\nsuccessfully deposited Rs."<<money<<endl;
            return;
        }
        
    }
    fclose(file);
    cout<<"\nAccount number isn't found in record...."<<endl;

    
}

void withdraw_money(){
    clear_screen();
    FILE *file = fopen(ACCOUNT_FILE,"rb+");
    if (file==NULL)
    {
        cout<<"\nUnable to open file...."<<endl;
        return;
    }
    Account acc_to_read;
    int acc_no;
    float money;
    cout<<"\nEnter your account number : ";
    cin>>acc_no;
    cout<<"Enter the amount you wish to withdrawn : ";
    cin>>money;
    while (fread(&acc_to_read,sizeof(acc_to_read),1,file))
    {
        if (acc_to_read.acc_no==acc_no)
        {
            if (acc_to_read.balance>=money)
            {
                acc_to_read.balance-=money;
                fseek(file,-sizeof(acc_to_read),SEEK_CUR);
                fwrite(&acc_to_read,sizeof(acc_to_read),1,file);
                fclose(file);
                cout<<"\nSuccessfully withdrawn Rs."<<money<<endl;
                return;
            }
            else{
                cout<<"\nInsufficient balance!"<<endl;
                return;
            }
            fclose(file);
            return;
        }
        
    }
    fclose(file);
    cout<<"\nAccount number isn't found in record...."<<endl;
    
}

void check_balance(){
    clear_screen();
    FILE *file = fopen(ACCOUNT_FILE,"rb");
    if (file==NULL)
    {
        cout<<"\nUnable to open file...."<<endl;
        return;
    }
    Account acc_to_read;
    int acc_no;
    cout<<"\nEnter your account number : ";
    cin>>acc_no;
    while (fread(&acc_to_read,sizeof(acc_to_read),1,file))
    {
        if (acc_to_read.acc_no==acc_no)
        {
            cout<<"\nYour current balancce is Rs."<<acc_to_read.balance<<endl;
            return;
        }
        
    }
    fclose(file);
    cout<<"\nAccount number isn't found in record...."<<endl;
}