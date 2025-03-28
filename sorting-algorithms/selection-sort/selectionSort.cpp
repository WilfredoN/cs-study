#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr);

void selectionSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
	int min_idx = i;

	for (int j = i + 1; j < arr.size(); j++) {
	    if (arr[j] < arr[min_idx]) {
		min_idx = j;
	    }
	}

	std::swap(arr[i], arr[min_idx]);
    }
}

int main(void) {
    int n;
    std::cin >> n;
    
    std::vector<int> ar(n);

    for(int i = 0; i < n; i++) std::cin >> ar[i];

    selectionSort(ar);

    for (int i = 0; i < n; i++) std::cout << ar[i] << " ";

    return 0;
}

