#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    srand(time(NULL));
    int n = rand();
    cout << "Số ngẫu nhiên là:" << "  " << n << "\n\n";
    return 0;
}