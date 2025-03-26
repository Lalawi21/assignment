#include <iostream>
#include <vector>
using namespace std;

int findSmallest(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "Array is empty!" << endl;
        return -1; // Or any other error handling
    }

    int min_value = arr[0]; // Initialize with the first element

    for (size_t i = 1; i < arr.size(); i++) { // Loop through the array
        if (arr[i] < min_value) {
            min_value = arr[i]; // Update min_value if a smaller element is found
        }
    }

    return min_value;
}

int main() {
    vector<int> numbers = {5, 2, 8, 1, 9, -3, 4};

    int smallest = findSmallest(numbers);
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
