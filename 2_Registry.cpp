#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, string> patients;
    string input;
    int i = 0;
    while (getline(cin, input)) {
        if (input == "Next") {
            auto item = patients.begin();
            cout << item->second << endl;
            patients.erase(patients.begin());
        } else {
            patients.insert(make_pair(input + to_string(i), input));
        }
        i++;
    }
}