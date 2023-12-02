#include <iostream>

int* func(int arr[], int lenarr, int target) {
    int* result = new int[2];  // Array to store the result

    for (int i = 0; i < lenarr; i++) {
        for (int j = i + 1; j < lenarr; j++) {
            if (arr[i] + arr[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;  // Return the result array and exit the function
            }
        }
    }

    // If no solution is found, return nullptr or handle it accordingly
    return nullptr;
}

int main() {
    int lenarr, target, t;
    std::cout << "T ";
    std::cin >> t;
    while (t != 0) {
        std::cout << "Enter the length of the array: ";
        std::cin >> lenarr;

        int* arr = new int[lenarr];
        std::cout << "Enter array elements: ";
        for (int i = 0; i < lenarr; i++) {
            std::cin >> arr[i];
        }

        std::cout << "Enter the target: ";
        std::cin >> target;

        int* result = func(arr, lenarr, target);

        if (result != nullptr) {
            std::cout << "Output: [" << result[0] << ", " << result[1] << "]" << std::endl;
            delete[] result;  // Don't forget to free the allocated memory
        } else {
            std::cout << "No solution found." << std::endl;
        }

        delete[] arr;  // Don't forget to free the allocated memory
        t--;  // Decrement the value of t to avoid infinite loop
    }
    return 0;
}
