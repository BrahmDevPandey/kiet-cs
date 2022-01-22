// to calculate the sum of difference of all bits of a number
#include <iostream>
using namespace std;

class Solution
{
public:
    int countBits(int N, long long int A[])
    {
        int i, j, m, n, sum = 0;
        for (i = 0; i < N - 1; i++)
            for (j = i + 1; j < N; j++)
            {
                m = A[i];
                n = A[j];
                sum += bitDiff(m, n);
            }
        return sum;
    }

    int bitDiff(int m, int n)
    {
        int sum = 0, bitM, bitN;
        while (m > 0 || n > 0)
        {
            sum += (m ^ 0) ^ (n ^ 0);
            m >> 1;
            n >> 1;
        }
        return sum;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    t = 0;
    cin >> t;
    while (t > 0)
    {
        int N;
        cin >> N;
        long long int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        cout << ob.countBits(N, A) << "\n";
        t--;
    }
    return 0;
}