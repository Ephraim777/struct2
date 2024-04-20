#include <iostream>
#include <string.h>
struct DataBase{
    std::string City;
    std::string Street;
    int NumOfHome=0;
    int NumOfapartment=0;
    int Index=0;
};
void PrintDataBasa(DataBase& Data){
    std::cout<< "Город: " << Data.City<< std::endl;
    std::cout<< "Улица: " <<Data.Street<< std::endl;
    std::cout << "Номер дома: " << Data.NumOfHome<<std:: endl;
    std::cout<<  "Номер квартиры: " << Data.NumOfapartment<<std:: endl;
    std::cout << "Индекс: " <<  Data.Index<< std::endl;
}


int main(){
    DataBase DataFirst= { "Москва", "Первомайская",4, 83, 141276};
    PrintDataBasa(DataFirst);
    std::cout<< std::endl;
    DataBase DataSecond= {"Питер", "Западная", 7, 90, 130757};
    PrintDataBasa(DataSecond);
    return 0;
}