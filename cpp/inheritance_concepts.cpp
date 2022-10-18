#include <iostream>
#include <string>
using namespace std;


// Base class
class Vehicle {
  public:
    int no_wheels;
    bool is_air_conditioned;
    float max_speed;
    int max_passengers;
    float fuel_capacity;
    float mileage;
    float total_km;
    float fuel_remaining;


    Vehicle(int val_no_wheels, bool val_is_air_conditioned,
                    float val_max_speed, int val_max_passengers,
                    float val_fuel_capacity, float val_mileage,
                    float val_total_km, float val_fuel_remaining) {
        no_wheels = val_no_wheels;
        is_air_conditioned = val_is_air_conditioned;
        max_speed = val_max_speed;
        max_passengers = val_max_passengers;
        fuel_capacity = val_fuel_capacity;
        mileage = val_mileage;
        total_km = val_total_km;
        fuel_remaining = val_fuel_remaining;
    }

    void Drive(float km_driven){
        float fuel_used;
        total_km = total_km + km_driven;
        fuel_used = km_driven / mileage;
        fuel_remaining = fuel_remaining - fuel_used;
    }

    void display(){
        cout<< "no_wheels : " << no_wheels << "\n";
        cout<< "is_air_conditioned : " << is_air_conditioned << "\n";
        cout<< "max_speed : " << max_speed << "\n";
        cout<< "max_passengers : " << max_passengers << "\n";
        cout<< "fuel_capacity : " << fuel_capacity << "\n";
        cout<< "mileage : " << mileage << "\n";
        cout<< "total_km : " << total_km << "\n";
        cout<< "fuel_remaining : " << fuel_remaining << "\n";
        
    }

};

// Derived class
class Car: public Vehicle {
  public:
    Car(int no_wheels, bool is_air_conditioned,
                    float max_speed, int max_passengers,
                    float fuel_capacity, float mileage,
                    float total_km, float fuel_remaining): Vehicle(no_wheels, is_air_conditioned, max_speed,
                    max_passengers,
                    fuel_capacity, mileage,
                    total_km, fuel_remaining)
                    {

                    }
// using Vehicle::Vehicle;
};

int main() {
  Car myCar(4, true, 180, 5, 40, 15, 14567, 20);
  myCar.display();
  myCar.Drive(30);
  myCar.display();
//   cout << myCar.brand + " " + myCar.model;
  return 0;
}