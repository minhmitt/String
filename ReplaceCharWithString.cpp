#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

string replaceAll(string s1, string s2, char c){
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1.at(i) == c){
            s1 = s1.replace(i, 1, s2);
            i = i + s2.length() - 1;
        }
    }
    return s1;
}

int main(){
    int t;
    cin >> t;
    int testCount = 1;
    cin.ignore();
    string s1;
    string s2;
    string s3;
    while(t--){
        getline(cin, s1);
        getline(cin, s2);
        getline(cin, s3);
        auto result = replaceAll(s1, s2, s3.at(0));
        cout << "Test " << testCount++ << ": " << result << endl;
    }

    return 0;
}