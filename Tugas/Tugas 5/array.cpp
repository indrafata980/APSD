#include <iostream>
#include <vector> // Menambahkan pustaka vector

using namespace std;

void bubbleSort(vector<int>& arr) {
  bool isSorted = false;
  for (int i = 0; i < arr.size() - 1 && !isSorted; i++) {
    isSorted = true;
    for (int j = 0; j < arr.size() - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        isSorted = false;
      }
    }
  }
}

int main() {
  int n;
  cout << "Masukkan panjang array: ";
  cin >> n;

  if (n == 0) {
    cout << "Array kosong!" << endl;
    return 0;
  }

  vector<int> arr(n);
  cout << "Masukkan elemen array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Array sebelum diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  bubbleSort(arr);

  cout << "Array setelah diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
