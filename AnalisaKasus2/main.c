#include <stdio.h>
#include <stdlib.h>

int main()
{

    float tinggi_badan;
    int berat_badan;
    int bmi;
    printf("Hitung Berat Badan Ideal\n");
    printf("----------------------------\n");
    printf("Tinggi Badan Anda (m) :");
    scanf("%f",&tinggi_badan);
    printf("Berat Badan Anda (kg) :");
    scanf("%d",&berat_badan);
    printf("----------------------------\n");

    bmi = berat_badan/(tinggi_badan*tinggi_badan);
    if(bmi<18)
    {
        printf("Keterangan : \n");
        printf("Under Weight/Kurus : Sebaiknya mulai menambah berat badan dan mengkonsumsi makanan berkarbohidrat di imbangi dengan olah raga");
    }
    else if((bmi>=18) && (bmi<=25))
        {
        printf("Keterangan : \n");
        printf("Normal Weight/Normal : Bagus, berat badan anda termasuk kategori ideal");
        }
        else if((bmi>=25) && (bmi<=27))
                {
                    printf("Keterangan : \n");
                    printf("Over Weight/Kegemukan : anda sudah masuk kategori gemuk. sebaiknya hindari makanan berlemak dan mulailah meningkatkan olahraga seminggu minimal 2 kali");
                }
              else if (bmi>27)
                    {
                    printf("Keterangan : \n");
                    printf("Obesitas : Sebaiknya segera membuat program menurunkan berat badan karena anda termasuk kategori obesitas/ terlalu gemuk dan tidak baik bagi kesehatan");
                    }



    return 0;
}
