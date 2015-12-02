
#define VAR 4

#include "pc_header.h"
#include "exocar.h"
#include "keybordcontroller.h"

using namespace std;

int main( void ) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "************************************" << endl;
    cout << "Первый автомобиль в объектной модели" << endl;
    cout << "************************************" << endl;
    // Создать авто.
    CCar Car1;
    Car1.CreateACar();
    // Отобразить информацию о новом авто.
    Car1.DisplayCarStats();

    CCar Car2;
    Car2.CreateACar();
    Car2.DisplayCarStats();

/*    const CCar Car3;
#if   VAR == 1
    ((CCar*)(&Car3))->CreateACar();
#elif VAR == 2
    const_cast<CCar*>(&Car3)->CreateACar();
#elif VAR == 3  // Using mutable fields
    Car3.CreateACar();
#elif VAR == 4
    (Car3.*reinterpret_cast<void (CCar::*)() const> (&CCar::CreateACar))();
#endif
    Car3.DisplayCarStats();*/
    KeybordController KbCntr(&Car1, &Car2);
    KbCntr.KeybordHandler();
}
