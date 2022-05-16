/* package codechef; // don't place package name! */

#include <iostream>
using namespace std;

/* Name of the class has to be "Main" only if the class is public. */
int main()
{
    int n;
    long tests;
    string t = "", s = "";
    cin >> tests;

    while (tests-- > 0)
    {
        // reading all the inputs
        cin >> n;
        cin >> t;
        s = ""; // initialize with empty string
        long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // decrypting the message using cyclic rotation
        long k, ch;

        for (int i = 0; i < n; i++)
        {
            k = arr[i];
            k %= 26;
            ch = t[i];
            ch += k;      // increase ch
            if (ch > 122) // cyclic rotation of ch
                ch = ch % 123 + 97;
            s += (char)ch; // append updated ch to s
        }

        // print the final string
        cout << s << endl;
    }
    return 0;
}
