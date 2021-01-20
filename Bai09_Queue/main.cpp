#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> BufferQueue;
    
    int data[10] = {0,2,4,6,8,10,12,14,16,18};

    for(int i = 0; i < 10; i++)
    {
        BufferQueue.push(data[i]);
    }

    while (!BufferQueue.empty())   
    {
        cout << BufferQueue.front() << " ";
        BufferQueue.pop();
    }

    return 0;
}