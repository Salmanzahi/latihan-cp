#include "stdio.h"
int main ()
{
    //variabel & tipe data
    char jabatan, nama[100];
    float gaji, gaji_bersih, lembur, pajak;
    int gaji_per_jam, gaji_pokok, golongan, lama_kerja;  
 
    printf("XFour PT. Khumalang\n");
    printf("===============================================\n");
    printf("Nama karyawan                     : ");gets(nama);
    printf("Golongan karyawan  (1-4)          : ");scanf("%i",&golongan);
    printf("Masukkan lama kerja (1 bulan/jam) : ");scanf("%i",&lama_kerja);
    printf("\n===============================================\n");
 
    //switch case sesuai golongan
    switch(golongan)
    {
        case 1:gaji_pokok=455000; gaji_per_jam=4000;
                if(lama_kerja<=155)
                {
                    gaji=(gaji_per_jam*lama_kerja)+gaji_pokok;
                }
                else
                {
                    lembur=(float)(lama_kerja-155)*1.5*gaji_per_jam;
                    gaji=(gaji_per_jam*155)+gaji_pokok+lembur;
                }
                break;
        case 2:gaji_pokok=400000; gaji_per_jam=3650;
                if(lama_kerja<=155)
                {
                    gaji=(gaji_per_jam*lama_kerja)+gaji_pokok;
                }
                else
                {
                    lembur=(float)(lama_kerja-155)*1.5*gaji_per_jam;
                    gaji=(gaji_per_jam*155)+gaji_pokok+lembur;
                }
                break;
        case 3:gaji_pokok=365000; gaji_per_jam=3000;
                 if(lama_kerja<=155)
                {
                    gaji=(gaji_per_jam*lama_kerja)+gaji_pokok;
                }
                else
                {
                    lembur=(float)(lama_kerja-155)*1.5*gaji_per_jam;
                    gaji=(gaji_per_jam*155)+gaji_pokok+lembur;
                }
                break;
        case 4:gaji_pokok=300000; gaji_per_jam=2750;
               if(lama_kerja<=155)
                {
                    gaji=(gaji_per_jam*lama_kerja)+gaji_pokok;
                }
                else
                {
                    lembur=(float)(lama_kerja-155)*1.5*gaji_per_jam;
                    gaji=(gaji_per_jam*155)+gaji_pokok+lembur;
                }
                break;
        default:
            printf("Golongan tidak ditemukan \nMohon masukkan golongan yang sesuai\n");
    }
 
    //percabangan perhitungan gaji
    if(gaji>4500000)
    {
        pajak=0.025*gaji;
    }
    else if(gaji>=2500000)
    {
        pajak=0.01*gaji;
    }
    else
    {
        pajak=0;
    }
 
    //percabangan pembagian golongan
    if(golongan == 1)
    {
        printf("Jabatan   = Direktur");
        printf("\n===============================================");
    }else if(golongan == 2)
    {
        printf("Jabatan   = Manager");    
        printf("\n===============================================");
    }else if(golongan == 3)
    {
        printf("Jabatan   = Staff");    
        printf("\n===============================================");
    }else if(golongan == 4)
    {
        printf("Jabatan   = Operator");
        printf("\n===============================================");
    }
   
    printf("\nGaji Pokok  = Rp. %.2f",gaji);
    printf("\nUang Lembur = Rp. %.2f",lembur);
    printf("\nPajak       = Rp. %.2f",pajak);
   
    //rumus gaji bersih
    gaji_bersih=gaji-pajak;
   
    printf("\n===============================================");
    printf("\nGaji Bersih = Rp. %.2f",gaji_bersih);
    printf("\n===============================================\n");
    return 0;
}