#include "keybordcontroller.h"

KeybordController::KeybordController(CCar *Car1, CCar *Car2)
{
    this->m_Car1 = Car1;
    this->m_Car2 = Car2;
}

void KeybordController::KeybordHandler()
{
    cout << "Управляйте автомобилями с клавиатуры." << endl;
    cout << "W | S - для первого автомобиля.( "<< m_Car1->GetCarName() <<" )" << endl;
    cout << "ARROW UP | ARROW DOWN - для второго автомобиля( "<< m_Car2->GetCarName() <<" )." << endl;
    int ch;
    while((ch = getch()) != 27) {
//        cout << ch << endl;
        if (m_Car1->IsCanMove() && m_Car2->IsCanMove()) {
            switch (ch) {
            case 119: //  Увеличить скорость первого автомобиля (W)
                m_Car1->IncreaseSpeed();
                m_Car1->CheckCar();
                break;
            case 115: // Уменьшить скорость первого автомобиля (S)
                m_Car1->DecriseSpeed();
                m_Car1->CheckCar();
                break;
            case 97: // (A)
                m_Car1->changePower(-1);
                break;
            case 100: // (D)
                m_Car1->changePower(1);
                break;
            case 72: // Увеличить скорость второго автомобиля (ARROW UP)
                m_Car2->IncreaseSpeed();
                m_Car2->CheckCar();
                break;
            case 80: // Уменьшить скорость второго автомобиля (ARROW_DOWN)
                m_Car2->DecriseSpeed();
                m_Car2->CheckCar();
                break;
            case 75: // (ARROW_RIGHT)
                m_Car2->changePower(-1);
                break;
            case 77: // (ARROW_LEFT)
                m_Car2->changePower(1);
                break;
            default:
                break;
            }
        } else {
            CCar* winner = (m_Car1->IsCanMove()?m_Car1:m_Car2);
            cout << "Победил в гонке автомобиль: " << winner->GetCarName() << endl;
            cout << "ПОЗДРАВЛЯЕМ!" << endl;
            return;
        }
    }
    cout << "Управление с клавиатуры прервано пользователем." << endl;
}

