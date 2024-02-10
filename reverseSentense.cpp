#include <iostream>
#include <string>
#include <stack>
using namespace std;
// reverse using Stack
void reverseString(string &s)
{
    stack<string> st;

    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (s[i] != ' ' && i < n)
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    // for (int i = n; i >= 0; i--)
    // {
    //     string word = "";
    //     while (s[i] == ' ' && i > n)
    //     {
    //         word += s[i];
    //         i--;
    //     }
    //     cout << word;
    // }
}
int main()
{
    string str = "Polymorphism my name is Aditi\n";

    reverseString(str);
    return 0;
}