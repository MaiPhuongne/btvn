
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

struct laptop{
	char malap[10];
	char tenlap[20];
	float dongia;
	int soluong;
	int chatluong;
	long VAT;
	long tongtien;
};

void nhap(laptop so[],int &n){
	cout<<"\nNhap so luong laptop  :";
	cin>>n;
	for(int i=0 ; i<n ; i++){
	fflush(stdin); 
	cout<<"\nNhap thong tin cho laptop :"<<i+1;
	cout<<endl;
	cout<<"---Nhap ma LAPTOP :";
	cin.getline(so[i].malap,10); 
	cin.ignore();
	cout<<"---Nhap ten ten LAPTOP :";
	cin.getline(so[i].tenlap,20);
	cout<<"---Nhap don gia :";
	cin>>so[i].dongia;
	cout<<"---Nhap chat luong latop :";
	cin>>so[i].chatluong;
	cout<<"---Nhap so luong latop :";
	cin>>so[i].soluong;
	cout<<"\nNhap Chat Luong : ";
	do{	
		cin>>so[i].chatluong;
		if(so[i].chatluong >2 || so[i].chatluong < 1) cout<< "\nNhap lai Chat Luong : ";
			} while (so[i].chatluong >2 || so[i].chatluong < 1);
	}
}

void Xuat(laptop so[],int n){
	for(int i=0; i<n; i++){
		cout<<setw(30)<<left<<so[i].malap
			<<setw(30)<<left<<so[i].tenlap
			<<setw(30)<<left<<so[i].dongia
			<<setw(30)<<left<<so[i].soluong
			<<setw(30)<<left<<so[i].chatluong
			<<setw(30)<<left<<so[i].VAT
			<<setw(30)<<left<<so[i].tongtien<<endl;
			 }
		 }
			 
void TieuDe(){
	cout<<endl;
	cout<<setw(30)<<left<<"MA "
		<<setw(30)<<left<<"TEN "
		<<setw(30)<<left<<"DON GIA"
		<<setw(30)<<left<<"SO LUONG"
		<<setw(30)<<left<<"Chat Luong"
		<<setw(30)<<left<<"Thue VAT"
		<<setw(30)<<left<<"Tong Tien"<<endl;
}

void ThueVAT(laptop so[],int n){
	for(int i=0; i<n; i++){
		if(so[i].chatluong == 1){
			so[i].VAT=1.0*30/100*so[i].dongia*so[i].soluong;
			}
		else if(so[i].chatluong	 ==2){
			so[i].VAT=1.0*10/100*so[i].dongia*so[i].soluong;
			}
		}
}

void Tongtien (laptop so[],int n){
	for(int i=0; i<n; i++){
			so[i].tongtien = so[i].dongia*so[i].soluong + so[i].VAT;
		}
	}
	

void GiamDan(laptop so[],int n){
	cout<<endl;
	for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if (so[i].tongtien	 < so[j].tongtien){
				laptop tg;
                tg=so[i];
				so[i]=so[j];
				so[j]=tg;
				}
			}
		}
		
	}

int TimK(laptop so[],int n, int k){
    int kq=-1;
    for(int i=0; i<n; i++)
    if (so[i].VAT > k)
    {
        kq=i;
        break;
    }
    return kq;
}

void XoaTaiViTriK(laptop so[],int &n, int k)
{
    if ((k<n)&&(k>=0))
    {
    for(int i=k; i<n-1;i++)
        so[i]=so[i+1];
    n=n-1;
    }
}

void XoaTatK(laptop so[],int &n, int k)
{
    int vt = TimK(so, n, k);
    while (vt>=0){
    XoaTaiViTriK(so, n, vt);
    vt = TimK(so, n, k);
    }
}

void themLAP(laptop so[],int &n, laptop	 x){
	cin.ignore();
	cout<<"\nNhap Ma LAPTOP : ";
		cin.getline(x.malap,10);
	cout<<"\nNhap Ten LAPTOP : ";
		cin.getline(x.tenlap,20);
	cout<<"\nNhap Don Gia : ";
		cin>>x.dongia;
	cout<<"\nNhap So Luong : ";
		cin>>x.soluong;
	cout<<"\nNhap Chat Luong : ";
	do{	
		cin>>x.chatluong;
		if(x.chatluong >2 || x.chatluong < 1) cout<< "\nNhap lai Chat Luong : ";
			} while (x.chatluong >2 || x.chatluong < 1);
	
	n++;
	so[n-1] = x;
	
    
   
}
	
void LuuTep(laptop so[],int n){	
	fstream file;
	file.open("D:\\lap.dat",ios::out);
		if (!file)
	{
		cout<<"Khong Tao Duoc Tep Tin. "<<file<<endl;
		exit(1);
	}
		file<<setw(20)<<left<<"MA"
		<<setw(20)<<left<<"TEN"
		<<setw(20)<<left<<"DON GIA"
		<<setw(20)<<left<<"SO LUONG"
		<<setw(20)<<left<<"CHAT LUONG"
		<<setw(20)<<left<<"VAT"
		<<setw(20)<<left<<"TONG TIEN"<<endl;
	
		for(int i=0; i<n; i++){
		file<<setw(20)<<left<<so[i].malap
			<<setw(20)<<left<<so[i].tenlap
			<<setw(20)<<left<<so[i].dongia
			<<setw(20)<<left<<so[i].soluong
			<<setw(20)<<left<<so[i].chatluong
			<<setw(20)<<left<<so[i].VAT
			<<setw(20)<<left<<so[i].tongtien<<endl;
			}
		
		file.close ();
}

void DocTep(laptop so[],int n, string d[]){
		fstream file;
	file.open("D:\\lap.dat",ios::in);
		if (!file)
	{
		cout<<"Khong Tao Duoc Tep Tin. "<<file<<endl;
		exit(1);
	}	
		for(int i=0; i<n+1; i++){
			getline(file,d[i]);
			cout<<d[i]<<endl;
	}
		file.close ();
		}
	




		 		 
void menu(){
	cout<<"\n\t\t\t\t*****************************MENU CAC CHUC NANG*************************************";
	cout<<"\n\t\t\t\t** 0 .Thoat Chuong Trinh!!!!!				       	      	  	  **";
	cout<<"\n\t\t\t\t** 1 .Nhap danh sach thiet bi tu ban phim					  **";
	cout<<"\n\t\t\t\t** 2 .Tinh thue VAT cua cac mat hang, biet:					  **"
			"\n\t\t\t\t**\tNeu chat luong loai 1: VAT=30%* don gia*so luong			  **"
			"\n\t\t\t\t**\tNeu chat luong loai 2: VAT=10%* don gia*so luong			  **";
	cout<<"\n\t\t\t\t** 3 .In danh sach voi day du thong tin dang bang.				  **";	
	cout<<"\n\t\t\t\t** 4 .In thong tin cac thiet bi chat luong loai 2				  **";	
	cout<<"\n\t\t\t\t** 5 .Sap xep danh sach thiet bi theo thu tu giam dan ve thue VAT.		  **";
	cout<<"\n\t\t\t\t** 6 .Them vao danh sách mot thiet bi, sao cho thu tu sap xep khong doi.  	  **";
	cout<<"\n\t\t\t\t** 7 .Xoa khoi danh sach cac thiet bi co thue VAT > vat voi vat la mot so 	  **"
			"\n\t\t\t\t**\tthuc nhap vao tu ban phim.						  **";
	cout<<"\n\t\t\t\t** 8.Luu danh sach nhan vien ra tep mobile.dat 					  **";
	cout<<"\n\t\t\t\t** 9.Doc danh sach nhan vien tu tep mobile.dat ra chuong trinh.			  **";
	cout<<"\n\t\t\t\t************************************************************************************";
	}
						 
			 
			 
int main(){
	system("color B");
	laptop so[1000];
	int n,k;
	string d[1000];
	int chon =0;
	laptop x;
	do
{
	menu();
	cout<<endl;
	cout << "\nMoi nhap chuc nang muon thuc hien :";
	cin>> chon;
	switch (chon)
	{
		case 0:{
		cout <<"\nBan da thoat khoi chuong trinh !"<< endl;
			exit(1);
		}
		case 1:{
			
				nhap(so,n); 
				cout<< "\nDa Nhap Thong Tin Thanh Cong."<<endl;break;
		}
	
		case 2:{
			if(n !=0){
				ThueVAT(so,n);
				Tongtien(so,n);
				cout<<"\nChuc Nang Tinh Thue VAT Da Xong!!!"<<endl; break;
			}
			else{
				cout<<"\nThong Tin Rong !!!";break;
			}
		}
		case 3:{
			if(n !=0){
				cout<<"\n\t\t\t\t\t\t\t\t============Quan Li LAPTOP=============="<<endl;
				ThueVAT(so,n);
				Tongtien(so,n);
				TieuDe();
				Xuat(so,n);break;
			}
			else{
				cout<<"\nThong Tin Rong !!!";break;
				}
		}
	
		case 4:{
			if(n !=0){	
				ThueVAT(so,n);
				Tongtien(so,n);
				GiamDan(so,n);
				cout<<"\n\t\t\t\t\t\t\t\t============Giam Dan Thue VAT=============="<<endl;
				TieuDe();
				Xuat(so,n);break;
				}
			else{
				cout<<"\nThong Tin Rong !!!";break;
			}	
		}
		
		case 6:{
			if(n !=0){	
				themLAP(so,n,x);
				ThueVAT(so,n);
				Tongtien(so,n);
					GiamDan(so,n);
   		cout<<"\n\t\t\t\t\t================DANH SACH SAU KHI THEM==================\n"<<endl;
   				TieuDe();
   				Xuat(so,n);break;
				}
			else{
				cout<<"\nThong Tin Rong !!!";break;
			}	
		}
		
		case 7:{
			if(n !=0){	
			
				cout<<"\nNhap Thue VAT : ";
				cin>>k;
				XoaTatK(so,n,k);
				TieuDe();
				Xuat(so,n);break;
				}
			else{
				cout<<"\nThong Tin Rong !!!";break;
			}	
		}
		case 8:{
			if(n !=0){	
				LuuTep(so,n);
				cout<<"\nTep Da Duoc Luu Thanh Cong!!";
				cout<<"\nVui Long Mo Tep Ra Kiem Tra Thu ^^";break;
				}
			else{
				cout<<"\nThong Tin Rong !!!";break;
			}	
		}
		case 9:{
			if(n !=0){	
				DocTep(so,n,d);break;
				}
			else{
				cout<<"\nThong Tin Rong !!!";break;
			}	
		}
		
			
	} } while (n !=0);
	return 0;
	}


