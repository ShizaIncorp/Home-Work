#include <iostream>

using namespace std;
struct phone{
int power, memory;
float battery;
};
struct experiment {
    int a;
 struct experiment1 {
     char d = 23;
 };
};

int main()
{
   phone iphone = {340000, 128, 6450.43};
   phone samsung = {290000, 256, 10600.34};
   cout << "iphone" << '\n' <<  "power = " << iphone.power << " parrots" << '\n' << "memory = " << iphone.memory << " gb" << '\n' <<  "battery = " << iphone.battery << " mA/h" << endl;
   cout << "samsung" << '\n' <<  "power = " << samsung.power << " parrots" << '\n' << "memory = " << samsung.memory << " gb" << '\n' <<  "battery = " << samsung.battery << " mA/h" << endl;
   cout << sizeof(&iphone.battery) << endl;
   cout << &iphone.memory << endl;
   cout << &iphone.battery;
}
