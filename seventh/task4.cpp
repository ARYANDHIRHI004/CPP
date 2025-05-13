#include <iostream>

using namespace std;

int main(){
    
    // lambda function
    auto prepareChai = [](int cups){
        cout << "Preparing " << cups;
    };
    prepareChai(4);
    return 0;
}