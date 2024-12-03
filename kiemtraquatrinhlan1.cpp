/*  
   MSSV: 110124139
   Ho ten: Huynh Ngoc Nhu
   Lop: DA24TTA
*/
void Nhap(float a[]);
void Xuat(float a[]);
float TongSoGio(float a[]);

#include"stdio.h"
int main()
{
	 float a[50];
	 
	 // nhap
	 Nhap(a);
	 
	 // xuat
	 Xuat(a);
	 
	// tinh tong
	TongSoGio(a);
	printf("\nTong so gio hoc tap trong tuan la: %.2f",TongSoGio(a));
	return 0;
	
}
void Nhap(float a[])
{
	int j=2;
	printf("Nhap thoi gian hoc(theo gio) cho cac ngay trong tuan: \n");
	for(int i=0;i<6;i++)
	{
		do
		{
		  printf("Ngay thu %d: ",i+2);
		  scanf("%f",&a[i]);
		  if(a[i]<0||a[i]>15)
		  {
		  	
			printf("Thoi gian Khong hop le! ");
		
		  }
		}while(a[i]<0||a[i]>15);
		
	}
}
void Xuat(float a[])
{
	printf("Thoi gian hoc tap cho tung ngay: \n");
	for(int i=0;i<6;i++)
	{
		printf("\nNgay thu %d: %.2f gio ",i+2,a[i]);
	}
	
}
float TongSoGio(float a[])
{
	int tong;
	for(int i=0;i<6;i++)
	{
		tong=tong+i;
	}
    return tong;
}
