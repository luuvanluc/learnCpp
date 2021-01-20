#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> BufferStack;
    
    int data[10] = {0,2,4,6,8,10,12,14,16,18};

    for(int i = 0; i < 10; i++)
    {
        BufferStack.push(data[i]);
    }


    while (!BufferStack.empty())   
    {
        cout << BufferStack.top() << " ";
        BufferStack.pop();
    }

    return 0;
}