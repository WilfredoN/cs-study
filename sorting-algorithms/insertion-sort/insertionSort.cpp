#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& ar);


void insertionSort(std::vector<int>& ar) {
    for (int i = 1; i < ar.size(); ++i) {
        int key = ar[i];
	int j = i - 1;

	while (j >= 0 && ar[j] > key) {
		ar[j + 1] = ar[j];
		j = j - 1;
	}
	ar[j + 1] = key;
    }
}

int main(void) {
    int n;
    std::cin >> n;
    std::vector<int> ar(n);

    for (int i = 0; i < n; i++) std::cin >> ar[i];

    insertionSort(ar);

    for (int i = 0; i < n; i++) std::cout << ar[i] << " ";

    return 0;
}
