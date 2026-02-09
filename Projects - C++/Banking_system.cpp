#include<iostream>
#include<string.h>
using namespace std;

const char* ACCOUNT_FILE = "account.dat";
typedef struct 
{
    char name[50];
    int acc_no;
    float balance;
}Account;

void create_account();
void deposite_money();
void withdraw_money();
void check_balance();
void clear_screen();
int main(){
    while (1)
    {
        int choice;
        cout<<"\n\n***Bank Management System***"<<endl;
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
            clear_screen();
            create_account();
            break;
        case 2: 
            clear_screen();
            deposite_money();
            break;
        case 3:
            clear_screen();
            withdraw_money();
            break;
        case 4:
            clear_screen();
            check_balance();
            break;
        case 5:
            cout<<"\nExiting the bank!\nThanks for your visit..."<<endl;
            exit(0);
        default:
            cout<<"\nIncorrect choice!"<<endl;
            break;
        }
    }
    
    return 0;
}
void create_account(){
    FILE *file = fopen(ACCOUNT_FILE,"ab+");
    if (file==NULL)
    {
        cout<<"\nUnable to open file"<<endl;
        return;
    }
    Account acc;
    char c;
    do
    {
        c = getchar();    
    } while (c!='\n' && c!=EOF);
    cout<<"\nEnter your name : ";
    fgets(acc.name,sizeof(acc.name),stdin);
    int ind = strcspn(acc.name,"\n");
    acc.name[ind] = '\0';
    cout<<"Create your account number : ";
    cin>>acc.acc_no;
    acc.balance = 0;
    fwrite(&acc,sizeof(acc),1,file);
    fclose(file);
    cout<<"\nAccount created successfully"<<endl;
    
}
void deposite_money(){
    FILE *file = fopen(ACCOUNT_FILE,"rb+");
    if (file==NULL)
    {
        cout<<"\nUnable to open file"<<endl;
        return;
    }
    Account acc_to_read;
    int acc_no;
    float money;
    cout<<"\nEnter your account number : ";
    cin>>acc_no;
    cout<<"Enter the amount to be deposited : ";
    cin>>money;
    while (fread(&acc_to_read,sizeof(acc_to_read),1,file))
    {
        if (acc_to_read.acc_no==acc_no)
        {
            acc_to_read.balance+=money;
            fseek(file,-sizeof(acc_to_read),SEEK_CUR);
            fwrite(&acc_to_read,sizeof(acc_to_read),1,file);
            fclose(file);
            cout<<"\nSuccessfully deposited Rs."<<money<<endl;
            cout<<"Your current balance is Rs."<<acc_to_read.balance<<endl;
            return;
        }
        
    }
    fclose(file);
    cout<<"\nMoney can't be deposited as the account number "<<acc_no<<" is not found in record."<<endl;
    
}
void withdraw_money(){
    FILE *file = fopen(ACCOUNT_FILE,"rb+");
    if (file==NULL)
    {
        cout<<"\nUnable to open file"<<endl;
        return;
    }
    Account acc_to_read;
    int acc_no;
    float money;
    cout<<"\nEnter your account number : ";
    cin>>acc_no;
    cout<<"Enter the amount you wish to withdraw : ";
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
                cout<<"Your current balance is Rs."<<acc_to_read.balance<<endl;
                return;
            }
            else{
                cout<<"\nInsufficient money in your bank account"<<endl;
            }
            fclose(file);
            return;
        }
        
    }
    fclose(file);
    cout<<"\nMoney can't be withdrawn as the account number "<<acc_no<<" isn't found in record."<<endl;
    
}
void check_balance(){
    FILE *file = fopen(ACCOUNT_FILE,"rb");
    if (file==NULL)
    {
        cout<<"\nUnable to open file"<<endl;
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
            cout<<"\nYour current balance is Rs."<<acc_to_read.balance<<endl;
            return;
        }
        
    }
    fclose(file);
    cout<<"\nAccount number isn't found in record."<<endl;
    
}
void clear_screen(){
    system("cls");
}