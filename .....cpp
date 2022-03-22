#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
#include<fstream>
#include<cstring>
using namespace std;
struct Cauthu
{
	char Ma[20];
	char Ten[20];
	int tuoi;
	char Vitri[30];
	int huychuong;
	long thuong;
};

void menu(){
	cout<<"\n\t\t**************************************MENU******************************************";
	cout<<"\n\t\t** 1 .Nhap danh sach Cau Thu					                  **";
	cout<<"\n\t\t** 2 .Tinh so thuong cua cau thu					          **"
			"\n\t\t**\tNeu so huy chuong >= 10: thuong=huychuong*500000			  **"
			"\n\t\t**\tNeu so huy chuong >= 5 : thuong=huychuong*300000			  **";
	cout<<"\n\t\t**\tNeu so huy chuong >= 1 : thuong=huychuong*200000			  **";
	cout<<"\n\t\t** 3 .In danh sach thong tin cac cau thu.		                          **";	
	cout<<"\n\t\t** 4 .Sap xep cac cau thu theo thu tu giam dan cua tuoi			          **";	
	cout<<"\n\t\t** 5 .In thong tin cau thu co thuong nho nhat.		                          **";
	cout<<"\n\t\t** 6 .Nhap them cau thu vao danh sach.  	                                  **";
	cout<<"\n\t\t** 7 .Xoa cau thu co ma la MACT.  	                                          **";
	cout<<"\n\t\t** 8 .Luu danh sach cac cau thu ra tep player.dat.  	                          **";
	cout<<"\n\t\t** 9 .Doc danh sach cau thu tu tep player.dat va thong tin ra man hinh .  	  **";
	cout<<"\n\t\t** 0 .Thoat Chuong Trinh!!!!!				       	      	  	  **";
	cout<<"\n\t\t************************************************************************************";
}
	
void nhap(Cauthu so[],int &n){
	cout<<"\nNhap so luong cau thu :";
	cin>>n;
	for(int i=0 ; i<n ; i++){
	cout<<"\nNhap thong tin cho cau thu :"<<i+1;
	cout<<endl;
	cin.ignore();
	cout<<"---Nhap ma cau thu :";
	cin.getline(so[i].Ma,20);
	cout<<"---Nhap ten cau thu :";
	cin.getline(so[i].Ten,20);
	cout<<"---Nhap tuoi :";
	cin>>so[i].tuoi;
	cin.ignore();
	cout<<"---Nhap vi tri cua cau thu :";
	cin.getline(so[i].Vitri,30);
	cout<<"---Nhap huy chuong cho cau thu :";
	cin>>so[i].huychuong;
	}
}

void tieude(Cauthu so[],int &n){
	   cout<<setw(23)<<left<<"Ma CT ";
		cout<<setw(22)<<left<<"TEN ";
		cout<<setw(40)<<left<<"TUOI ";
		cout<<setw(31)<<left<<"VI TRI";
		cout<<setw(20)<<left<<"HUY CHUONG ";
		cout<<setw(20)<<left<<"THUONG ";
		cout<<endl;
}

void thongtin(Cauthu so[],int&n){
	cout<<".------------------------------------------------------------------------------------------------."<<"\n";
	cout<<"|                               DANH SACH THONG TIN CAC CAU THU                                  |"<<"\n";
	cout<<"|------------------------------------------------------------------------------------------------|"<<"\n";
    cout<<"|"<<setw(1)<<"STT|"<<setw(6)<<"Ma CT"<<setw(5)<<"|";
    cout<<setw(9)<<"Ten CT"<<setw(5)<<"|";
    cout<<setw(10)<<"Tuoi CT"<<setw(5)<<"|";
    cout<<setw(11)<<"Vi tri"<<setw(5)<<"|";
    cout<<setw(12)<<"Huy Chuong"<<setw(5)<<"|";
    cout<<setw(15)<<"Thuong"<<setw(5)<<"|";
cout<<"\n|------------------------------------------------------------------------------------------------|"<<"\n";
    for (int i=0;i<n;i++)
    {
        cout<<setw(1)<<"|"<<setw(2)<<i+1<<" |";
        cout<<setw(5)<<so[i].Ma<<setw(6)<<"|";
        cout<<setw(7)<<so[i].Ten<<setw(7)<<"|";
        cout<<setw(8)<<so[i].tuoi<<setw(7)<<"|";
        cout<<setw(8)<<so[i].Vitri<<setw(8)<<"|";
        cout<<setw(7)<<so[i].huychuong<<setw(10)<<"|";
        cout<<setw(17)<<so[i].thuong<<setw(3)<<"|";
        cout<<"\n.------------------------------------------------------------------------------------------------."<<"\n";
    }
    cout<<" "<<endl;
}

void cotthuong(Cauthu so[], int &n){
	for(int i = 0 ; i < n ; i++){
		if(so[i].huychuong >= 10){
			so[i].thuong = so[i].huychuong * 500000;
			}
		else if(so[i].huychuong >= 5)
			{
		 so[i].thuong = so[i].huychuong * 300000;
			}
			else if(so[i].huychuong >= 1)
			{
		 so[i].thuong = so[i].huychuong * 200000;
			}
			cout<<so[i].thuong;
			cout<<endl;
			
		}
		cout<<".---------------------------------------------------------------------------------------------------."<<"\n";
	cout<<"|                                  DANH SACH THUONG CUA CAU THU                                     |"<<endl;
	cout<<"|---------------------------------------------------------------------------------------------------|"<<"\n";
    cout<<"|"<<"STT|"<<setw(15)<<"Ma CT|";
    cout<<setw(20)<<"TeN CT"<<setw(9)<<"|";
     cout<<setw(20)<<"Tuoi"<<setw(9)<<"|";
    cout<<setw(23)<<" THUONG|"<<endl;
    cout<<"|---------------------------------------------------------------------------------------------------|"<<"\n";
	for (int i=0 ; i<n ; i++)
    {
        cout<<"| "<<setw(2)<<i+1<<"|";
		cout<<setw(14)<<so[i].Ma<<"|";
        cout<<setw(17)<<so[i].Ten<<setw(12)<<"|";
        cout<<setw(19)<<so[i].tuoi<<setw(10)<<"|";
        cout<<setw(22)<<so[i].thuong<<"|"<<endl;
		cout<<".---------------------------------------------------------------------------------------------------."<<"\n";
	        
    }
}

void sapxeptuoi(Cauthu so[],int &n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(so[i].tuoi,so[j].tuoi)
		    	swap(so[i].tuoi,so[j].tuoi);
		  	}    
	
	}
	cout<<".---------------------------------------------------------------------------------------------------."<<"\n";
	cout<<"|                                       SAP XEP TUOI GIAM DAN                                       |"<<endl;
	cout<<"|---------------------------------------------------------------------------------------------------|"<<"\n";
    cout<<"|"<<"STT|"<<setw(15)<<"Ma CT|";
    cout<<setw(20)<<"TEN CT"<<setw(9)<<"|";
    cout<<setw(20)<<"TUOI"<<setw(32)<<"|";
    cout<<"\n|---------------------------------------------------------------------------------------------------|"<<"\n";
	for (int i=0 ; i<n ; i++)
    {
        cout<<"| "<<setw(2)<<i+1<<"|";
		cout<<setw(14)<<so[i].Ma<<"|";
        cout<<setw(17)<<so[i].Ten<<setw(12)<<"|";
cout<<setw(19)<<so[i].tuoi<<setw(33)<<"|";   
		cout<<"\n.---------------------------------------------------------------------------------------------------."<<"\n";
	}
}

void thuongitnhat(Cauthu so[],int &n)
{
	
	int k=0;
	for(int i = 0;i < n;i++)
	{
        for(int j = 1; j < n;j++)
		{
            if(so[i].thuong > so[j].thuong)
			{                               
               k=j;
            }
        }
    }
    cout<<".--------------------------------------------------------------."<<"\n";
	cout<<"|               CAU THU CO THUONG THAP NHAT                    |"<<endl;
    cout<<"|--------------------------------------------------------------|"<<"\n";
	cout<<"|"<<setw(12)<<"MA CAU THU |"<<setw(20)<<"TEN CAU THU"<<setw(8)<<"|";
    cout<<setw(23)<<" THUONG CAU THU |"<<endl;
	cout<<"|--------------------------------------------------------------|"<<"\n";
	cout<<"|"<<setw(3)<<so[k].Ma<<setw(9)<<"|";
	cout<<setw(15)<<so[k].Ten<<setw(13)<<"|";
	cout<<setw(16)<<so[k].thuong<<setw(7)<<" |"<<endl;
	cout<<".--------------------------------------------------------------."<<"\n";
}

void Themct(Cauthu so[],int &n){
	Cauthu ct1;
	cout<<"\nNhap thong tin cho cau thu moi : ";
	cin.ignore();
	bool kiemtra; 
			do
			{
				kiemtra  = true ;
				cout<<"\n---Nhap  ma cau thu: ";
				cin.getline(ct1.Ma,20);
				for ( int i = 0 ; i< n ; i++ )
				{
					if (strcmpi(ct1.Ma,so[i].Ma)==0)
					{
						cout << "Ma da ton tai, moi ban nhap lai!\n " ;
						kiemtra = false ; 
					}
				}
			}while(kiemtra==false);
		cout <<"---Nhap ten cau thu :";
		cin.getline(ct1.Ten,30);
		cout<<"---Nhap tuoi cau thu :";
		cin>>ct1.tuoi;
		cin.ignore();
		cout<<"---Nhap vi tri cau thu :";
		cin.getline(ct1.Vitri,20);
		cout<<"---Nhap huy chuong cau thu :";
		cin>>ct1.huychuong;
		n++;
	      so[n-1]=ct1;
}

void XoaMACT(Cauthu so[],int &n, char k[]){
 	for(int i = 0; i < n; i++)
		{	cin.ignore();
			if(strcmp(so[i].Ma,k)==0)
			{
				for (int j = i ; j < n ; j++)
				{
					so[j] = so[j + 1];
				}
				cout << "\n Da xoa thanh cong cau thu co ma :" << k << endl;
				break;
			}
      }
}

void luutep(Cauthu so[],int n)
{
	cout<<" "<<endl;
	fstream f;
	f.open("D:\\player.dat",ios::out);
	f<<".-----------------------------------------------------------------------------------------------------------------------------."<<"\n";
	f<<"|                                               DANH SACH CAU THU                                                             |"<<endl;
	f<<"|-----------------------------------------------------------------------------------------------------------------------------|"<<"\n";
    f<<"|"<<"STT|"<<setw(15)<<"Ma CT|";
    f<<setw(20)<<"TEN"<<setw(12)<<"|";
    f<<setw(15)<<"TUOI"<<setw(12)<<"|";
    f<<setw(15)<<"VITRI"<<"|";
    f<<setw(15)<<"HUY CHUONG"<<"|";
    f<<setw(15)<<"THUONG"<<"|"<<endl;
    f<<"|-----------------------------------------------------------------------------------------------------------------------------|"<<"\n";
for (int i=0 ; i<n ; i++)
    {
        f<<"| "<<setw(2)<<i+1<<"|";
		f<<setw(14)<<so[i].Ma<<"|";
        f<<setw(20)<<so[i].Ten<<setw(12)<<"|";
        f<<setw(15)<<so[i].tuoi<<setw(12)<<"|";
        f<<setw(14)<<so[i].Vitri<<setw(3)<<"|";
        f<<setw(10)<<so[i].huychuong<<setw(5)<<"|";
        f<<setw(12)<<so[i].thuong<<setw(4)<<"|"<<endl;
		f<<".-----------------------------------------------------------------------------------------------------------------------------."<<"\n";        
    }	
	f.close();
	cout<<" "<<endl;
	cout<<"------LUU THANH CONG------\n"<<endl;
	cout<<" "<<endl;
}

void doctep(Cauthu so[],int n,string x[])
{
cout<<" "<<endl;	
	fstream f;
	f.open("D:\\player.dat",ios::in);
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
int main (){
	system("color A");
	Cauthu so[100];
	int luachon;
	int n;
	char k[10];
	string x[100];
	menu();
sang:	
        cout<<"\nNhap lua chon cua ban (0-10): ";
        cin>>luachon;
        
    	switch(luachon)
		{
   			case 1:nhap(so,n);break;
    		case 2:cotthuong(so,n);break;
    		case 3:thongtin(so,n);break;
    		case 4:sapxeptuoi(so,n);break;
    		case 5:thuongitnhat(so,n);break;
    		case 6:{
			       Themct(so,n);
      			   cotthuong(so,n);
      			   cout<<"\t\t\t\n\n--------------------BANG THONG TIN DAY DU SAU KHI TINH THUONG CUA CAU THU MOI---------------------"<<endl;
			       thongtin(so,n);
      		break;
			       }
            case 7:
			{
			cout<<"Nhap ma cau thu can xoa :";cin.ignore();
            cin.getline(k,10);
			XoaMACT(so,n,k);
			thongtin(so,n);
			}
            break;
            case 8:luutep(so,n);break;
            case 9:doctep(so,n,x);break;
			case 0:cout<<"\n\n\n\t\t\t-----------------TAM BIET<3-----------------\n"<<endl;exit(1);break;
    		default:cout<<"Khong hop le ";
    	}
    goto sang;
    return 0;
    }
