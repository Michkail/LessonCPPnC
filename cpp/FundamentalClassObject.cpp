#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        double number;
};

int main(int argc, char const *argv[]) {
    Student data_st, data_nd;
    data_st.name = "jane";
    data_nd.number = 12;
    cout << "name from data_st: " << data_st.name << endl;
    cout << "point from data_nd: " << data_nd.number << endl;
    return 0;
}