// exocar.cpp: реализация методов класса CCar.
//
//////////////////////////////////////////////////////////////////////
#include "exocar.h"

//////////////////////////////////////////////////////////////////////
// Конструктор и деструктор
//////////////////////////////////////////////////////////////////////

//CCar::CCar() :m_currSpeed(0), m_maxSpeed(0) {
CCar::CCar() {
    m_currSpeed = 0;
    m_maxSpeed = 0;
    strcpy(m_carName, "");
}

CCar::~CCar() {
    // Пока ничего не надо ...
}

//////////////////////////////////////////////////////////////////////
// Методы
//////////////////////////////////////////////////////////////////////

void CCar::DisplayCarStats() const { // Отобразить характеристики автомобиля.
    cout << "***********************************" << endl;
    cout << "Ваш автомобиль называется: " << m_carName << endl;
    cout << "Его максимальная скорость: " << m_maxSpeed << endl;
    cout << "***********************************" << endl << endl;
}

bool CCar::IsCanMove()
{
    return abs(GetCurrSpeed()) <= GetMaxSpeed();
}

void CCar::CreateACar() { // Создать модель автомобиля
    flushall();
    char  buffer[ MAX_LENGTH << 2 ];
    int  spd = 0;
    // Ввести правильно имя автомобиля.
    do {
        cout << endl << "Пожалуйста введите имя автомобиля: " << flush;
        gets( buffer );   // Ввод строки.
    } while( strlen( buffer ) >= MAX_LENGTH );
    strcpy( m_carName, buffer );
    // Ввести правильно максимальную скорость.
    do  {
        cout << "Введите max скорость для данной модели: " << flush;
        cin >> spd;
        cout << endl;
    } while( spd > MAX_SPEED );
    m_maxSpeed = spd;
}

void CCar::KeyboardSpeedControl()
{
    int ch;
    while((ch = getch()) != 27) {
        cout << ch << endl;
        continue;
        switch (ch) {
        case 72: // up
            IncreaseSpeed();
            CheckCar();
            break;
        case 80: // down
            DecriseSpeed();
            CheckCar();
            break;
        default:
            break;
        }
    }
    cout << "Управление с клавиатуры завершено." << endl;
}

void CCar::IncreaseSpeed() { // Нарастить скорость.
    if( m_currSpeed <= m_maxSpeed ){
        m_currSpeed += m_power;
        ShowSpeed();
    }
}

void CCar::DecriseSpeed() // Уменьшить скорость
{
    if( m_currSpeed >= -m_maxSpeed ){
        m_currSpeed -= m_power;
        ShowSpeed();
    }
}

void CCar::changePower(tspeed power_dx)
{
    if (abs(power_dx) > 0 && abs(power_dx) < 5) {
        m_power += power_dx;
    }
    if (m_power < 1)
        m_power = 1;
    if (m_power > 10)
        m_power = 10;
    cout << "Мощность " << GetCarName() << " есть: " << m_power << endl;
}

void CCar::ShowSpeed()
{
    cout << "Скорость " << GetCarName() << " есть: " << m_currSpeed << endl;
}

bool CCar::CheckCar()
{
    if (!IsCanMove()) {
        cout << GetCarName() << " разломался от напряжения!" << endl;
        return false;
    } else {
        return true;
    }
}

