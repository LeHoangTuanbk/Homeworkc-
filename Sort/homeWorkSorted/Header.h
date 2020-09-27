#pragma once
#include <iostream>
using namespace std;


void swap(int a[], int& x, int& y);
void bubble_sort(int a[], const int& n);
void selection_sort(int a[], const int& n);
void insertion_sort(int a[], const int& n);

void merge(int a[], int l, int m, int r);
void merge_sort(int a[],int l, int r);

void quick_sort(int a[], const int& n);
void quick_sort_rec(int a[], const int& lo, const int& hi);
void qs_partition(int a[], const int& lo, const int& hi);
void showArr(int a[], int& n);