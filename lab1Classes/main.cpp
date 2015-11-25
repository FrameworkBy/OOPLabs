#include <iostream>
#include "exocar.h"
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

void main( void ) {
    ::SetConsoleOutputCP(1251);
    ::SetConsoleCP(1251);
    cout << "************************************" << endl;
    cout << "Первый автомобиль в объектной модели" << endl;
    cout << "************************************" << endl;
    // Создать авто.
    CCar myCar;
    myCar.CreateACar();
    // Отобразить информацию о новом авто.
    myCar.DisplayCarStats();
    // Ускорять автомобиль до предела.
    while( myCar.GetCurrSpeed() <= myCar.GetMaxSpeed())
        myCar.AddSpeed();
    cout << myCar.GetPetName() << " разломался от напряжения!" << endl;
}
