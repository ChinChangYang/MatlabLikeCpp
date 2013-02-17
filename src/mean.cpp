double mean(double* x, int N) {
	if (N <= 0) return 0.0;
	double m = 0.0;
	for (int i = 0; i < N; i++) {
		m += x[i];
	}
	return m / N;
}
