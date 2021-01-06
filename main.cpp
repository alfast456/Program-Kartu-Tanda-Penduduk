#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>//sebagai library membuat tabel

using namespace std;

void loading()//sebagai prosedur menampilkan loading
{
    system("color f9");
    for(int load=0; load<100; load++)
    {
        cout << "\nLOADING . . . " << load << "%" << endl;
        cout << "\nSilahkan Tunggu . . . ";
        system("cls");
    }
}

void program()//merupakan prosedur menampilkan program
{
    cout << "\t\t  **********************************************\n";
    cout << "\t\t ***********************************************\n";
    cout << "\t\t****************    **    **********************\n";
    cout << "\t\t*             **          **                 ***\n";
    cout << "\t\t*       **       PROGRAM       **            ***\n";
    cout << "\t\t*  **      KARTU TANDA PENDUDUK       **     ***\n";
    cout << "\t\t**    CREATED BY:                           ****\n";
    cout << "\t\t*  **      ALFA H     (19102195)      **     ***\n";
    cout << "\t\t*       ** NAUFAL F Z (19102074)  **         ***\n";
    cout << "\t\t*             **          **                 **\n";
    cout << "\t\t****************    **    ********************\n";
    cout << "\n================================ PILIHAN MENU ==================================\n\n\n";
    cout << "1. Sensus Penduduk\n";
    cout << "2. Cari Data Penduduk\n";
    cout << "3. Menampilkan Identitas\n";
    cout << "4. Keluar\n\n\n";
}

struct data//mirip kayak prosedur, tetapi sebagai penyimpanan variabel array
{
    long int nomor;
    string nama;
    string agama;
    string status;
    string pekerjaan;
    string tempat;
    string tanggal;
    string almt;
    string kel;
    string kec;
    string kota;
};

int main()
{
    int pilih,cari,nik=-1,i;
    data ktp[20];

    loading();
    menuutama:
    program();
    do
    {
        cout << "\n> Pilih Menu = "; cin >> pilih;
        if (pilih==1)//INPUT DATA
        {
            system("cls");
            cout << "\n\t\t  ccccccccccccccccccccccccccccccccc";
            cout << "\n\t\t cccccccccccccccccccccccccccccccccc";
            cout << "\n\t\tccccccccccccccccccccccccccccccccccc";
            cout << "\n\t\tc                               ccc";
            cout << "\n\t\tc      KARTU TANDA PENDUDUK     ccc";
            cout << "\n\t\tc       REPUBLIK INDONESIA      ccc";
            cout << "\n\t\tc                               cc";
            cout << "\n\t\tccccccccccccccccccccccccccccccccc";

            nik++;

            cout << "\n\n";
            cout << "NIK                        : ";
			cin >> ktp[nik].nomor; cin.ignore();
            cout << endl;
            cout << "Nama Lengkap               : ";
			getline(cin,ktp[nik].nama);
            cout << endl;
            cout << "Agama                      : ";
			getline(cin,ktp[nik].agama);
            cout << endl;
            cout << "Status Perkawinan          : ";
			getline(cin,ktp[nik].status);
            cout << endl;
            cout << "Pekerjaan                  : ";
			getline(cin,ktp[nik].pekerjaan);
            cout << endl;
            cout << "Tempat Lahir               : ";
			getline(cin,ktp[nik].tempat);
            cout << endl;
            cout << "Tanggal Lahir (DD MM YYYY) : ";
			getline(cin,ktp[nik].tanggal);
            cout << endl;
            cout << "Alamat                     : ";
			getline(cin,ktp[nik].almt);
            cout << endl;
            cout << "Kelurahan                  : ";
			getline(cin,ktp[nik].kel);
            cout << endl;
            cout << "Kecamatan                  : ";
			getline(cin,ktp[nik].kec);
            cout << endl;
            cout << "Kota                       : ";
			getline(cin,ktp[nik].kota);
            cout << "\n\n";
            cout << " _____________________________\n";
            cout << " 1.Kembali ke Menu Utama\n\n";
            cout << " 2.Keluar dari program\n";
            cout << " _____________________________\n\n";
            cout << " Masukan Pilihan Anda : ";
			cin>>pilih;
            cout << endl;

            if (pilih==1)
            {
                goto menuutama;
            }
            else if(pilih==2)
            {
                goto keluar;
            }
            system("cls");
        }

        else if (pilih==2)//CARI DATA
        {
            system("cls");
            cout << "\n\t\t_____________________________\n";
            cout << "\t\tMasukkan NIK : ";
            cin >> cari;
            cout << "\t\t______________________________\n\n";
            cout << endl;

            for (i=0; i<=nik; i++)
            {
                if(namedit==ktp[i].nomor)
                {
                    cout << "Data ditemukan Pada Registrasi KTP Ke-"<< i << endl << endl;
                    cout << " Nama Lengkap      : "<<ktp[i].nama << endl;
                    cout << endl;
                    cout << " Agama             : "<<ktp[i].agama << endl;
                    cout << endl;
                    cout << " Status perkawinan : "<<ktp[i].status << endl;
                    cout << endl;
                    cout << " Pekerjaan         : "<<ktp[i].pekerjaan << endl;
                    cout << endl;
                    cout << " Tempat Lahir      : "<<ktp[i].tempat << endl;
                    cout << endl;
                    cout << " Tanggal Lahir     : "<<ktp[i].tanggal << endl;
                    cout << endl;
                    cout << " Alamat            : "<<ktp[i].almt << endl;
                    cout << endl;
                    cout << " Kelurahan         : "<<ktp[i].kel << endl;
                    cout << endl;
                    cout << " Kecamatan         : "<<ktp[i].kec << endl;
                    cout << endl;
                    cout << " Kota              : "<<ktp[i].kota << endl << endl;
                    cout << " _____________________________________________________\n\n";

                    goto menu0;
                }
            }

            cout << "DATA YANG ANDA CARI TIDAK DI TEMUKAN !!!\n\n";
            cout << " ________________________________________\n\n";
            menu0:
                cout << "1.Kembali ke Menu Utama\n\n";
                cout << "2.Keluar dari Program\n";
                cout << " _____________________________\n\n";
                cout << " Masukan Pilihan Anda : ";
				cin >> pilih;

            if (pilih==1)
            { //untuk ke menu uatama
                goto menuutama;
            }
            else if (pilih==2)
            {
                goto keluar;
            }
        }

        else if (pilih==3)//OUTPUT
        {
            system ("cls");
            cout << "\t__________________________________________________\n";
            cout << "\t|              Kartu Tanda Penduduk               |\n";
            cout << "\t|               REPUBLIK INDONESIA                |\n";
            cout << "\t|_________________________________________________|\n\n";

            for(i=0; i<=nik; i++)
            {
                cout << "\tDatabase Data KTP ke-" << i << endl << endl;
                cout << "\tNIK : " << ktp[i].nomor << endl << endl;
                cout << "\tNama : " << ktp[i].nama << endl << endl;
                cout << "\tAgama : " << ktp[i].agama << endl << endl;
                cout << "\tStatus perkawinan : " << ktp[i].status << endl << endl;
                cout << "\tPekerjaan : " << ktp[i].pekerjaan << endl << endl;
                cout << "\tTempat Lahir : " << ktp[i].tempat << endl << endl;
                cout << "\tTanggal Lahir : " << ktp[i].tanggal << endl << endl;
                cout << "\tAlamat : " << ktp[i].almt << endl << endl;
                cout << "\tKelurahan : " << ktp[i].kel << endl << endl;
                cout << "\tKecamatan : " << ktp[i].kec << endl << endl;
                cout << "\tKota : " << ktp[i].kota << endl <<  endl;
            }

            cout << " _____________________________________________\n\n";
            cout << " 1.Kembali ke menu awal\n\n";
            cout << " 2.keluar dari program\n";
            cout << " _____________________________\n\n";
            cout << " Masukan Pilihan Anda : ";
			cin >> pilih;

            if (pilih==1)
            {
                goto menuutama;
            }
            else if (pilih==2)
            {
                goto keluar;
            }
        }

        else//KELUAR
        {
            keluar:
                system("cls");
                cout << "\n\t\tTerimakasih Telah Menggunakan Program Ini...\n\n\n";
        }
    }

    while ((pilih<1) || (pilih<2));

}
