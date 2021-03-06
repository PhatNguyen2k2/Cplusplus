//Nguyen Hoang Phat - 6151071082
#include<iostream>
#include<string>
using namespace std;

class Student 
{
    private:
        string hoten;
        float dk1, dk2;
    public:
        Student();
        void nhap();
        void xuat();
        float DiemTrungBinh();
        bool operator >=(Student sv);

};

Student::Student()
{
    hoten = "";
    dk1 = 10;
    dk2 = 10;
}
void Student::nhap()
{
    fflush(stdin);
    cout<<"\nNhap Ho Ten Student: ";
    getline(cin, hoten);
    cout<<"\nNhap Diem Ki 1: ";
    cin>>dk1;
    cout<<"\nNhap Diem Ki 2: ";
    cin>>dk2;
}
float Student::DiemTrungBinh()
{
    float dtb;
    dtb = (dk1 + 2*dk2)/3;
    return dtb;
}

bool Student:: operator >=(Student sv)
{
    if(this->DiemTrungBinh() >= sv.DiemTrungBinh())
        return true;
    return false;
}
void Student::xuat()
{
    cout<<"Ho Ten: "<<hoten<<endl;
    cout<<"Diem Ki 1: "<<dk1<<endl;
    cout<<"Diem Ki 2: "<<dk2<<endl;
    cout<<"Diem Trung Binh: "<<DiemTrungBinh();
}

int main()
{
    Student sv[5];

      for(int i = 0; i < 5; i++)
    {
        cout<<"Nhap Student thu "<<i + 1<<": "<<endl;
        sv[i].nhap();
    }

    for(int i = 0; i < 5; i++)
    {  
        cout<<"Student "<<i + 1<<": "; sv[i].xuat(); 
        cout<<"\n____________________________"<<endl;
    }

    cout<<"Mang Student co DTB ca nam >= 5: ";
    for(int i = 0; i < 5; i++)
    {   
        if(sv[i].DiemTrungBinh() >= 5)
        {
            cout<<"Student "<<i + 1<<": "; sv[i].xuat(); 
        }
    }

    return 0;
}