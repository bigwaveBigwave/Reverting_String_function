#include <iostream>
#include <string> 
using namespace std;

string reverseLetter(string s, int left, int right)
{
    while (left < right)
    {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }

    return s;
}

int main()
{
    string s;

    cin >> s;

    //s.length()
    int s_idx, e_idx;
    s_idx = 0;
    e_idx = 1;
    while (e_idx < s.length())
    {
        if (!isalpha(s[e_idx]) || e_idx == s.length() - 1)
        {
            s = reverseLetter(s, s_idx, e_idx - 1);
            s_idx = e_idx + 1;
            e_idx = s_idx + 1;
        }
        else {
            e_idx++;
        }

    }

    cout << s;

}