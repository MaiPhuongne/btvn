#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
#include<fstream>
#include<cstring>
using namespace std;
struct quanlys
{
	char MaS[30];
	char tenS[30];
	char tacgia[30] ;
	int namxb;
	long thanhtien;
	long thue;
	long thucthu;	
};
void menu(){
	cout<<"\n\t\t**************************************MENU******************************************";
	cout<<"\n\t\t** 1 .Nhap danh sach CUON SACH					                  **";
	cout<<"\n\t\t** 2 .Tinh :                        					          **"
			"\n\t\t**\tTinh thue = thanh tien + 10%	                			  **"
			"\n\t\t**\tThuc thu = thanh tien - thue                 			          **";
	cout<<"\n\t\t** 3 .In danh sach thong tin cac cuon sach.		                          **";	
	cout<<"\n\t\t** 4 .Sap xep cac cuon sach theo thu tu giam dan cua nam xb			  **";	
	cout<<"\n\t\t** 5 .In thong tin cac cuon sach co nam xb = nam nhap tu ban phim.	          **"; 
	cout<<"\n\t\t** 6 .Nhap them mot cuon sach vao danh sach.  	                                  **";
	cout<<"\n\t\t** 7 .Xoa khoi danh sach cuon sach co ma la ms, voi ms nhap vao tu ban phim.      **"; 	                                         
	cout<<"\n\t\t** 8 .Luu danh sach cuon sach ra tep books.dat. 	                          **";
	cout<<"\n\t\t** 9 .Doc danh sach cac cuon sach tu tep books.dat va in ra man hinh .  	  **";
	cout<<"\n\t\t** 0 .Thoat Chuong Trinh!!!!!				       	      	  	  **";
	cout<<"\n\t\t************************************************************************************";
}
void nhap(quanlys ql[], int &n){
	cout<<"\nNhap so luong sach :";
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
	cout<<"\nNhap thong tin cho quyen sach :"<<i+1;
	cout<<endl;
 	cin.ignore();          
	cout<<"\n\t\t +>Ma sach : ";   
	cin.getline(ql[i].MaS, 31);	      
	cout<<"\n\t\t +>Ten sach : ";   
 	cin.getline(ql[i].tenS, 31); 
	cout<<"\n\t\t +>Ten Tac gia : ";   
	cin.getline(ql[i].tacgia, 31);
 	cout<<"\n\t\t +>Nam xuat ban : ";   
	cin>>ql[i].namxb;
	cout<<"\n\t\t +>Thanh tien : ";      
	cin>>ql[i].thanhtien;	
	}
}
void tieude(){
		cout<<setw(20)<<left<<"Ma SACH ";
		cout<<setw(15)<<left<<"TEN SACH ";
		cout<<setw(15)<<left<<"TEN TAC GIA ";
		cout<<setw(15)<<left<<"NAM XUAT BAN";
		cout<<setw(15)<<left<<"THANH TIEN ";
		cout<<setw(15)<<left<<"THUE";
		cout<<setw(15)<<left<<"THUC THU";
		cout<<endl;
}
void xuat(quanlys ql[], int &n){
	tieude();
	for (int i = 0 ; i < n ; i++)
	{
		cout<< setw(20) << left << ql[i].MaS;
		cout<< setw(15) << left << ql[i].tenS;
		cout<< setw(15) << left << ql[i].tacgia;
		cout<< setw(15) << left << ql[i].namxb;
		cout<< setw(15) << left << ql[i].thanhtien;
		cout<< setw(15) << left << ql[i].thue;
		cout<< setw(15) << left << ql[i].thucthu;
		cout<<" "<<endl;
	}
}

void tinh(quanlys ql[], int &n){

for(int i=0;i<n;i++){
		ql[i].thue = ql[i].thanhtien * 0.1;
		
		ql[i].thucthu = ql[i].thanhtien - ql[i].thue;
		
     }
}
//xuat tinh thue
void xuattinhthue( quanlys ql[], int &n){
	tinh(ql,n);
	for(int i=0;i<n;i++){
		cout<<" Thue cuon sach thu "<<i+1<<" la "<<ql[i].thue<<endl<<endl;
		cout<<" Thuc thu cuon sach thu "<<i+1<<" la "<<ql[i].thucthu<<endl<<endl;
	}
}
//sap xep giam dan
void giamdan( quanlys ql[], int &n){
	for (int i = 0 ; i < n-1 ; i++)
	{ 
		for (int j = i+1 ; j < n ; j++)
		{
			if(ql[i].namxb < ql[j].namxb)
				{
					swap(ql[i],ql[j]);
				}
		}
	}
	xuat(ql,n);
}


void tims(quanlys ql[], int &n){
	int k;
	cout<<"nhap nam xuat ban muon tim ";
	cin>>k;
	for(int i=0;i<n;i++){
		if (ql[i].namxb == k)
	cout<<"\n\t\t\t-----------NAM XUAT BAN CAN TIM---------"<<endl;
		tieude();
		break;
	}
	for(int i=0; i<n; i++){
		if (ql[i].namxb == k){
		cout<< setw(20) << left << ql[i].MaS;
		cout<< setw(15) << left << ql[i].tenS;
		cout<< setw(15) << left << ql[i].tacgia;
		cout<< setw(15) << left << ql[i].namxb;
		cout<< setw(15) << left << ql[i].thanhtien;
		cout<< setw(15) << left << ql[i].thue;
		cout<< setw(15) << left << ql[i].thucthu;
		cout<<" "<<endl;
	
		}
	}
}
 void Them(quanlys ql[], int &n){
	quanlys hs1;
	cout<<"\nNhap thong tin cho hoc sinh moi : ";
	cin.ignore();
	bool kiemtra; 
			do
			{
				kiemtra  = true ;
				cout<<"\n---Nhap ma sach: ";
				cin.getline(hs1.MaS,30);
				for ( int i = 0 ; i< n ; i++ )
				{
					if (strcmpi(hs1.MaS,ql[i].MaS)==0)
					{
						cout << "Ma da ton tai, moi ban nhap lai!\n " ;
						kiemtra = false ; 
					}
				}
			}while(kiemtra==false);
		cout <<"---Nhap ten sach :";
		cin.getline(hs1.tenS,30);
		cout<<"---Nhap tac gia :";
		cin.getline(hs1.tacgia,30);
		cout<<"---Nhap nam xuat ban :";
		cin>>hs1.namxb;
		cout<<"---Nhap thanh tien :";
		cin>>hs1.thanhtien;
		n++;
	      ql[n-1]=hs1;
}

void XoaMa(quanlys ql[], int n, char k[]){
 	for(int i = 0; i < n; i++)
		{	
			if(strcmp(ql[i].MaS,k)==0)
			{
				for (int j = i ; j < n ; j++)
				{
					ql[j] = ql[j + 1];
				}
				cout << "\n Da xoa thanh cong sach co ma :" << k << endl;
				break;
			}
      }
}

void luutep(quanlys ql[],int &n)
{
	cout<<" "<<endl;
	fstream f;
	f.open("C:\\books.dat",ios::out);
	f<< "\n\n"<<setw(20) << left << " MA SACH ";
	f<< setw(15)<< left << " TEN SACH ";
	f<< setw(15)<< left << " TEN TAC GIA ";
	f<< setw(15)<< left << " NAM XUAT BAN ";
	f<< setw(20)<< left << " THANH TIEN ";
	f<< setw(15)<< left << " THUE ";
	f<< setw(15)<< left << " THUC THU "<<endl;
	for (int i=0 ; i<n ; i++)
    {
        f<< setw(25) << left << ql[i].MaS;
		f<< setw(15) << left << ql[i].tenS;
		f<< setw(15) << left << ql[i].tacgia;
		f<< setw(15) << left << ql[i].namxb;
		f<< setw(15) << left << ql[i].thanhtien;
		f<< setw(20) << left << ql[i].thue;
		f<< setw(15) << left << ql[i].thucthu<<endl;
    }	
	f.close();
	cout<<" "<<endl;
	cout<<"------LUU THANH CONG------\n"<<endl;
	cout<<" "<<endl;
}
void doctep(quanlys ql[],int n,string x[])
{
cout<<" "<<endl;	
	fstream f;
	f.open("C:\\books.dat",ios::in);
	for(int i = 0; i < n; i++)
	{
   	    while(!f.eof())
		{
			getline(f,x[i]);
			cout<<x[i]<<endl;		
		}	
	}
	f.close();
cout<<" "<<endl;
}
int main()
{
	quanlys ql[100];
	int luachon;
	int n;
	char k[10];
	string x[100];
menu();
	buoc:	
        cout<<"\n\n-----------Nhap lua chon cua ban (0-9): ";
        cin>>luachon;
        cout<<endl<<endl;
    	switch(luachon)
		{
   			case 1:nhap(ql,n);break;
    		case 2:
			cout<<"\n\t\t\t-----------TINH THUE VA THUC THU---------"<<endl;
			xuattinhthue(ql,n);break;
    		case 3:
    		cout<<"\n\t\t\t-----------DANH SACH DAY DU CUA CUON SACH---------"<<endl;
			xuat(ql,n);break;
    		case 4:
			cout<<"\n\t\t\t-----------GIAM DAN CUA NAM XB------------"<<endl;
			giamdan(ql,n);break;
    		case 5:
			tims(ql,n);break;
    		case 6:{
				   Them(ql,n);
      			   tinh(ql,n);
      			   giamdan(ql,n);
      			   cout<<"\t\t\t\n\n--------------------BANG THONG TIN DAY DU SAU KHI THEM---------------------"<<endl;
			       xuat(ql,n);
      		break;
			       }
      		case 7:	{
			cout<<"Nhap ma Sach can xoa :";
			cin.ignore();
            cin.getline(k,10);
			XoaMa(ql,n,k);
			n--;
			xuat(ql,n);
			break;
			}
			case 8:luutep(ql,n);break;
			case 9:doctep(ql,n,x);
            break;
			case 0:cout<<"\n\n\n\t\t\t\t\t\t   ------------------BYE BRO-------------------"<<endl;exit(1);break;
    		default:cout<<"Khong hop le ";
    	}
    goto buoc;
	 return 0;
    }

