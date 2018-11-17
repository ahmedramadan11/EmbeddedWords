#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void Embeddedwords(string str, int index = -1,
              string subset = "")
{
    int n = str.length();

    // base case
    if (index == n)
        return;

    cout << subset <<endl;


    for (int i = index + 1; i < n; i++) {

        subset += str[i];
        Embeddedwords(str, i, subset);
        subset.erase(subset.size() - 1);
    }

}


int main()
{
    string word;
    cout<<"Enter your word: ";
    cin>>word;
    Embeddedwords(word);

    return 0;
}
