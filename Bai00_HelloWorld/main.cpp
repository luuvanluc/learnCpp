#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    auto f = 1.11f;

    printf("Number f is %f\n", f);

    []{ std::cout << "Hello Lambda\n" << std::endl; }();
    [](const std::string& x) { std::cout << x << std::endl; }("Hello lambda 2\n");

    return 0;
}