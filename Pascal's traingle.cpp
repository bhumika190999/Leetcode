#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> pascal;
        for (int i = 0; i < numRows; ++i)
        {
            vector <int> pasc_row;
            for (int j = 0; j < i + 1; ++j)
            {
                if (j == 0 || j == i)
                {
                    pasc_row.push_back(1);
                }
                else
                {
                    pasc_row.push_back(pascal[i - 1][j - 1] + pascal[i - 1][j]);

                }
            }
            pascal.push_back(pasc_row);
        }
        return pascal;
    }
};
int main()
{
    Solution ob;
    int numRows;
    cout << "Enter numbr of rows in the Pascal's triangle:";
    cin >> numRows;

    vector <vector <int>> Pascal = ob.generate(numRows);

    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << Pascal[i][j];
        }
        cout << "\n";
    }
}