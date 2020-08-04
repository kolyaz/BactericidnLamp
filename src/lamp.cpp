///////////////////////////////////////////////////////////////////////////////////
//        Класс лампы
//
//
//
////////////////////////////////////////////////////////////////////////////////////
#include <mbed.h>

//
class Lamp
{
    private:

    public:
    Lamp() //Конструктор по умолчанию (без параметров)
    {
       //LampNumber=LampResurs_St=LampResurs_Set=LampResusr_Res=LampResusr_OSt=0;
    }
    int LampPinOut (PinName pin,int b ) //Иницианализация выхода
    {
       LampOut=DigitalInOut(pin);// потом доделаю
         
    }
    bool LampRead;                                   //Выход лампы
    int LampResurs_St;                                 //Ресурсное время лампы    
    int LampResurs_Set;                                //Ручное выставление ресурсного вермени лампы    
    int LampResusr_Res;                                //Сброс отработанного времени на выставленное лампы  
    int LampResusr_OSt;                                //оставшееся время ресурса лампы 
};

