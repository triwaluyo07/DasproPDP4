#include <stdio.h>
#include <stdlib.h>

// Nama     : Tri Waluyo
// Nim      : A11.2017.10097
// Kelas    : 4103
int main()
{
    printf("=====================\n");
    printf("Percabangan Bersarang\n");
    printf("=====================\n");

    int isi_cat=10;
    int kaleng;
    int Luas;
    int Harga_kaleng;
    int Harga_total;
    char Nama [25];
    char Tanggal [20];

    printf("Luas dinding\t: ");
    scanf("%d", &Luas);

    fflush(stdin);
    printf("Nama \t\t: ");
    gets(Nama);
    printf("Tanggal \t: ");
    gets(Tanggal);


    printf("=====================\n");
    printf("\t\t\tNota\n");
    printf("=====================\n");
    printf("Nama Pelanggan\t\t\t: %s\n", Nama);
    printf("Tanggal Pembelian \t\t: %s\n", Tanggal);



       if (Luas%isi_cat ==0)
        {
         kaleng = (Luas/isi_cat);
        }
        else
        {
         kaleng = (Luas/isi_cat)+1;
        }

        printf("Total jumlah kaleng cat \t: %d\n", kaleng);


        if((kaleng>=1)&&(kaleng<=10))
        {
            Harga_total = kaleng*25000;
        }
        else if ((kaleng>=11)&&(kaleng<=25))
            {
            Harga_total = kaleng*24500;
            }
            else if ((kaleng>=26)&&(kaleng<=50))
                {

                Harga_total=kaleng*23000;
                }
                else
                    {
                    Harga_total = kaleng*22000;
                    }


            printf("Harga Total \t\t\t: %d\n", Harga_total);





    return 0;
}
