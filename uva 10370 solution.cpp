#include <cstdio>
using namespace std;

int main() {
	int tc, n;
	int marks[1001];
	int total, countt;
	double average;

	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);
		total = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &marks[i]);
			total += marks[i];
		}
		average = (double) total / (double) n;

		countt = 0;
		for (int i = 0; i < n; i++) {
			if (marks[i] > average)
				countt++;
		}

		printf("%.3lf%%\n", (double) countt / (double) n * 100.0);
	}

	return 0;
}
