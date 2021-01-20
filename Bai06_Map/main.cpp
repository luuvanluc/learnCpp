#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    map<int, string> mStr;
    mStr[1] = "One";
    mStr[2] = "Two";
    mStr[100] = "One hundred";
    map<int, string>::iterator it0;
    for(it0 = mStr.begin(); it0 != mStr.end(); it0++)
    {
        cout << it0->first << " => " << it0->second << "\n";
    }

    map<string, int> mInt;
    mInt["One"] = 1;
    mInt["Two"] = 2;
    mInt["One hundred"] = 100;

    map<string, int>::iterator it1;
    for(it1 = mInt.begin(); it1 != mInt.end(); it1++)
    {
        cout << it1->first << " => " << it1 ->second << "\n";
    }

    return 0;
}