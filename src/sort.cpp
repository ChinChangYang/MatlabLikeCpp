#include <algorithm>
using namespace std;
void sort(double a[], int idx[], int lo, int hi) {
	int i = lo, j = hi;
	double x = a[(lo + hi) / 2];
	do {
		while (a[i] < x)
			i++;
		while (a[j] > x)
			j--;
		if (i <= j) {
			swap(a[i], a[j]);
			swap(idx[i], idx[j]);
			i++;
			j--;
		}
	} while (i <= j);
	if (lo < j)
		sort(a, idx, lo, j);
	if (i < hi)
		sort(a, idx, i, hi);
}
void sort(double x[], int idx[], int N) {
	for (int i = 0; i < N; i++)
		idx[i] = i;
	sort(x, idx, 0, N - 1);
}
