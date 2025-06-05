#include "sub.h"
int mod(int x, int y) {
	int value = x;
	while (1) {
		if (value < y) {
			return value;
		}
		value = sub(value, y);
	}
}
