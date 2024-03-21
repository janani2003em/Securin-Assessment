//PART - A
#include <iostream>
using namespace std;
int main() {
    
    int total_combinations = 6 * 6;
    cout << "Possible number of combinations: " << total_combinations << endl;

    cout<<"Matrix:"<<endl;
    int combinations[6][6] = {0}; 
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            combinations[i][j] = i + j + 2; 
            cout << combinations[i][j] << " ";
        }
        cout << endl;
    }

    
    double probabilities[11] = {0};
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            probabilities[combinations[i][j] - 2]++;
        }
    }
    
    for (int i = 0; i < 11; ++i) {
        probabilities[i] /= total_combinations;
    }
    
    std::cout << "\nProbability of all the possible sums when two dices are rolled:\n";
    for (int i = 0; i < 11; ++i) {
        cout << "P(Sum = " << i + 2 << ") = " << probabilities[i] << endl;
    }

    return 0;
}

//PART - B



