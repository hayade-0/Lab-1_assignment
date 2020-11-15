/*# include <iostream>
using namespace std;

void prime_print(int n) 
{
	
	int count = 1;
	int w = 3;
	while(count<=n)
	{
		for (int i = 2; i < w; i++) 
		{
			int prime = 1;
			for (int j = 2; j <=i; j++) 
			{
				if ( i % j == 0 && i != j) 
				{
					prime = 0;
					
				}
				if (prime == 1) 
				{
					cout << i << " ";
							count =count+1;
							break;
				}

			}
			if (count <= n)
				w = w + 1;

		
		}

	}
			
}

int main()
{
	int n;
	cin >> n;
	prime_print(n);
}*/