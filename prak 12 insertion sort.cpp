#include <iostream>

using namespace std;

int n;
int data[10], data2[10];

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
void insertionSort()
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
		cout<<"2.Insertion sort "<<endl;
		cout<<"3.Tampil data"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Masukkan pilihan : ";
		cin>>pil;
		switch (pil)
		{
			case 1:
				input();
				break;
			case 2:
				insertionSort();
				break;
			case 3:
				tampil();
				break;
		}		
	}	
	while (pil!=4);
}
