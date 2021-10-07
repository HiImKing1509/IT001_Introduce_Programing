float MAX(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = MAX(a, n - 1);
	if (lc < a[n - 1])
		lc = a[n - 1];
	return lc;
}
