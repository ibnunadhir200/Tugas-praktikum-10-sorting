#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int data[10], data2[10];
int n;
void tukar (int a, int b)
{
	int t;
	t=data[b];
	data[b]=data[a];
	data[a]=t;
}
void bubbleSort()
{
	for (int x = 1; x < n - 1; x++)
	{
		for (int y = n - 1; y >= x; y--)
		{
			if (data[y - 1] > data[y])
			{
				int simpan = data[y - 1];
				data[y - 1] = data[y];
				data[y] = simpan;
			}
		}
	}
	cout<<"bubble sort selesai!"<<endl;
}
void selection_sort()
{
	int pos, i, j;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(data[j]<data[pos])
			pos=j;
		}
		if(pos!=i) tukar(pos,i);
	}
	cout<<"selection sort selesai!"<<endl;
}
void insertion_sort()
{
	int temp, i, j;
	for(i=1;i<n;i++)
	{
		temp=data[i];
		j=i-1;
		while (data[j]>temp&&j>=0)
		{
			data[j+1]=data[j];
			j--;
		}
		data[j+1]=temp;
	}
	cout<<"isnertion sort selesai!"<<endl;
}
void input()
{
	cout<<"masukkan jumlah data : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"masukkan data ke-"<<i+1<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}
}
void acakLagi()
{
	for(int i=0;i<n;i++)
	{
		data[i]=data2[i];
	}
	cout<<"data sudah teracak"<<endl;
}
void tampil()
{
	cout<<"data : ";
	for(int i=0;i<n;i++)
	{
	cout<<data[i];
	}
	cout<<endl;
}

int main()
{
	int pil;
	do
	{
		cout<<"1.Input data"<<endl;
		cout<<"2.Bubble sort"<<endl;
		cout<<"3.Selection sort"<<endl;
		cout<<"4.Tampilkan data"<<endl;
		cout<<"5.Acak data"<<endl;
		cout<<"6.Exit"<<endl;
		cout<<"Masukkan pilihan : ";
		cin>>pil;
		switch (pil)
		{
			case 1:
				input();
				break;
			case 2:
				bubbleSort();
				break;
			case 3:
				selection_sort();
				break;
			case 4:
				tampil();
				break;
			case 5:
				acakLagi();
		}
		getch();
	}
	while (pil!=6);
}
