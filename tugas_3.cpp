// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
    int Makanan,Minuman,TotalMakan=0,TotalMinum=0;
    cout<<"===MENU MAKANAN==="<<endl;
    cout<<"1.Soto - Rp 15.000"<<endl;
    cout<<"2.Rawon - Rp 20.000"<<endl;
    cout<<"3.Pecel - Rp 10.000"<<endl;
    cout<<"Pilih Makanan (1/2/3); ";
    cin>>Makanan;

    if (Makanan==1) TotalMakan=15000;
    else if (Makanan==2) TotalMakan=20000;
    else if (Makanan==3) TotalMakan=10000;
    else {
        cout<<"Pilihan makan salah!"<<endl;  
    }
    cout<<"\n==MENU MINUMAN==="<<endl;
    cout<<"1.Teh - Rp 3.000"<<endl;
    cout<<"2.Kopi - Rp 5.000"<<endl;
    cout<<"Pilih Minuman (1/2): ";
    cin>>Minuman;

    if (Minuman==1) TotalMinum=3000;
    else if (Minuman==2) TotalMinum=5000;
    else {
        cout<<"Pilihan Minuman salah!"<<endl;
    }
    int TotalAkhir=TotalMakan+TotalMinum;
    cout<<"\n___________________"<<endl;
    cout<<"Total Makan : Rp "<<TotalMakan<<endl;
    cout<<"Total Minum : Rp "<<TotalMinum<<endl;
    cout<<"TOTAL BAYAR : Rp "<<TotalAkhir<<endl;
    
    return 0;
}
