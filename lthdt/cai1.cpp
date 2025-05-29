#include"iostream"
using namespace std;
class NhanVien{
	string ma,ten;
	long luong;
	int phong;
	public:
		NhanVien(){
			ma=ten="";
			luong=0;
			phong=1;
		}
		void nhap()
		{ cout<<"nhap ma nhan vien ";
		cin.ignore(1);getline(cin,ma);
		cin.ignore(1);	cout<<"nhap ho ten ";getline(cin,ten);
			cout<<" nhap luong ";cin>>luong;
			cout<<"nhap phong ban ";cin>>phong;
		}
		void xuat(){
			cout<<ma<<" "<<ten<<" luong "<<luong<<" phong "<<phong<<endl;
		}
		long getluong(){
			return luong;
		}
		int getphong(){
			return phong;
		}		
};
class UngDung{
	int n;
	NhanVien*ds;
	public:
		 void nhap();
		 void thongke();
		 void luongmaxphong();
};
void UngDung::nhap(){
	cout<<"nhap so nhan vien: ";cin>>n;
	ds=new NhanVien[n];
	for(int i=0;i<n;i++)
	{
		cout<<"nhap nhan vien thu "<<i+1<<"\n";
		ds[i].nhap();
	}
}
void UngDung::thongke(){
	int dem=0;
	for(int i=0;i<n;i++)
	if(ds[i].getluong()>15 &&ds[i].getluong()<20)
		dem++;
	cout<<"\nCo "<<dem<<" nhan vien luong (15,20)";
}
void UngDung::luongmaxphong(){
	long max[4]={0,0,0,0};
	for(int i=1;i<=3;i++)
	{
		for(int j=0;j<n;j++)
		if(ds[j].getphong()==i && ds[j].getluong()>max[i])
			max[i]=ds[j].getluong();
		cout<<"\nPhong "<<i<<" luong cao nhat la "<<max[i];
	}
}
int main()
{
	UngDung x;
	x.nhap();
	x.thongke();
	x.luongmaxphong();
}
