#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> names;
    ifstream inp("inp_word.txt");
    if(!inp.is_open())
        cout << "Unable to open file\n";

    string word;
    while(getline(inp, word))
            names.push_back(word);

    sort(names.begin(), names.end());

    for (size_t i = 0; i < names.size(); i++)
        cout << names[i] << '\n';
}
