int EX9()
{
	int n, res, sum = 0;
	printf("Enter the n'th value to be calculated : \n");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		res = pow(i, (2*i));
		for(int j = 1; j < res; j++){
			res *= j;
		}
		sum += res;
	}
	printf("The %dth value of this serie is : %d\n", n, sum);
}
