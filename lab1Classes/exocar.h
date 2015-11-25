// exocar.h: интерфейс для класса CCar.
//
//////////////////////////////////////////////////////////////////////

#ifndef EXOCAR_H
#define EXOCAR_H


const  int MAX_LENGTH = 32;
const  int MAX_SPEED = 400;

#include <iostream>
#include <stdio.h>
#include <string.h>

class CCar {
public:
  CCar();
  ~CCar();  // virtual
  // Открытый интерфейс класса.
  void  DisplayCarStats() const;
  void  AddSpeed();
  int  GetCurrSpeed() const { return m_currSpeed;}
  int  GetMaxSpeed() const { return m_maxSpeed;}
  const char*  GetPetName()const { return m_petName;}
  void  CreateACar();
private:
  // Скрытые данные.
  char  m_petName[ MAX_LENGTH ];
  int  m_maxSpeed;
  int  m_currSpeed;
};

#endif // EXOCAR_H
