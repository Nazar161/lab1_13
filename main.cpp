# include <iostream>
# include <string>

using namespace std;
# include "RailwayStation.h"

int main() {

//    RailwayStation firstDeparture;
    RailwayStation firstDeparture("Moscow", "15:20", 25);
//    firstDeparture.destination = "Moscow";
//    firstDeparture.time = "15:00";
//    firstDeparture.freePlaces = 26;
//    firstDeparture.getInfo();
    firstDeparture.showList();

//    RailwayStation secondDeparture
    RailwayStation secondDeparture("Rostov-on-Don", "16:30", 12);
//    secondDeparture.destination = "Rostov-on_Don";
//    secondDeparture.time = "16:30";
//    secondDeparture.freePlaces = 35;
//    secondDeparture.getInfo();
//    firstDeparture.showList();
    secondDeparture.showList();
    return 0;
}

