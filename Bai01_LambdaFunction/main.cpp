#include<iostream>

using namespace std;

int main()
{
    cout << "Bai 01: Lambda Funtion" << endl;

    // Format: No return
    []  // Declare
    ()  // Param
    {}  // Body function
    (); // Run
    // Example 1: If no param, we can remove '() - Param'
    []
    {
        cout << "Hello Lambda 1" << endl;
    }
    ();

    // Example 2: Lambda function with param
    [](string str)
    {
        cout << str << endl;
    }
    ("Hello Lambda 2");

    // Example 3: Lambda function with return 
    auto y = [](float x) -> float
    {
        return x*x;
    }
    (1.2);
    cout << y << endl;

    // Example 4: Capture by copy
    int a = 0;
    cout << " a = " << a << endl;
    cout << " Running Lambda function" << endl;
    [=] () mutable
    {
        a = a + 1;
        cout << " a = " << a << endl;
    }
    ();
    cout << " End Lambda function" << endl;
    cout << " a = " << a << endl;

    // Example 5: Capture by reference
    a = 0;
    cout << " a = " << a << endl;
    cout << " Running Lambda function" << endl;
    [&] () mutable
    {
        a = a + 1;
        cout << " a = " << a << endl;
    }
    ();
    cout << " End Lambda function" << endl;
    cout << " a = " << a << endl;

    // Example 6: Capture with both value and reference
    int c = 0, d = 0;
    cout << "c = " << c << " and d = " << d << endl;
    [c, &d]() mutable
    {
        c = 1;
        d = 1;
    }
    ();
    cout << "After run Lambda function with c (value) and d (reference)" << endl;
    cout << "c = " << c << " and d = " << d << endl;
    
    return 0;
}