#include <iostream>

int main() {
    int arr[]{-100, -50, -5, 1, 10, 15};
    int tempo;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (abs(arr[j]) > abs(arr[j + 1])) {
                tempo = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempo;
            }
        }
    }
    for (int y = 0; y < 6; y++) {
        std::cout << arr[y] << " ";
    }
}
