#include <iostream>
#include <vector>
using namespace std;

void bubbleSortBase(vector<int> arr, long long &comparaciones, long long &intercambios) {
    int n = arr.size();
    comparaciones = 0;
    intercambios = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            comparaciones++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                intercambios++;
            }
        }
    }
}

int main() {
    vector<vector<int>> casos = {
        {5, 3, 8, 2},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1}
    };

    for (auto &caso : casos) {
        long long comp, interc;
        bubbleSortBase(caso, comp, interc);
        cout << "Caso: [";
        for (size_t k = 0; k < caso.size(); k++) cout << caso[k] << (k + 1 < caso.size() ? ", " : "");
        cout << "] -> Comparaciones: " << comp << ", Intercambios: " << interc << endl;
    }
    return 0;
}
