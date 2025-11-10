#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> freq(26, 0);

    for (char c : s)
        freq[c - 'A']++;

    if (s.size() % 2 == 0)
    {
        bool pal = true;
        for (int i : freq)
            if (i % 2 != 0)
            {
                pal = false;
                break;
            }
        if (pal)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                    cout << char(i + 'A');
            }
            for (int i = 25; i >= 0; i--)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                    cout << char(i + 'A');
            }
        }
        else
            cout << "NO SOLUTION\n";
    }
    else
    {
        int count = 0, odd_int = -1;
        for (int i = 0; i < 26; i++)
            if (freq[i] % 2 != 0)
            {
                count++;
                odd_int = i;
            }

        if (count == 1)
        {
            for (int i = 0; i < 26; i++)
            {
                if (i != odd_int)
                {
                    for (int j = 0; j < freq[i] / 2; j++)
                        cout << char(i + 'A');
                }
            }

            for (int i = 0; i < freq[odd_int]; i++)
                cout << char(odd_int + 'A');

            for (int i = 25; i >= 0; i--)
            {
                if (i != odd_int)
                {
                    for (int j = 0; j < freq[i] / 2; j++)
                        cout << char(i + 'A');
                }
            }
        }
        else
            cout << "NO SOLUTION\n";
    }

    return 0;
}