#ifndef KEYBORDCONTROLLER_H
#define KEYBORDCONTROLLER_H

#include "pc_header.h"
#include "exocar.h"

class KeybordController
{
private:
    CCar* m_Car1;
    CCar* m_Car2;
public:
    KeybordController(CCar* m_Car1, CCar* m_Car2);
    void KeybordHandler();
};

#endif // KEYBORDCONTROLLER_H
