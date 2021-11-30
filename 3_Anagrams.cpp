#include <iostream>
#include <map>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2) {
    map<char, char> firstStr;
    map<char, char> secondStr;

    if (str1.length() != str2.length()) return false;

    for (char & i : str1) {
        firstStr.insert(make_pair(i, i));
    }
    for (char & i : str2) {
        secondStr.insert(make_pair(i, i));
    }
    for (auto & item : firstStr) {
        if (secondStr.find(item.first) == secondStr.end()) return false;
    }
    return true;
}

int main() {
    string str1;
    string str2;
    cin >> str1 >> str2;

    cout << isAnagram(str1, str2);
}