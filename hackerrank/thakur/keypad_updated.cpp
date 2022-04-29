// program to simulate the working of a nokia keypad
#include <iostream>
using namespace std;

class keypad
{
    string keys[10];

public:
    keypad() : keys{" 0", ".@1", "ABCabc2", "DEFdef3", "GHIghi4", "JKLjkl5", "MNOmno6", "PQRSpqrs7", "TUVtuv8", "WXYZwxyz9"}
    {
    }

    void driver(void);
};

void keypad::driver(void)
{
    string input, output = "";
    char ch;
    int freq, index;

    cout << "Enter the code: \n";
    cin >> input;

    input += "_";
    ch = input[0];
    freq = 1;

    for (int i = 1; input[i] != '\0'; i++)
    {
        if (input[i] == ch)
        {
            freq++;
        }
        else if (ch != '_')
        {
            index = (int)(ch - '0');
            output += keys[index][freq - 1]; // freq-1 is done because the array is 0-indexed
            freq = 1;
        }
        ch = input[i];
    }

    cout << "The message is " << output << endl;
}

int main()
{
    keypad obj;
    obj.driver();
    return 0;
}