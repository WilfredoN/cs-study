#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right);
void mergeSort(std::vector<int>& arr, int left, int right);


void merge(std::vector<int>& arr, int left, int mid, int right) {
    int len_1 = mid - left + 1;
    int len_2 = right - mid;

    std::vector<int> l(len_1);
    std::vector<int> r(len_2);

    for (int i = 0; i < len_1; i++) {
	    l[i] = arr[left + i];
    }
    for (int j = 0; j < len_2; j++) {
	    r[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0;
    int k = left;

    while (i < len_1 && j < len_2) {
	    if (l[i] <= r[j]) {
		    arr[k] = l[i];
		    i++;
	    }
	    else {
		    arr[k] = r[j];
		    j++;
	    }
	    k++;
    }

    while (i < len_1) {
	    arr[k] = l[i];
	    i++;
	    k++;
    }
    while (j < len_2) {
	    arr[k] = r[j];
	    j++;
	    k++;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) {
	    return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);


}

int main(void) {
    int n;
    std::cin >> n;
    std::vector<int> ar(n);
    for (int i = 0; i < n; i++) std::cin >> ar[i];

    mergeSort(ar, 0, n - 1);

    for (int i = 0; i < n; i++) std::cout <<ar[i] << " ";

    return 0;
}
