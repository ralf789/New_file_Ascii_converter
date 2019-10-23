//Ralph Tchinda https://github.com/ralf789

#include <cstdio>
#include <string>
#include <fstream>
#include <iostream>



/************************
This program will convert any string char or int 
that you type into ASCII and will create and write 
the answer in a desire new file that can be named by you.
************************/





using namespace std;

int main()
{
	//ask for string
	string s;
	cout << "Hello\n\nThis program will convert any symbol, number or character into ASCII\n\n" << endl;
	cout << "Let's try: " << endl;
	cin >> s;

	
	//create file
	fputs("CONVERTION TO ASCII\n\n\n,fh);
	static const char* nf = "ascii_ans.txt";
	FILE* fh = fopen(nf, "w");
	//print answer in file
	for (int i : s) {
		if (i == 0) break;
		fprintf(fh,"\"%c\" is %d in ASCII\n\n", i, i);
	}
	fclose(fh);
    printf("Your file \"%s\" has been created beside this cpp program location\n", nf);
    return 0;
}


//Ralph Tchinda https://github.com/ralf789
