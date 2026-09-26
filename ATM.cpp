#include <iostream>
using namespace std;
int pass(){
    cout << "===== ATM MANAGEMENT SYSTEM =====" << endl;
    int pass;
    cout<<"Enter your pin (sample pin is 0000)"<<endl;
    cin>>pass;
    if (pass == 0000){
    cout << "You have successfully logged in" << endl;
    return 1;
}
else{
    cout << "Wrong PIN" << endl;
    return 0;
}
    
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
    cout << "5. Mini Statement" << endl;
    cout << "6. Exit" << endl;
    return 0;
}
int balance(){
    int a = 50000;
    cout<<"You have balance of Rs. "<< a << endl;
    return 0;
}
int main() {
    
    int login = pass();

if (login == 1){
    balance();
    menu();
}
    return 0;
}