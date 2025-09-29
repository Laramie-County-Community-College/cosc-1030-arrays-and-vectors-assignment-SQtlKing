#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    // Flip a coin 500 times
    vector<string> coinFlips;
    string coinFlipResult = "";
    
    for (int i = 0; i < 500; i++) {
        int thisRandomNumber = rand();
        if ((thisRandomNumber % 2) == 0) {
            coinFlipResult = "Heads";
        } else {
            coinFlipResult = "Tails";
        }
        coinFlips.push_back(coinFlipResult); 
    }

    // Count the number of heads
    int headsCount = 0;

    // Loop through the vector and count how many times "Heads" shows up
    for (const auto& flip : coinFlips) {  
        if (flip == "Heads") {
            ++headsCount;
        }
    }
    cout << "Number of Heads: " << headsCount << '\n';
    cout << "Number of Tails: " << coinFlips.size() - headsCount << '\n';

    return 0;
}

