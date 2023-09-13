#include <iostream>
#include <string.h>
using namespace std;

void reversestr(char *str1) {
    int i, len, tmp;
    len = strlen(str1);
    for(i = 0; i < len/2; i++) {
        tmp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = tmp;
    }
}
int main()
{
    char str[50];
    cin >> str;
    reversestr ();
    cout << str;
    return 0;
}
