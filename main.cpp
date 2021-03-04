#include <iostream>  // cout

#include "tasks.hpp"

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3};
    vector<int> odd_numbers = find_odd_numbers(numbers);
    for (int i = 0; i < odd_numbers.size(); ++i) {
        cout << odd_numbers[i] << endl;
    }
    return 0;
}