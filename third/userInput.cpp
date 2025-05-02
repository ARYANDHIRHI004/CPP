#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;
    
    cout << "What would you like to order in tea?\n";
    getline(cin, userTea);
    
    
    //ask for quantity
    cout << "How many cup of "<< userTea << " would you like to have\n";
    cin >> teaQuantity;    
    
    cout << "Here is your "<< teaQuantity <<" "<<userTea;
    return 0;
}
