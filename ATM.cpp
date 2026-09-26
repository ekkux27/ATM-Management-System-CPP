#include <iostream>
using namespace std;
int main(){
    cout << "===== ATM MANAGEMENT SYSTEM =====" << endl;
    int pass;
    cout<<"Enter your pin (sample pin is 0000)"<<endl;
    cin>>pass;
    if (pass==0000)
    {
        cout<<"You have succesfully logged in"<<endl;
    }
    else{
        cout<<"Wrong PIN"<<endl;
    }
    
    return 0;
}