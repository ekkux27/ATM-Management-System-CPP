#include <iostream>
using namespace std;
int a = 50000;
int pin=0;
int pass() {

    cout << "===== ATM MANAGEMENT SYSTEM =====" << endl;

    int enteredPin;

    for (int i = 1; i <= 3; i++) {

        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            cout << "You have successfully logged in" << endl;
            return 1;
        }
        else {
            cout << "Wrong PIN. Attempts remaining: "
                 << 3 - i << endl;
        }
    }

    cout << "Too many incorrect attempts. Account blocked." << endl;

    return 0;
}
int menu(){
    cout<<"========================"<<endl;
    cout<<"        ATM Menu        "<<endl;
    cout<<"========================"<<endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Withdraw Cash" << endl;
    cout << "3. Deposit Cash" << endl;
    cout << "4. Change PIN" << endl;
    cout << "5. Exit" << endl;
    return 0;
}
int balance(){
    cout<<"You have balance of Rs. "<< a << endl;
    return 0;
}
int withdraw() {
    int b;

    cout << "How much amount do you want to withdraw: ";
    cin >> b;

    if (b <= 0) {
        cout << "Invalid withdrawal amount." << endl;
    }
    else if (b > a) {
        cout << "Insufficient balance." << endl;
    }
    else {
        a = a - b;
        cout << "Withdrawal successful!" << endl;
        cout << "New balance is Rs. " << a << endl;
    }

    return 0;
}
int deposit(){
    int c;
    cout<<"How many amount you want to deposit in your account"<<endl;
    cin>>c;
    if(c>0){
        cout<<"New balance is "<<a+c<<endl;
        a=a+c;
    }
    else{
        cout<<"Amount is invalid"<<endl;
    }
    
    return 0;
}
int changePIN(){
    int oldPin;
    int d;
    int e;

    cout << "Enter your current PIN: ";
    cin >> oldPin;

    if(oldPin == pin){
        
        cout << "Enter your new PIN: ";
        cin >> d;

        cout << "Confirm your new PIN: ";
        cin >> e;

        if(d == e){
            pin = d;
            cout << "Your PIN has been changed successfully." << endl;
        }
        else{
            cout << "Your new PIN doesn't match." << endl;
        }
    }
    else{
        cout << "You have entered the wrong PIN." << endl;
    }

    return 0;
}
void exit(){
    cout<<"Thank you for using our ATM"<<endl;
    cout<<"Hope you will surely come again"<<endl;
}
int main() {
    int choice;
    int login = pass();

    if (login != 1) {
        cout<<"Wrong pin"<<endl;
        return 0;
    }

    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                balance();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                deposit();
                break;
            case 4:
                changePIN();
                break;
            case 5:
                exit();
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}