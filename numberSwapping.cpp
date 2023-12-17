#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;

    cout<< "Before swapping:" << endl << "a=" << a << endl << "b=" << b << endl;
  
    int temp = a; // storing the value of a in a temporary variable...
    a = b;
    b = temp;
  
    cout<< "After swapping:" << endl << "a=" << a << endl << "b=" << b << endl;

    return 0;
}
