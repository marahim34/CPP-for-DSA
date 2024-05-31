#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss;
    ss << s;

    string word;

    while (ss >> word)
    {
        // cout << word << endl;
        int length = word.size();
        int left = 0;
        int right = length - 1;

        while (left < right)
        {
            swap(word[left], word[right]);
            left++;
            right--;
        }

        cout << word << " ";
    }
    cout << endl;

    return 0;
}