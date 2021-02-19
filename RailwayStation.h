# pragma once
# include <iostream>
# include <string>

using namespace std;

class RailwayStation {
public:
    RailwayStation();
    RailwayStation(string, string, int);
    ~RailwayStation();
    void showList(void);
//    void getInfo(void);
//    string destination;
//    string time;
//    int freePlaces;


private:
    string destination;
    string time;
    int freePlaces;
};

RailwayStation::RailwayStation()
{
}
RailwayStation::RailwayStation(string _destination, string _time, int _freePlaces)
{
    this->destination = _destination;
    this->time = _time;
    this->freePlaces = _freePlaces;
}
RailwayStation::~RailwayStation()
{
}
//void RailwayStation::getInfo(void) {
//    setlocale(0, "");
//    cout << "Введите пункт назначения: ";
//    cin >> destination;
//    cout << "Введите время: ";
//    cin >> time;
//    cout << "Введите количество свободных мест: ";
//    cin >> freePlaces ;
//}
void RailwayStation::showList(void) {
    setlocale(0, "");
    cout << "Пункт назначения: " << destination << endl;
    cout << "Время: " << time << endl;
    cout << "Количество свободных мест: " << freePlaces << endl;
    cout << "==================================" <<endl;
}




