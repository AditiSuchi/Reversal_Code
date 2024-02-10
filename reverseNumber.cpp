#include <iostream>
using namespace std;

void reverseNum(int num)
{

    int reversenum = 0;
    while (num > 0)
    {
        int n = num % 10;
        reversenum = reversenum * 10 + n;
        num = num / 10;
    }
    cout << reversenum;
    // return reversenum;
}
int main()
{
    int num;
    cout << "Enter:";
    cin >> num;
    reverseNum(num);

    return 0;
}