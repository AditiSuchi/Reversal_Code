#include <iostream>
#include <string>
#include <vector>
using namespace std;

// void reversestr(string &st)
// {
//     int n = st.length();
//     for (int i = 0; i < n / 2; i++)
//     {
//         swap(st[i], st[n - i - 1]);
//     }
// }

void reversestr(string &st)
{
    int n = st.length();
    for (int i = n; i >= 0; i--)
    {
        cout << st[i];
    }
}
int main()
{
    string str = "Polymorphism my name is Aditi\n";

    reversestr(str);

    // cout << str;
    return 0;
}