#include <stdio.h>
int main(){
	FILE *pp;
	pp = fopen("test1.dat","w");
	//fputc('B',pp);
	fputs("GOOD\n",pp);
	fputs("Morning..\n",pp);
	fputs("\n\n\n",pp);
	fputs("...종료..\n",pp);
	fclose(pp);
}
