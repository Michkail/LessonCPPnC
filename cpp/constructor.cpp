#include <iostream>
#include <string>

using namespace std;


// Class without constructor
class Polos {
    public:
        string dataString;
        string dataStringNd;
        string dataStringRd;
        double dataDouble;

        // This is constructor
        Polos() {
            cout << "this is constructor" << endl;
        }
};

int main(int argc, char const *argv[]) {
    Polos objectPolos;
    objectPolos.dataString = "polosan";
    objectPolos.dataDouble = 0;

    cout << objectPolos.dataString << endl;
    cout << objectPolos.dataDouble << endl;

    return 0;
}

class Lorem {
    public:
        string dataString;
        string dataStringNd;
        string dataStringRd;
        double dataDouble;

        // This is constructor with parameter
        Lorem(string dataName, string dataCollege, string dataNumber, double dataPoint) {
            Lorem::dataString = dataName;
            Lorem::dataStringNd = dataCollege;
            Lorem::dataStringRd = dataNumber;
            Lorem::dataDouble = dataPoint;
        }
};

int main_two(int argc, char const *argv[]) {
    Lorem ipsum1 = Lorem('Jane', "2021997", "Sistem Informasi", 4.0);
    cout << ipsum1.dataString << endl;
    cout << ipsum1.dataStringNd << endl;
    cout << ipsum1.dataStringRd << endl;
    cout << ipsum1.dataDouble << endl;
}