#include <iostream>

using namespace std;

int data[30],data2[30];
int n;
void tukar (int a, int b)
{
	int t;
	t=data[b];
	data[b]=data[a];
	data[a]=t;
}

void selectionSort()
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
		cout<<"URUT DATA ASCENDING"<<endl;
		cout<<"1.Input data"<<endl;
		cout<<"2.Selection sort"<<endl;
		cout<<"3.Tampil data"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Masukkan Pilihan : ";
		cin>>pil;
		switch(pil)
		{
			case 1:
				input();
				break;
			case 2:
				selectionSort();
				break;
			case 3:
				tampil();
				break;
		}
	}
	while(pil!=4);
}
