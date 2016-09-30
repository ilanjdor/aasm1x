int
mystery4(int a) {
	if (a ==0)
		return 0;

	return a + mystery4(a - 1);
}
