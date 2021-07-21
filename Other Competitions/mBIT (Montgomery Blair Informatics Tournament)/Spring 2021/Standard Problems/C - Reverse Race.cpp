#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;

    string ans = "";
    while(ss >> word)
    {
        int l = word.length();

        if(isupper(word[0]))
        {
            word[0] += 32;
            word[l-1] -= 32;
        }

        reverse(word.begin(), word.end());

        ans = word + " " + ans;
    }
    
    cout << ans.substr(0, ans.length()-1);;
    return 0;
}
