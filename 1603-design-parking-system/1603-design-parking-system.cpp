class ParkingSystem {
    int spaces[4];

public:
    ParkingSystem(int big, int medium, int small) : spaces{0, big, medium, small} {
    }

    bool addCar(int carType) {
        if (spaces[carType] == 0) {
            return false;
        } else {

            spaces[carType]--;
            return true;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */