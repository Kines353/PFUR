#include <iostream>
#include <cstdlib>
#include <string.h>
#include <sstream>
#define LENROW 100
#define LENCOL 11

using namespace std;

class Q//Объявление класса Q
{
int n,m;//текущий размер массива слов
int mas[100][100];//массив слов
int B[100][100];
int A[100][100];
int X[100];
public://Объявление член-функций (методов)
void Enter();//Объявление член-функции ввода данных
void Output();//Объявление член-функции вывода данных
int Funk();/*объявление член-функции нахождения слова максимальной длины и длины этого слова*/
int Print();
};//конец объявления класс Q

int main(int argc, char *argv[])
{	
	setlocale(LC_ALL, "Russian");
	int n = (argc-2)/4 ; //ðàçìåðíîñòü
	int A[100];
	int k = 2;
	int B[100];
	for (int i = 0;i<n*n;i++)
			{
				A[i] = atoi(argv[k]);
				k++;
			}
	for (int i = 0;i<n*n;i++)
			{
				B[i] = atoi(argv[k]);
				k++;
			}			
	Q obj(A,B,n);							
	obj.output();
	obj.funk();
	//cout<<endl<<"Ìàññèâ X: "<<endl;
	{
		for(int i = 0;i<n;i++)
				cout<<X[i]<<" ";
	}
	return 0;
}
void Q::Enter()//отложенное опр-ние функции ввода данных
{
	for (int i = 0; i<n; i++)
		   {
		           for (int j = 0; j<m; j++)
		           {
		        	   B[i][j]=i+j;
		           }
		   }

}
void Q::Output()	/* отложенное определение член-функиия вывода данных */
{
cout<<"\n\n Vivod massiva slov:";
for(int i=0; i<n; i++){
	cout<<endl;
	for(int j=0;j<m;j++){
		cout<<A[i][j]<<" ";
		}
	}
for(int i=0; i<n; i++){
	cout<<endl;
	for(int j=0;j<m;j++){
		cout<<B[i][j]<<" ";
		}
	}
}
int Q::Funk(){
	cout<<endl<<"Формирует массив Х из нулей и единиц, в котором i-ый элемент равен единице, если все элементы i-ой строки матрицы А больше соответствующих элементов  i-ой строки матрицы В. "<<endl;
	for(int i=0;i<n;i++){
		bool boolean=true;
		for(int j=0;j<n;j++){
			if(A[i][j]<=B[i][j])boolean=false;
		}
		if(boolean==true)X[i]=1;
		else X[i]=0;
	}
}
int Q::Print(){
	cout<<"Massiv X"<<endl;
	for(int i=0;i<n;i++)cout<<X[i]<<" ";
}
