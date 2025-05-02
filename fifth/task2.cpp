#include <iostream>
#include <string>

using namespace std;

int main(){
    int hour;

    cout << "Enter te current hour\n";
    cin >> hour;

    if(hour>=8 && hour <=18){
        cout << "Tea shop is opend" << endl;
    }else{
        cout << "Tea shop is not opend" << endl;        
    }
    return 0;
}