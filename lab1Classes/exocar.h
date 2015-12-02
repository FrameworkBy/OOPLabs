// exocar.h: интерфейс для класса CCar.
//
//////////////////////////////////////////////////////////////////////

#ifndef EXOCAR_H
#define EXOCAR_H


const  int MAX_LENGTH = 32;
const  int MAX_SPEED = 400;

#include "pc_header.h"

typedef int tspeed;

class CCar {
public:
    CCar();
    ~CCar();  // virtual
    // Открытый интерфейс класса.
    void DisplayCarStats() const;
    void IncreaseSpeed();
    void DecriseSpeed();
    void changePower(tspeed dx);
    tspeed  GetCurrSpeed() const { return m_currSpeed;}
    tspeed  GetMaxSpeed() const { return m_maxSpeed;}
    void ShowSpeed();
    bool CheckCar();
    bool IsCanMove();
    const char*  GetCarName()const { return m_carName;}
    void  CreateACar();
    void KeyboardSpeedControl();
private:
    // Скрытые данные.
    char  m_carName[ MAX_LENGTH ];
    tspeed  m_maxSpeed;
    tspeed  m_currSpeed;
    tspeed m_power = 1;
};


#endif // EXOCAR_H
