#include <iostream>
#include <cstring>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int find(char s[], int i = 0, int dot_count = 0) {
    if (s[i] == '\0')
        return -1;
    if (s[i] == '.')
        dot_count++;
    if (dot_count == 3)
        return i;
    return find(s, i + 1, dot_count);
}

char* change(char* dest, const char* str, char* t, int i = 0) {
    if (str[i] == '\0') {
        *t = '\0';
        return dest;
    }


    if ((i + 1) % 4 == 0) {
        *t++ = '.';
    }
    else {
        *t++ = str[i];
    }

    return change(dest, str, t, i + 1);
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    int third_dot_index = find(str);
    if (third_dot_index != -1)
        cout << "Index of third dot: " << third_dot_index << endl;
    else
        cout << "The string does not contain three dots." << endl;

    char* dest = new char[strlen(str) + 1];
    dest[0] = '\0';
    char* modified_str = change(dest, str, dest);

    cout << "Modified string (result): " << modified_str << endl;

    delete[] dest;
    return 0;
}