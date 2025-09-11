#include <iostream>

using std::cout, std::endl;

void print_array(const int* arr, const int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* create_reversed_copy(const int* arr, const int size) {
    int* reverse = new int[size];
    for (int i = size; i > 0; i--) {
        reverse[size-i] = arr[i-1];
    }
    return reverse;
}

int main(void) {
    const int size = 5;
    const int original[] = {10, 20, 30, 40, 50};
    int* reversed = create_reversed_copy(original, size);

    cout << "Original: ";
    print_array(original, size);
    cout << "Reversed: ";
    print_array(reversed, size);

    delete[] reversed;

    return 0;
}
