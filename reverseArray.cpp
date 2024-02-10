#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> arry)
{

    for (int i = arry.size(); i >= 0; i--)
    {
        cout << arry[i] << " ";
    }
}
int main()
{
    vector<int> arr = {1, 5, 9, 2, 5, 7};
    reverseArray(arr);

    return 0;
}