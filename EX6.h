int EX6()
{
	int num, sum = 0;
	bool perfect = false;
	printf("Enter the number :\n");
	scanf("%d", &num);
	for(int i = num-1; i > 0; i--){
		if(num % i == 0)
			sum += i;
	}

	if(num == sum) perfect = true;

	if(perfect) printf("Perfect !\n");
	else printf("Not perfect !\n");
}
