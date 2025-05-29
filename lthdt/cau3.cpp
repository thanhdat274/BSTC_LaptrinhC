#include"iostream"
using namespace std;
class SinhVien{
    string ma, ten;
    float diem;
    int khoa;
	public:
		SinhVien(){
			ma=ten="";
			diem=0;
			khoa=0;
		}
		void nhap()
		{
			cout<<"nhap ma sinh vien ";getline(cin,ma);
			cout<<"nhap ho ten ";getline(cin,ten);
			cout<<" nhap diem ";cin>>diem;
			cout<<"nhap khoa ";cin>>khoa;
		}
		void xuat(){
		       cout << ma << " - " << ten << " - Diem: " << diem << " - Khoa: " << khoa << endl;
		}
		float getDiem() { return diem; }
    	int getKhoa() { return khoa; }
};
class UngDung{
	int n;
	SinhVien*ds;
	public:
		 void nhap();
		 void xuat();
		 void tbKhoa();
};
void UngDung::nhap(){
	cout<<"nhap so sinh vien: ";cin>>n;
	ds=new SinhVien[n];
	for(int i=0;i<n;i++)
	{
		cout<<"nhap sinh vien thu "<<i+1<<"\n";
		ds[i].nhap();
	}
}
void UngDung::xuat(){
	for(int i=0;i<n;i++){
		ds[i].xuat();
	}
}
void UngDung::tbKhoa() {
    cout << "\nDiem trung binh theo khoa:\n";
    for (int i = 0; i < n; ++i) {
        int khoa_i = ds[i].getKhoa();
        bool daTinh = false;
        for (int j = 0; j < i; ++j)
            if (ds[j].getKhoa() == khoa_i) { daTinh = true; break; }

        if (!daTinh) {
            float tong = 0; int dem = 0;
            for (int k = 0; k < n; ++k)
                if (ds[k].getKhoa() == khoa_i) {
                    tong += ds[k].getDiem();
                    dem++;
                }
            cout << "Khoa " << khoa_i << ": " << tong/dem << endl;
        }
    }
}

int main()
{
	UngDung x;
	x.nhap();
	x.xuat();
	x.tbKhoa();
}
