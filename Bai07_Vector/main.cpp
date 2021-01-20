#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> vec)
{
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " " ;
    }
    cout << "\n";
}

void printVector2(vector<int> vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> vInt = {1,2,3,4};
    vInt.push_back(5);
    printVector2(vInt);

    vInt.erase(vInt.begin() + 2);
    printVector(vInt);

    vInt.assign(7, 12);
    printVector(vInt);

    vInt.clear();
    for(int i = 0; i < 10; i++)
        vInt.push_back(i);
    printVector2(vInt);
    vInt.emplace(vInt.begin(), 5);
    printVector(vInt);

    vector<int> vInt2 = {10,11,12,13,14,15};
    cout << "Vector 1 is ";
    printVector(vInt);
    cout << "Vector 2 is ";
    printVector(vInt2);
    
    cout << "Swap vector 1 to vector 2\n";
    vInt2.swap(vInt);

    cout << "Vector 1 is ";
    printVector(vInt);
    cout << "Vector 2 is ";
    printVector(vInt2);

    cout << "Element 5 of vector 1 is " << vInt.at(5);
    return 0;
}