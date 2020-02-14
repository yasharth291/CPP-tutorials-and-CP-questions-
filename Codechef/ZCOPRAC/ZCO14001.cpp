#include <stdio.h>
#include <vector>

using std::vector;

int main()
{
	int N = 0, H = 0, val1 = 0;
	vector<int> heights;
	heights.reserve(100000);
	scanf("%d %d", &N, &H);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &val1);
		heights.push_back(val1);
	}

	int pos = 0, crane = 0;
	while(scanf("%d", &val1), val1)
	{
		if(val1 == 0) break;
		else if(val1 == 1) pos -= (pos > 0) ? 1 : 0;
		else if(val1 == 2) pos += (pos < N - 1) ? 1 : 0;
		else if(val1 == 3 && crane == 0 && heights[pos]) crane = heights[pos]--;
		else if(val1 == 4 && crane && heights[pos] < H)
		{
			crane = 0;
			heights[pos]++;
		}
	}

	for(int i = 0; i < N; i++)
		printf("%d%s", heights[i], i == N - 1 ? "\n" : " ");
	return 0;
}
