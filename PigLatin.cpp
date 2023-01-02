#include <iostream>>
using namespace std;
bool isVowel(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' ||
            c == 'O' || c == 'U' || c == 'a' ||
            c == 'e' || c == 'i' || c == 'o' ||
            c == 'u');
}

string pigLatin(string s)
{
    int len = s.length();
    int index = -1;
    for (int i = 0; i < len; i++) {
        if (isVowel(s[i])) {
            index = i;
            break;
        }
    }
    if (index == -1)
        return "-1";
    return s.substr(index) + s.substr(0, index) + "ay";
}
int main()
{
    string str = pigLatin("ball");
    if (str == "-1")
        cout << "No vowels found. Pig Latin not possible";
    else
        cout << str;
}










