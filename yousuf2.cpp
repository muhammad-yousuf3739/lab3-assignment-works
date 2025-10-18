#include <iostream>
using namespace std;

int main() {
    int totalSeconds = 4564;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    cout << totalSeconds << " seconds is equal to " << minutes << " minutes and " << seconds << " seconds." << endl;

    return 0;
}