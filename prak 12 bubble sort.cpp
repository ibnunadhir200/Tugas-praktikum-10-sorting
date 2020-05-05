#include <iostream>

using namespace std;

int data[20],data2[20];
int n;

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
		cout<<"3.Tampil data"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Masukkan Pilihan : ";
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
				tampil();
				break;
		}
	}
	while(pil!=4);
}
