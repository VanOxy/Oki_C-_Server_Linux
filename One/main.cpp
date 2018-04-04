#include <cstdio>
#include <iostream>
#include <memory>


#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>


using namespace std;


void funct(int* tab, int inc, int val);

int main()
{
	printf("Choose second number: \n");
	int tata;
	cin >> tata;
	cout << tata << endl;

	//unique_ptr<int[]> array(new int[10]);
	int* tableau;

	for (int i = 0; i < tata; i++) 
	{
		funct(tableau, i, i);
	}
	

	for (int x = 0; x < tata; x++)
	{
		cout << tableau[x] << endl;
	}

	//std::unique_ptr<int> pMyInteger;

	int hui;
	cin >> hui;


    return 0;
}

void funct(int* tab, int inc, int val) 
{
	tab[inc] = val;
}
