#include <iostream>

using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";

    cout << "Size of str1 is " << str1.size() << endl;
    cout << "Length of str2 is " << str1.length() << endl;

    char ch1 = str1.front();
    cout << ch1 << endl;
    string::iterator it = str1.begin();
    char ch2 = *it;
    cout << ch2 << endl;
    string str3 = str1 + str2;
    cout << str3 << endl;

    str3.push_back('!');
    cout << str3 << endl;

    str3.insert(5, " ");
    cout << str3 << endl;

    return 0;
}