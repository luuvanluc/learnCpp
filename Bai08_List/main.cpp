#include <iostream>
#include <list>
#include <random>

using namespace std;

void printList(list<int> _list)
{
    list<int>::iterator i;
    for(i = _list.begin(); i != _list.end(); i++)
        cout << *i << " ";
    cout << "\n";
}

int main()
{
    list<int> BufferList = {1,2,3};
    for(int i = 0; i < 10; i++)
        BufferList.push_back(rand()%100);
    for(int i = 0; i < 10; i++)
        BufferList.push_front(rand()%100);
    
    cout << "List before sort: ";
    printList(BufferList);

    BufferList.sort();
    cout<< "List after sort: ";
    printList(BufferList);
        
    return 0;
}