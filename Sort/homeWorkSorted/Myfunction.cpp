#include <iostream>
using namespace std;

void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
void showArr(int a[],int& n) {
	for (int i = 0; i < n; i++) {
		cout << " " << a[i];
	}
	cout << endl;
}

void bubble_sort(int a[], const int& n)
{
	cout << "Bubble sort: ";
	for (int i = 0; i < n; i++)
		for(int j=0;j<n-1;j++)
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
}

void selection_sort(int a[], const int& n) {
	cout << "Selection sort: ";
	int minId;
	for (int i = 0; i < n - 1; i++)
	{
		minId = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[minId])
			{
				minId = j;
			}
		}	
		swap(a[minId], a[i]);
	}

}
void insertion_sort(int a[], const int& n) {
	for (int i = 1; i < n; i++) {
		int j = i;
		while (j > 0 && a[i] < a[j - 1]) --j;
		int tmp = a[i];
		for (int k = i; k > j; k--)
			a[k] = a[k - 1];
		a[j] = tmp;
	}
}

void merge(int arr[], int l, int m, int r) {
	// Not implement yet!
}

void merge_sort(int a[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		merge_sort(a, l, m);
		merge_sort(a, m + 1, r);
		merge(a, l, m, r);
	}
}



void quick_sort(int a[], const int& n) {
	int x = 0;
}


int qs_partition(int a[], const int& low, const int& high) {

	return 0;
}

void quick_sort_rec(int a[], const int& left, const int& right) {
	int i = left, j = right;
	int pivot = a[left + rand() % (right - left)];
	while (i <= j) {
		while (a[i] < pivot) ++i;
		while (a[j] > pivot) --j;

		if (i <= j) {
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (left < j) quick_sort_rec(a, left, j);
	if (i < right) quick_sort_rec(a, i, right);

}


