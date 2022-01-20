// program to rotate an array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int>, int);

int main()
{
    vector<int> v;
    int i;

    for (i = 1; i <= 4; i++)
        v.push_back(i);
    cout << "The initial vector is: \n";
    for (i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;

    cout << "\nRotating the vector: \n";
    v = kRotate(v, 3);

    cout << "\nThe final vector is: \n";
    for (i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
    return 0;
}

int hello(string name)
{
    cout << "Hello " << name << endl;
    return 0;
    cout << "This setting was to chech whether the touchpad setting work on ubuntu or not";
}

vector<int> kRotate(vector<int> a, int k)
{
    vector<int> v;
    int n = a.size();
    k = k % n;

    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            v.push_back(a[n + i - k]);
        }
        else
        {
            v.push_back(a[i - k]);
        }
        for (int j = 0; j < v.size(); j++)
            cout << v.at(j) << " ";
        cout << endl;
    }

    return v;
}
