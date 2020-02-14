#include <iostream>

class Car {
    public:
        int maxSpeed;
        int currentSpeed;

        void accelerate() {
            this->accelerate(8);         // вызов собственного метода
        }

        void accelerate(int delta) {
            this->currentSpeed += delta; // изменение собственного атрибута

            if ( this->currentSpeed > this->maxSpeed ) {
                this->currentSpeed = this->maxSpeed;
            }
        }

        void deccelerate() {
            this->deccelerate(12);       // вызов собственного метода
        }

        void deccelerate(int delta) {
            this->currentSpeed -= delta; // изменение собственного атрибута

            if ( this->currentSpeed < 0 ) {
                this->currentSpeed = 0;
            }
        }
};

int main() {
    Car car1, car2;

    car1.maxSpeed = 260;
    car2.maxSpeed = 180;

    car1.currentSpeed = 50;
    car2.currentSpeed = 50;


    std::cout << "maxSpeed:" << std::endl;
    std::cout << "  car1: " << car1.maxSpeed << " mph" << std::endl;
    std::cout << "  car2: " << car2.maxSpeed << " mph" << std::endl;
    std::cout << "currentSpeed:" << std::endl;
    std::cout << "  car1: " << car1.currentSpeed << " mph" << std::endl;
    std::cout << "  car2: " << car2.currentSpeed << " mph" << std::endl;

    car1.accelerate();
    car2.deccelerate();
    car2.deccelerate(20);

    std::cout << std::endl << "currentSpeed:" << std::endl;
    std::cout << "  car1: " << car1.currentSpeed << " mph" << std::endl;
    std::cout << "  car2: " << car2.currentSpeed << " mph" << std::endl;

    return 0;
}