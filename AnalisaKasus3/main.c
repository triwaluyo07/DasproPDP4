#include <stdio.h>
#include <stdlib.h>
///Nama : Tri Waluyo
///NIM  : A11.2017.10097

int main()
{
    ///membuat data konsumen
    char Nama[32];
    char tanggal[15];
    int jumlah_beli;
    int menu;
    int harga_total;

    printf("Nama Pelanggan\t\t: ");
    gets(Nama);

    printf("\nTanggal Pembelian\t: ");
    gets(tanggal);

    printf("\n==========[MENU]==========\n");


    printf("\n1.Ice Tea\t\t: Rp6000\n");
    printf("2.Caramel Machiato\t: Rp30000\n");
    printf("3.Green Tea Latte\t: Rp25000\n");
    printf("4.Milkshake Rp\t\t: Rp15000\n");
    printf("5.Chocolate Hazelnut\t: Rp25000\n");


    printf("Pilih Menu: ", menu);
    scanf("%d", &menu);


    switch(menu)

        {

            case 1 : printf("Menu Pesanan: Ice Tea");
                        printf("\nJumlah Pembelian: ");
                        scanf("%d", &jumlah_beli);

                        printf("\n==========[NOTA PEMBELIAN]==========\n");
                        printf("Nama Pelanggan\t\t: %s\n", Nama);
                        printf("Nama Pesanan\t\t: Ice Tea\n");
                        printf("Tanggal Pembelian\t: %s\n", tanggal);
                        printf("Jumlah Pembelian\t: %d\n", jumlah_beli);
                        harga_total = 6000 * jumlah_beli;
                        printf("Harga Total Pembelian\t: %d\n", harga_total);
                        break;

            case 2 : printf("Menu Pesanan: Caramel Machiato");
                        printf("\nJumlah Pembelian: ");
                        scanf("%d", &jumlah_beli);

                        printf("\n==========[NOTA PEMBELIAN]==========\n");
                        printf("Nama Pelanggan\t\t: %s\n", Nama);
                        printf("Nama Pesanan\t\t: Caramel Machiato\n");
                        printf("Tanggal Pembelian\t: %s\n", tanggal);
                        printf("Jumlah Pembelian\t: %d\n", jumlah_beli);
                        harga_total = 30000 * jumlah_beli;
                        printf("Harga Total Pembelian\t: %d\n", harga_total);
                        break;

            case 3 : printf("Menu Pesanan: Green Tea Latte");
                        printf("\nJumlah Pembelian: ");
                        scanf("%d", &jumlah_beli);

                        printf("\n==========[NOTA PEMBELIAN]==========\n");
                        printf("Nama Pelanggan\t\t: %s\n", Nama);
                        printf("Nama Pesanan\t\t: Green Tea Latte\n");
                        printf("Tanggal Pembelian\t: %s\n", tanggal);
                        printf("Jumlah Pembelian\t: %d\n", jumlah_beli);
                        harga_total = 25000 * jumlah_beli;
                        printf("Harga Total Pembelian\t: %d\n", harga_total);
                        break;

            case 4 : printf("Menu Pesanan: Milkshake");
                        printf("\nJumlah Pembelian: ");
                        scanf("%d", &jumlah_beli);

                        printf("\n==========[NOTA PEMBELIAN]==========\n");
                        printf("Nama Pelanggan\t\t: %s\n", Nama);
                        printf("Nama Pesanan\t\t: Milkshake\n");
                        printf("Tanggal Pembelian\t: %s\n", tanggal);
                        printf("Jumlah Pembelian\t: %d\n", jumlah_beli);
                        harga_total = 15000 * jumlah_beli;
                        printf("Harga Total Pembelian\t: %d\n", harga_total);
                        break;

            case 5 : printf("Menu Pesanan: Caramel Machiato");
                        printf("\nJumlah Pembelian: ");
                        scanf("%d", &jumlah_beli);

                        printf("\n==========[NOTA PEMBELIAN]==========\n");
                        printf("Nama Pelanggan\t\t: %s\n", Nama);
                        printf("Nama Pesanan: Caramel Machiato\n");
                        printf("Tanggal Pembelian: %s\n", tanggal);
                        printf("Jumlah Pembelian: %d\n", jumlah_beli);
                        harga_total = 25000 * jumlah_beli;
                        printf("Harga Total Pembelian: %d\n", harga_total);
                        break;

            default: printf("Inputan Menu Pesanan Salah");
            break;



        }




        for(iterator=0;iterator<3;iterator++)
                {
                    for(idx=0;idx<3-1;idx++)
                    {
                        if(mahasiswa[idx].nim<mahasiswa[idx+1].nim)
                        {

                        }
                        else
                        {
                            wadah=mahasiswa[idx].nim;
                            mahasiswa[idx].nim=mahasiswa[idx+1].nim;
                            mahasiswa[idx+1].nim=wadah;
                        }
                    }
                puts(" ");
                for(idx=0;idx<3;idx++)
                    {
                   printf("%s ",mahasiswa[idx].nim);
                    }
                }

    return 0;
}
