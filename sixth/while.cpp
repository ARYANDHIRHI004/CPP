#include <iostream>
#include <string>
using namespace std;

int main(){
    int teaCups;

    cout << "Enter the number of tea cups:\n";
    cin >> teaCups;
    while (teaCups > 0){
        cout << "Serving a cup of tea " << teaCups << " remaining" << endl;
        teaCups--;
    }
    cout << "All tea cups are served\n";
    
    return 0;
}