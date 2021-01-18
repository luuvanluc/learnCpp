#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>


using namespace std;

int main()
{
    fstream fRead;
    fstream fWrite;
    fRead.open("input.txt", ios::in);
    fWrite.open("output.txt", ios::out);
    string line;
    string data;

    // Read data from input.txt
    while (fRead.eof() == false)
    {
        getline(fRead, line);
        data += line + "\n";
    }
    cout << data << endl;

    // Upper case data
    transform(data.begin(), data.end(), data.begin(), ::toupper);

    cout << data << endl;

    // Write data to output.txt
    fWrite << data;

    fRead.close();
    fWrite.close();
    return 0;
}