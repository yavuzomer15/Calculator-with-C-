// calculator.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include"headers.h"

int main()
{
    float number1, number2;
    char opr;
    cout << "Welcome the calculator!\n\n";
    cout << "======================\n\n";
    do
    {
        cout << "Please enter your operation (+,-,/,*,^) or 'E' to leave the program: ";
        cin >> opr;

        if (opr == 'E' || opr == 'e')
            break;

        cout << "\nPlease enter number one: ";
        cin >> number1;

        cout << "\nPlease enter number two: ";
        cin >> number2;

        cout << "\n=====================\n\n";

        switch (opr)
        {
        case'-':cout << "Result : " << number1 - number2;break;
        case'/':cout << "Result : " << number1 / number2;break;
        case'*':cout << "Result : " << number1 * number2;break;
        case'+':cout << "Result : " << number1 + number2;break;
        case'^':cout << "Result : " << pow(number1, number2);break;
        default:cout << "Please enter just +,-,/,*,^";
        }

        cout << "\n\n=============================\n\n";
    } while (opr != 'E' || opr != 'e');
 







        return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü
// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
