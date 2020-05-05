#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
struct orang
{
	char string[30];
};

int main()
{
	 orang o[1000];
	char string[30];
	int i, n, j, xy;
	cout<<"Masukkan banyak input huruf : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"input huruf ke-"<<i+1<<" : ";
		cin>>o[i].string;
	}
	for(i=0;i<n;i++)
	{
		j=i;
		for(int x=i+1;x<n;x++)
		{
			xy=strcmp(o[j].string,o[x].string);
			if(xy>0)
			{
				j=x;
			}
		}
		if(j!=i)
		{
			swap(o[j],o[i]);
		}
	}
		cout<<"huruf yang telah diurutkan : "<<endl;
		for(i=0;i<n;i++)
		{
			cout<<"huruf ke-"<<i+1<<" : "<<o[i].string<<endl;
		}
	getch();
}
