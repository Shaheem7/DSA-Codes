#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


/*  Mini Project -  ATM

    // Functionality 

    > check balance 
    > cash withdraw
    > user details
    > update mobile number
    

*/




class ATM {

    private:
    
    long int account_num;
    string name;
    int pin;
    double balance;
    string mobile_num;


    public:

    // setup function 
    void setdata(long int account_num_f, string name_f, int pin_f, double balance_f, string mobile_num_f){
        account_num = account_num_f;
        pin = pin_f;
        name = name_f;
        balance = balance_f;
        mobile_num = mobile_num_f;

    }


    // get functions

    long int get_account_num(){
        return account_num;
    }

    string get_name(){
        return name;
    }

    int get_pin(){
        return pin;
    }

    double get_balance(){
        return balance;
    }

    string get_mobile_num(){
        return mobile_num;
    }



    // update functions

    void update_mobile_num(string mob_prev, string mob_new ){
        if (mob_prev == mobile_num)
        {
            mobile_num = mob_new;
            cout << "Successfully Updated mobile number to '" << mobile_num << "'" << endl;
        }
        _getch();
    }

    void cashWithDraw(int amount){
        if (amount > 0 && amount < balance )
        {
            balance -= amount;
            cout << endl <<  "Please collect your cash " << endl;
            cout << endl <<  "Available Balance : " << balance << endl;

            _getch();
        }
        else{
            cout << "Invalid !" ;
            _getch();
        }
        
    }


};



int main(){

    int choice, i_pin;      // values for authentication
    long int i_acc_num;

    system("cls");     

    ATM user1;          // Creating user 

    user1.setdata(123456789, "Afridi", 1221, 14000, "6006100573");      // Setting user



    // infinite loop 

    do
    {

        system("cls");     // Clearing the screen

        // asking credentials
        cout << "********  Welcome to ATM  ********" << endl;
        cout << "Enter account number : " ;
        cin >> i_acc_num;

        cout << endl << "Enter Pin : ";
        cin >> i_pin;


        // Validiating credentials
        if (i_acc_num == user1.get_account_num() && i_pin == user1.get_pin())
        {
            do
            {   
                int amount = 0;
                string prev_mob, new_mob;
                system("cls");

                // User Interface 

                cout << endl << "********  Welcome to ATM  ********" << endl;
                cout << endl << "Select an Option" << endl;
                cout << "1. Check Balance " << endl;
                cout << "2. Cash Withdraw " << endl;
                cout << "3. Show User details " << endl;
                cout << "4. Update Contact Number" << endl;
                cout << "5. Exit " << endl;
                cout << endl << "> ";

                cin >> choice;  

                switch (choice)
                {
                case 1:
                    cout << endl << "Your Balance is " << user1.get_balance();
                    _getch();
                    break;

                case 2:
                    cout << endl << "Enter amount : ";
                    cin >> amount;

                    user1.cashWithDraw(amount);
                    break;

                case 3:
                    cout << endl << "User Details" << endl;
                    cout << "Account Number : " << user1.get_account_num(); 
                    cout << "Name : " << user1.get_name(); 
                    cout << "Balance : " << user1.get_balance();
                    cout << "Mobile Number : " << user1.get_mobile_num(); 

                    _getch();
                    break;

                case 4:
                    cout << "Enter Old Mobile Number : ";
                    cin >> prev_mob;

                    cout << "Enter New Mobile Number : ";
                    cin >> new_mob;

                    user1.update_mobile_num(prev_mob, new_mob);
                    
                    break;

                case 5:
                    exit(0);

                default:
                    cout << "Enter Valid data !" ;
                    break;
                }

            } while (true);
            
        }
        else{
            cout << "Invalid credentials ! " << endl;
            cout << "Try Again..." << endl;
            _getch();
            exit(0);
        }

    } while (true);
    

    return 0;
}