#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Cheak num is even or odd" <<endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "Adult";
    }
    else if (age >= 13 && age <= 17)
    {
        cout << "Teenage";
    }
    else if (age < 12)
    {
        cout << "child";
    }
    return 0;
}