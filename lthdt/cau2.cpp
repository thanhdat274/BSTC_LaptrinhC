#include"iostream"
#include"math.h"
using namespace std;
class KG2C{
protected:	
float x,y;
	public:
		void nhap()
		{ cout<<"nhap hoanh do ";
			cin>>x;
		cout<<"nhap tung do ";cin>>y;
		}
		void xuat(){
			cout<<" ("<<x<<","<<y<<endl;
		}
		float getX(){
			return x;
		}
		float getY(){
			return y;
		}		
};
class KG3C: public KG2C{
	float z;
	public:
		void nhap(){
			KG2C::nhap();
			cout<<"nhap cao do ";cin>>z;
		}
		void xuat(){
			cout<<" ("<<x<<","<<y<<","<<z<<")"<<endl;
		}
		float kc(){
			return sqrt(x*x+y*y+z*z);
		}
		float kc2d(KG3C d2)
		{
			return sqrt(pow(x-d2.x,2)+pow(y-d2.y,2)+pow(z-d2.z,2));
		}
};
class UngDung{
	int n;
	KG3C *ds;
	public:
		 void nhap();
		 void gan0();
		 void tbdd();
};
void UngDung::nhap(){
	cout<<"nhap so diem: ";cin>>n;
	ds=new KG3C[n];
	for(int i=0;i<n;i++)
	{
		cout<<"nhap diem thu "<<i+1<<"\n";
		ds[i].nhap();
	}
}
void UngDung::gan0(){
	float min=ds[0].kc();
	for(int i=1;i<n;i++)
	if(ds[i].kc()<min)
	min=ds[i].kc();
	cout<<"\nKc min "<<min;
}
void UngDung::tbdd(){
	int dem=0;
	float s=0;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n;j++)
		{
			dem++;
			s+=ds[i].kc2d(ds[j]);
		}
		cout<<"\nTBC doan "<<s/dem;
}
int main()
{
	UngDung x;
	x.nhap();
	x.gan0();
	x.tbdd();
}
