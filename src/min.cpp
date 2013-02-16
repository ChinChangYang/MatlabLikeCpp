void min(double& value, int& index, double x[], int N) {
	if (N <= 0) return;
	value = x[0];
	index = 0;
	for (int i = 1; i < N; i++) {
		if (x[i] < value) {
			value = x[i];
			index = i;
		}
	}
}
double min(double x[], int N) {
	if (N <= 0) return 0.0;
	double value = x[0];
	for (int i = 1; i < N; i++)
		if (x[i] < value)
			value = x[i];
	return value;
}
