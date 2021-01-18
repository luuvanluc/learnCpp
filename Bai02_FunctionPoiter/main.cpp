#include<iostream>
#include<functional>

using namespace std;
int sum(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}


int main()
{
    cout << "Bai 02: Function Pointer" << endl;

    //1. traditional way
    int (*pFunc)(int, int);
    int a = 10, b = 20;
    pFunc = sum;
    cout << "pFunc = sum. pFunc(10,20) = " << pFunc(a,b) << endl;
    pFunc = mul;
    cout << "pFunc = mul. pFunc(10,20) = " << pFunc(a,b) <<endl;

    //2. std::function way
    function<int(int,int)> pStdFunc;
    pStdFunc = sum;
    cout << "pStdFunc = sum. pStdFunc(10,20) = " << pStdFunc(a,b) << endl;
    pStdFunc = mul;
    cout << "pStdFunc = mul. pStdFunc(10,20) = " << pStdFunc(a,b) << endl;

    //2. std::function way with auto
    auto pAutoFunc = sum;
    cout << "pAutoFunc = sum. pAutoFunc(10,20) = " << pAutoFunc(a,b) << endl;
    pAutoFunc = mul;
    cout << "pAutoFunc = mul. pAutoFunc(10,20) = " << pAutoFunc(a,b) << endl;

    return 0;
}