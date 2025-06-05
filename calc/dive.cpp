#include "sub.h"
#include "sub.h"

int dive(int x, int y)
{
	int tot = x;
	int cnt = 0;
	for (int i = 0;i < y;i++) {
		tot = sub(tot,y);
		if(tot<=0){
			break;
		}
		else {
			cnt++;
		}

	}

	return cnt;
}
