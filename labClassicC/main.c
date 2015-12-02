/* Псевдонимы констант */
#define MAX_NAME_LENGTH    32
#define MAX_SPEED      400

/* Модули подключаемые */
#include <stdio.h>
#include <string.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

/* Простая структура модели автомобиля */
struct CAR {
    char  petName[ MAX_NAME_LENGTH ];
    int  maxSpeed;
    int  currSpeed;
};

/* Поведение модели */
void DisplayCarStats( struct CAR Avto );
void CreateACar( struct CAR* Avto );
void AddSpeed( struct CAR* Avto );

/* Основная программа */
void main( void ) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    /* Построить автомобиль нужного типа */
    struct CAR My1Avto;
    printf( "***********************************\n" );
    printf( "Первый автомобиль в обычной нотации\n" );
    printf( "***********************************\n\n" );
    /* Создать авто. */
    CreateACar( &My1Avto );
    /* Отобразить информацию о новом авто */
    DisplayCarStats( My1Avto );
    /* Ускорять автомобиль до предела */
    while( My1Avto.currSpeed <= My1Avto.maxSpeed )
        AddSpeed( &My1Avto );
    printf( "\n%s разломался от напряжения!\n", My1Avto.petName );
}  /*  End of main */

/* Отобразить характеристики автомобиля */
void DisplayCarStats( struct CAR Avto ) {
    printf( "***********************************\n" );
    printf( "Ваш автомобиль называется: %s\n", Avto.petName );
    printf( "Его максимальная скорость %d\n", Avto.maxSpeed );
    printf( "***********************************\n\n" );
}

/* Создать модель автомобиля */
void CreateACar( struct CAR* Avto ) {
    char  buffer[ MAX_NAME_LENGTH * 3 ];
    int  spd = 0;
    memset(Avto, 0, sizeof( struct CAR ));
    // Ввести имя автомобиля
    do {
        printf( "Пожалуйста введите имя автомобиля: " );
        gets( buffer );   // Ввод строки.
    } while( strlen( buffer ) >= MAX_NAME_LENGTH );
    strcpy( Avto->petName, buffer );
    // Ввести максимальную скорость
    do {
        printf( "Введите max скорость для данной модели: " );
        scanf( "%d", &spd );
    } while( spd > MAX_SPEED );
    // Инициализировать остальный поля.
    Avto->maxSpeed = spd;
    Avto->currSpeed = 0;
}

/* Простое управление: наращивать скорость по 10км/ч
  и печатать текущую скорость */
void AddSpeed( struct CAR* Avto ) {
    if( Avto->currSpeed <= Avto->maxSpeed ) {
        Avto->currSpeed += 10;
        printf(" \tСкорость уже: %d\n", Avto->currSpeed);
    }
}
