#include <iostream>
using namespace std;

int sum (int x, int y){
    cout << "first number" << endl;
    cin >> x;
    cout << "second number" << endl;
    cin >> y;
    cout << "the sum is "<< x+y <<endl;

    return 0;
}

int subtraction (int x, int y){
    cout << "first number" << endl;
    cin >> x;
    cout << "second number" << endl;
    cin >> y;
    cout << "the sum is "<< x-y <<endl;

    return 0;
}

int multiplication (int x, int y){
    cout << "first number" << endl;
    cin >> x;
    cout << "second number" << endl;
    cin >> y;
    cout << "the multiplication is "<< x*y <<endl;

    return 0;
}

int main() {
    //bool bye (False);
    string selection{};

    //while ( bye == False )
    cout << "what is your selection?" << endl;
    cout << "sum, subtraction or multiplication" << endl;
    cin >> selection;
    int x {0};
    int y {0};

    if (selection == "sum" || "Sum")

        sum(x,y);

        else if (selection == "subtraction"|| "Subtraction")

            subtraction(x,y);

        else

            multiplication(x,y);



}

