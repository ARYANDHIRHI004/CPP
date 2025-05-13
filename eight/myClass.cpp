#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
        // Data members
        string teaName;
        int servings;
        vector<string> ingredients;

        // member function
        void display()
        {
            cout << "Tea Name: " << teaName<< "\n";
            cout << "servings: " << servings<< "\n";
            for (string ingredent : ingredients)
            {
                cout << "ingredients:" << ingredent << "\n";
            }
        }
};

int main()
{

    Chai obj1;
    obj1.teaName = "masala chai";
    obj1.servings = 5;
    obj1.ingredients = {"water", "masala", "tea leaf"};

    obj1.display();

    return 0;
}