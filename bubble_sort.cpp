#include <iostream>
// We pass in the array and lenght of the array
void bubble_sort_ascending(int arr[10], int length) {
  int tmp = 0;
  // Loop for n length of the array

  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < (length - i - 1); j++) {
      // int max = arr[i];
      if (arr[j] > arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
  std::cout << "Ascending order\n";
  for (int i = 0; i < length; i++) {
    std::cout << arr[i] << ", ";
  }
}

void bubble_sort_descending(int arr[10], int length) {
  //initialize variable to temporary store a value
  int tmp = 0;
  // Loop for n length of the array

  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < (length - i - 1); j++) {
      // int max = arr[i];
      if (arr[j] < arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
  std::cout << "Descending order\n";
  for (int i = 0; i < length; i++) {
    std::cout << arr[i] << ", ";
  }
}

int main() {
  // Initialize array with the size of 10
  int arr[10] = {64, 34, 25, 12, 22, 11, 90, 13, 54, 77};
  // Find the length of array by using sizeof() function
  int length = sizeof(arr) / sizeof(arr[0]);

  bubble_sort_ascending(arr, length);
  std::cout << "\n";
  bubble_sort_descending(arr,length);
}
