#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // 🔹 Arithmetic Operators
    cout << "--- Arithmetic ---" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // 🔹 Relational Operators
    cout << "\n--- Relational ---" << endl;
    cout << (a == b) << " (a==b)" << endl;
    cout << (a != b) << " (a!=b)" << endl;
    cout << (a > b)  << " (a>b)"  << endl;
    cout << (a < b)  << " (a<b)"  << endl;
    cout << (a >= b) << " (a>=b)" << endl;
    cout << (a <= b) << " (a<=b)" << endl;

    // 🔹 Logical Operators
    cout << "\n--- Logical ---" << endl;
    bool x = true, y = false;
    cout << (x && y) << " (x&&y)" << endl;
    cout << (x || y) << " (x||y)" << endl;
    cout << (!x)    << " (!x)"   << endl;

    // 🔹 Assignment Operators
    cout << "\n--- Assignment ---" << endl;
    int c = a;
    cout << (c += 2) << " (c+=2)" << endl;
    cout << (c -= 1) << " (c-=1)" << endl;
    cout << (c *= 3) << " (c*=3)" << endl;
    cout << (c /= 2) << " (c/=2)" << endl;
    cout << (c %= 4) << " (c%=4)" << endl;

    // 🔹 Increment & Decrement
    cout << "\n--- Increment/Decrement ---" << endl;
    int d = 5;
    cout << d++ << " (d++)" << endl;
    cout << ++d << " (++d)" << endl;
    cout << d-- << " (d--)" << endl;
    cout << --d << " (--d)" << endl;

    // 🔹 Bitwise Operators
    cout << "\n--- Bitwise ---" << endl;
    cout << (a & b) << " (a&b)" << endl;
    cout << (a | b) << " (a|b)" << endl;
    cout << (a ^ b) << " (a^b)" << endl;
    cout << (~a)    << " (~a)"  << endl;
    cout << (a << 1) << " (a<<1)" << endl;
    cout << (a >> 1) << " (a>>1)" << endl;

    // 🔹 Ternary Operator
    cout << "\n--- Ternary ---" << endl;
    int maxVal = (a > b) ? a : b;
    cout << "Max = " << maxVal << endl;

    // 🔹 sizeof Operator
    cout << "\n--- sizeof ---" << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "char: " << sizeof(char) << endl;

    // 🔹 Pointer Operators
    cout << "\n--- Pointers ---" << endl;
    int num = 42;
    int *p = &num;
    cout << "Address: " << p << endl;
    cout << "Value: " << *p << endl;

    // 🔹 Type Casting
    cout << "\n--- Type Casting ---" << endl;
    double pi = 3.14159;
    int piInt1 = (int)pi;              // C-style cast
    int piInt2 = static_cast<int>(pi); // C++ cast
    cout << piInt1 << " " << piInt2 << endl;

    return 0;
}
