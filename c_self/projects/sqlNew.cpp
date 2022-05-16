// program to generate sql commands for given data entry into table
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    bool contains(vector<int>, int, int);
    string tableName, attribute, query;
    vector<string> result; // vector to hold the final queries
    vector<int> numerics;
    int tuples, col, numericCount, i, val;

    cout << "Enter table name: ";
    cin >> tableName;
    cout << "Enter number of tuples in table: ";
    cin >> tuples;
    cout << "Enter number of attributes in table: ";
    cin >> col;
    cout << "Enter number of columns that have numeric values: ";
    cin >> numericCount;
    cout << "Enter all numeric column numbers: ";
    for (int i = 1; i <= numericCount; i++)
    {
        cin >> val;
        numerics.push_back(val);
    }

    cout << "\nEnter the tuples one by one: \n";
    for (int i = 1; i <= tuples; i++)
    {
        query = "INSERT INTO " + tableName + " VALUES(";
        for (int j = 1; j <= col; j++)
        {
            cin >> attribute;

            if (!contains(numerics, numericCount, j))
                attribute = "'" + attribute + "'";
            query = query + attribute;
            if (j != col)
                query = query + ","; // to attach the comma after every attribute except the last one
        }
        query = query + ");";
        // cout << query << endl;
        result.push_back(query);
    }

    // print the final result
    cout << "\nThe resultant queries are: \n";
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
    return 0;
}

bool contains(vector<int> arr, int size, int index)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == index)
            return true;

    return false;
}