#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cout << "Masukkan suatu string: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        cout << input.at(i) << endl;
    }

    return 0;
}
