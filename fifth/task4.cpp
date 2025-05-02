#include <iostream>
#include <string>

using namespace std;

int main(){
    int choice;
    double price;

    cout << "Select your tea\n";
    cin >> choice;

   switch (choice){
        case 1:
            price = 2.0;
            cout << "you selected grreen tea. Price: " << price << endl;
            break;

        case 2:
            price = 3.0;
            cout << "you selected grreen tea. Price: " << price << endl;
            break;

        case 3:
            price = 4.0;
            cout << "you selected grreen tea. Price: " << price << endl;
            break;
            
            default:
            cout << "Invalid Choice!!" << endl;
            break;
   }
    return 0;
}