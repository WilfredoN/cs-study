#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& array);

void bubbleSort(std::vector<int>& array) {
    int len = array.size();

    for (int i = 0; i < len - 1; i++) {
	    for (int j = 0; j < len - i - 1; j++) {
		    if (array[j] > array[j + 1]) {
			    std::swap(array[j], array[j + 1]);
		    }
	    }
    }
}

int main(void) {
	int n;
	std::cin >> n;
	std::vector<int> ar(n);
	for (int i = 0; i < n; i++) std::cin >> ar[i];

	bubbleSort(ar);
	
	for (int i = 0; i < n; i++) std::cout << ar[i] << " ";
}

