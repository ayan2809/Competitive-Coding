#include <bits/stdc++.h>

using namespace std;

bool vowel(char& c) {
    return (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}

int main() {
    freopen("./consistency_chapter_1_input.txt", "r", stdin);
    freopen("./consistency_chapter_1_output.txt", "w", stdout);

    int t;
    cin >> t;
    string s;
    for (int i=1; i<=t; i++) {
        cin >> s;
        sort(s.begin(), s.end());
        int mx_con, mx_vow, cnt_con, cnt_vow;
        mx_con = mx_vow = cnt_con = cnt_vow = 0;
        int count = 1;
        for (int j=0; j<s.size()-1; j++) {
            if (s[j] != s[j+1]) {
                if (vowel(s[j])) {
                    mx_vow = max(mx_vow, count);
                    cnt_vow += count;
                } else {
                    mx_con = max(mx_con, count);
                    cnt_con += count;
                }
                count = 1;
            }
            else ++count;
        }

        if (vowel(s.back())) {
            mx_vow = max(mx_vow, count);
            cnt_vow += count;
        } else {
            mx_con = max(mx_con, count);
            cnt_con += count;
        }

        int to_vowels = cnt_con + 2 * (cnt_vow - mx_vow);
        int to_consonants = cnt_vow + 2 * (cnt_con - mx_con);

        cout << "Case #" << i << ": " << min(to_vowels, to_consonants) << endl;
    }
    return 0;
}
