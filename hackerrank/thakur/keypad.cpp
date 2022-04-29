#include <iostream>
using namespace std;

int main()
{
    string input, output = "";
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Enter the string: \n";
        cin >> input;
        input += '_';
        char ch = input[0];
        int count = 1;

        for (int i = 1; input[i] != '\0'; i++)
        {
            if (input[i] == ch)
            {
                count++;
            }
            else
            {
                switch (ch)
                {
                case '1':
                    count %= 3; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += ",";
                    else if (count == 2)
                        output += "@";
                    else if (count == 0) // since % will give 0 on 3
                        output += '1';
                    else
                        output += '_';
                    break;

                case '2':
                    count %= 7; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += "A";
                    else if (count == 2)
                        output += "B";
                    else if (count == 3) // since % will give 0 on 3
                        output += 'C';
                    else if (count == 4) // since % will give 0 on 3
                        output += 'a';
                    else if (count == 5) // since % will give 0 on 3
                        output += 'b';
                    else if (count == 6) // since % will give 0 on 3
                        output += 'c';
                    else if (count == 0) // since % will give 0 on 3
                        output += '2';
                    else
                        output += '_';
                    break;

                case '3':
                    count %= 7; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += "D";
                    else if (count == 2)
                        output += "E";
                    else if (count == 3) // since % will give 0 on 3
                        output += 'F';
                    else if (count == 4) // since % will give 0 on 3
                        output += 'd';
                    else if (count == 5) // since % will give 0 on 3
                        output += 'e';
                    else if (count == 6) // since % will give 0 on 3
                        output += 'f';
                    else if (count == 0) // since % will give 0 on 3
                        output += '3';
                    else
                        output += '_';
                    break;

                case '4':
                    count %= 7; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += "G";
                    else if (count == 2)
                        output += "H";
                    else if (count == 3) // since % will give 0 on 3
                        output += 'I';
                    else if (count == 4) // since % will give 0 on 3
                        output += 'g';
                    else if (count == 5) // since % will give 0 on 3
                        output += 'h';
                    else if (count == 6) // since % will give 0 on 3
                        output += 'i';
                    else if (count == 0) // since % will give 0 on 3
                        output += '4';
                    else
                        output += '_';
                    break;

                case '5':
                    count %= 7; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += "J";
                    else if (count == 2)
                        output += "K";
                    else if (count == 3) // since % will give 0 on 3
                        output += "L";
                    else if (count == 4) // since % will give 0 on 3
                        output += 'j';
                    else if (count == 5) // since % will give 0 on 3
                        output += 'k';
                    else if (count == 6) // since % will give 0 on 3
                        output += 'l';
                    else if (count == 0) // since % will give 0 on 3
                        output += '5';
                    else
                        output += '_';
                    break;

                case '6':
                    count %= 7; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += "M";
                    else if (count == 2)
                        output += "N";
                    else if (count == 3) // since % will give 0 on 3
                        output += 'O';
                    else if (count == 4) // since % will give 0 on 3
                        output += 'm';
                    else if (count == 5) // since % will give 0 on 3
                        output += 'n';
                    else if (count == 6) // since % will give 0 on 3
                        output += 'o';
                    else if (count == 0) // since % will give 0 on 3
                        output += '6';
                    else
                        output += '_';
                    break;

                case '7':
                    count %= 9; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += "P";
                    else if (count == 2)
                        output += "Q";
                    else if (count == 3) // since % will give 0 on 3
                        output += 'R';
                    else if (count == 4) // since % will give 0 on 3
                        output += 'S';
                    else if (count == 5) // since % will give 0 on 3
                        output += 'p';
                    else if (count == 6) // since % will give 0 on 3
                        output += 'q';
                    else if (count == 7) // since % will give 0 on 3
                        output += 'r';
                    else if (count == 8) // since % will give 0 on 3
                        output += 's';
                    else if (count == 0) // since % will give 0 on 3
                        output += '7';
                    else
                        output += '_';
                    break;

                case '8':
                    count %= 7; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += "T";
                    else if (count == 2)
                        output += "U";
                    else if (count == 3) // since % will give 0 on 3
                        output += "V";
                    else if (count == 4) // since % will give 0 on 3
                        output += "t";
                    else if (count == 5) // since % will give 0 on 3
                        output += "u";
                    else if (count == 6) // since % will give 0 on 3
                        output += "v";
                    else if (count == 0) // since % will give 0 on 3
                        output += '8';
                    else
                        output += '_';
                    break;

                case '9':
                    count %= 9; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += "W";
                    else if (count == 2)
                        output += "X";
                    else if (count == 3) // since % will give 0 on 3
                        output += "Y";
                    else if (count == 4) // since % will give 0 on 3
                        output += "Z";
                    else if (count == 5) // since % will give 0 on 3
                        output += "w";
                    else if (count == 6) // since % will give 0 on 3
                        output += "x";
                    else if (count == 7) // since % will give 0 on 3
                        output += "y";
                    else if (count == 8) // since % will give 0 on 3
                        output += "z";
                    else if (count == 0) // since % will give 0 on 3
                        output += '9';
                    else
                        output += '_';
                    break;

                case '0':
                    count %= 2; // since only three combinations of 1 are possible
                    if (count == 1)
                        output += " ";
                    else if (count == 0) // since % will give 0 on 3
                        output += '0';
                    else
                        output += '_';
                    break;

                default:
                    break;
                }
                count = 1;
            }

            ch = input[i];
        }

        cout << "\nFinal message: " << output << endl;
    }
    return 0;
}