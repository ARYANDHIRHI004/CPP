#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    int cups;
    cout << "Enter the number of the cups you have: " << endl;
    cin >> cups;

    if (cups > 20){
        cout << "You will get a GOLD badge";
    }else if(cups > 10 && cups <=20){
        cout << "You will get a SILVER badge";
    }else{
        cout << "NO badge for you!!";
    }
    

    return 0;
}
