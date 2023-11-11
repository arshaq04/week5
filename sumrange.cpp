#include <iostream>
#include <vector>

using namespace std;

int main() {

vector<int> nums;
int x, y;
cout << "Enter two numbers: ";
cin >> x >> y;
int sum = 0;

for (int i = x; i <= y; i++) {
    while (i <= y) {
        sum += i;
        break;
    }
}
cout << "Sum from " << x << " to " << y << " is " << sum << endl;
return 0;
}