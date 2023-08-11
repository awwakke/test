#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	for (int i = 0; i < 100; i++)
	{
		static unsigned int r = time(0);
		r = (r * 3561845 + 5968419);
		cout << r % 100 << " ";
		if ((i + 1) % 5 == 0)
		{
			cout << endl;
		}
	}
	system("pause");
}
