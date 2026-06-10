#include <iostream>
#include <string>
using namespace std;

int main() {
    string bin;
    cout << "Enter binary number: ";
    cin >> bin;

    while (bin.length() % 3 != 0)
        bin = "0" + bin;

    for (int i = 0; i < bin.length(); i += 3) {
        int num = (bin[i] - '0') * 4 +
                  (bin[i + 1] - '0') * 2 +
                  (bin[i + 2] - '0');
        cout << num;
    }

    return 0;
}
