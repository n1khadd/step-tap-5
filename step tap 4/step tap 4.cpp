#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "eded daxil edin: ";
    cin >> x;
    if (x % 2 == 0)cout << "eded cutdur";
    else cout << "eded tekdir";

    int ed1;
    int ed2;
    cout << "1ci ededi daxil et: ";
    cin >> ed1;
    cout << "2ci ededi daxil et: ";
    cin >> ed2;
    if (ed1 < ed2) cout << "kicik eded: " << ed1 << endl;
    else if (ed2 < ed1)cout << "kicik eded: " << ed2 << endl;

    int num1;
    cout << "eded daxil edin: ";
    cin >> num1;
    if (num1 > 0)cout << "eded musbetdir";
    else if (num1 < 0)cout << "eded menfidir";
    else cout << "eded 0 a beraberdir";

    int a;
    int b;
    cout << "a ededini daxil et: ";
    cin >> a;
    cout << "b ededini daxil et: ";
    cin >> b;
    double userselect;
    cout << "seciminizi edin (1 toplama, 2 cixma, 3 vurma, 4 bolme)";
    cin >> userselect;
    if (userselect == 1)cout << "Cavab: " << a + b;
    else if (userselect == 2)cout << "Cavab: " << a - b;
    else if (userselect == 3)cout << "Cavab: " << a * b;
    else if (userselect == 4)cout << "Cavab: " << a / b;
    else cout << "xahis edirik yuxaridaki secimlerden birini secesiniz: ";

    int eded1;
    cout << "eded daxil edin: ";
    cin >> eded1;
    if (eded1 >= 1)cout << "bu eded 1-50 arasindadir";
    else if (eded1 <= 50)cout << "bu eded 1-50 arasindadir";
    else if (eded1 > 50)cout << "bu eded 1-50 arasinda deyil!!!";
    else if (eded1 < 1) cout << "bu eded 1-50 arasinda deyil!!!";

    int x;
    int y;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    if (x% y == 0)cout << "YES";
    else if (x% y != 0)cout << "NO";

    int simvol;
    cout << "simvol daixl edin: ";
    cin >> simvol;
    if (simvol == '.' || simvol == ',' || simvol == '!' || simvol == '?') cout << "PUNKT" << endl;
    else cout << "HERF";

    int number;
    cout << "eded daxil et: ";
    cin >> number;
    if (number % 3 == 0) cout << " 3-ə bölünür." << endl;
    else cout << number << " 3-ə bölünmür." << endl;

    if (number % 5 == 0) cout << " 5-ə bölünür." << endl;
    else cout << number << " 5-ə bölünmür." << endl;

    if (number % 7 == 0) cout << " 7-ə bölünür." << endl;
    else cout << number << " 7-ə bölünmür." << endl;

    int number;
    cout << "Ədədi daxil edin: ";
    cin >> number;
    int modulqiymet;
    if (number < 0) modulqiymet = -number;
    else modulqiymet = number;
    cout << "Ədədin modulu: " << modulqiymet << endl;

    int number;
    cout << "4 rəqəmli ədədi daxil edin: ";
    cin >> number;
    int reqem = 0;
    if (number >= 1000 && number <= 9999) reqem = 4;
    else if (number >= 100 && number <= 999) reqem = 3;
    else if (number >= 10 && number <= 99) reqem = 2;
    else if (number >= 0 && number <= 9) reqem = 1;
    else cout << "Daxil etdiyiniz ədəd 4 rəqəmli deyil!" << endl;
    cout << "Ədəd " << reqem << " rəqəmdən ibarətdir." << endl;

    int ed5;
    cout << "5 reqemli eded yaz: ";
    cin >> ed5;
    double edd2 = (ed5 / 1000) % 10;
    double edd4 = (ed5 / 10) % 10;
    double edd1 = (ed5 / 10000) % 100;
    double edd5 = ed5 % 10;
    edd2 == edd4 && edd1 == edd5 && cout << "polindrom" || cout << "polindrom deyil";

    const int sifre=12345;
    int daxilet;
    cout << "Sehifeye giris ucun parolu daxil edin: ";
    cin >> daxilet;
    if (daxilet == sifre) cout << " --Access succesfully completed--";
    else cout << " --Acces denied--";
}
