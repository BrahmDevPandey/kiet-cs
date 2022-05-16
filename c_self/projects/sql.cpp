// program to generate sql commands for given data entry into table
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string tableName, attribute, query;
    vector<string> result; // vector to hold the final queries
    int tuples, col;

    cout << "Enter table name: ";
    cin >> tableName;
    cout << "Enter number of tuples in table: ";
    cin >> tuples;
    cout << "Enter number of attributes in table: ";
    cin >> col;

    cout << "\nEnter the tuples one by one: \n";
    for (int i = 1; i <= tuples; i++)
    {
        query = "INSERT INTO " + tableName + " VALUES(";
        for (int j = 1; j <= col; j++)
        {
            cin >> attribute;
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