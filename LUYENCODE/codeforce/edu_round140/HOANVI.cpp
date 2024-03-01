#include<conio.h>

#include<iostream>

using namespace std;

#define MAX  20

#define TRUE  1

#define FALSE 0

int X[MAX];

int n;//so phan tu cua mang

int countHV;//biến đếm số hoán vị.

int Stop;//biến dừng tìm kiếm hoán vị tiếp theo.

void Init(void){

 countHV = 0;

 cout<<"Nhap n=";

 cin>>n;

 //nhập các phần tử của mảng.

 for (int i = 1; i <= n; i++)

  X[i] = i;

}

void Result(void){

 countHV++;


 for (int i = 1; i <= n; i++)

  cout<<X[i] << " ";

 cout<<endl;

}

void Next_Permutaion(void){

 int j, k, r, s, temp;

 j = n - 1;

 while (j > 0 && X[j] > X[j + 1])//1. tìm từ trái qua phải chỉ số j thỏa mãn aj< aj

  j--;

 if (j == 0)

  Stop = TRUE;

 else {

  k = n;

  while (X[j] > X[k]) k--;//2.Tìm ak là số nhỏ nhất còn lớn hơn aj trong các số ở bên phải aj; 

  //3. Đổi chỗ aj với ak 

  temp = X[j]; 

  X[j] = X[k];

  X[k] = temp;

  r = j + 1; s = n;

  while (r < s){//4. Lật ngược đoạn từ aj+1 đến an. 

   temp = X[r]; 

   X[r] = X[s];

   X[s] = temp;

   r++;

   s--;

  }

 }

}

void Permutation(void){

 Stop = FALSE;

 while (!Stop){

  Result();

  Next_Permutaion();

 }

}

int main(void){

 Init();

 Permutation();

 getch();

}