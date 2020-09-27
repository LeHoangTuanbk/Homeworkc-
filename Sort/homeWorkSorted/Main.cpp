#include "Header.h"

int a[] = { 5,4,6,9,1,2 };
int sizeArr = 6;

int main()
{
	// se cai buble,sort, selection sort, insertion sort.
	cout << "Array at the begining:" << endl;
	showArr(a, sizeArr);
	cout << "Array after sorting is: " << endl;
	//bubble_sort(a, sizeArr);
	//selection_sort(a, sizeArr);
	//insertion_sort(a, sizeArr);
	//merge_sort(a,0,sizeArr-1);
	quick_sort_rec(a,0, sizeArr-1);
	showArr(a, sizeArr);
	system("pause");
	return 0;
}