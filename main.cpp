#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int limit;

    cout << "upper limit?" << endl;
    cin >> limit;

    for(int i = 2; i < limit; ++i) {
        bool flag = true;
        for(int j = 2; j <= (int)sqrt(i); ++j) {
            if(i % j == 0) {
                flag = false;
            }
        }

        if(flag) {
            cout << i << endl;
        }
    }

    return 0;
}