#include<stdio.h>
#include<cstdlib>

int main(int argc,char*argv[]) {

	//argc�̐������J��Ԃ�
	for (int i = 0; i < argc; i++) {
		printf(argv[i]);
		printf("\n");
	}

	system("pause");
	return 0;
}