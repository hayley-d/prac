#include<iomanip>
#include "tome.h"

int main()
{
    tome t("Potient Potions","Agatha");
    std::string arr[10];
    std::string pot1 = "Growth";
    std::string pot2 = "Invisability";
    std::string pot3 = "Sight";
    arr[0] = pot1;
    arr[1] = pot2;
    arr[2] = pot3;
    std::string *ptr = &arr;
    tome b("Randie's remedies",3,"Randy",ptr);
    /*t = t +"Sight";
    t = t + "Growth";
    t = t + "Shrink";
    std::cout<<" done 3"<<std::endl;
    t = t - "Shrink";*/
    std::cout<<b.getSpell(1)<<std::endl;
    return 0;
}
