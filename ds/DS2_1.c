#include <stdio.h>

int main(){
	char c, c_array[100];
	int i ,i_array[100];
	short s, s_array[100];
	float f, f_array[100];
	long l, l_array[100];

	printf("lu %lu\n%lu %lu\n%lu %lu\n%lu %lu\n%lu %lu", sizeof(c), sizeof(c_array),sizeof(i), sizeof(i_array),sizeof(s), sizeof(s_array),sizeof(f), sizeof(f_array),sizeof(l), sizeof(l_array));
}
