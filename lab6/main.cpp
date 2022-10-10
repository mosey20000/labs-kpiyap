#include <iostream>

enum ToolType {
    _static,
    _movable
};

class Tool {
protected:
    ToolType tool;
public:
    explicit Tool(ToolType _tool) {
        this->tool = _tool;
    }

    virtual void printData() = 0;
    virtual double cost() = 0;
    virtual ~Tool() = default;
};

class Saw: public Tool{
protected:
    double bladeLength;
public:
    Saw(ToolType _tool, double _bladeLength) :
            Tool(_tool), bladeLength(_bladeLength) {} ;

    void printData() override {
         std::cout << "Type of the saw is " << tool << std::endl;
         std::cout << "Blade length is " << bladeLength << std::endl;
    }

    double cost() override {
        return 10000;
    }

    ~Saw() override = default;
};

class ElectricSaw: public Saw {
protected:
    double power;
public:
    ElectricSaw(ToolType _tool, double _bladeLength, double _power):
            Saw(_tool, _bladeLength), power(_power) {};

    void printData() override {
        Saw::printData();
        std::cout << "Power is " << power << std::endl;
    }

    double cost() override {
        return 20000;
    }

    ~ElectricSaw() override = default;
};

class Hummer: public Tool {
protected:
    double weight;
public:
    Hummer(ToolType _tool, double _weight):
            Tool(_tool), weight(_weight) {};


    void printData() override {
        std::cout << "Type of the saw is " << tool << std::endl;
        std::cout << "Weight is " << weight << std::endl;
    }

    double cost() override {
        return 5000;
    }

    ~Hummer() override = default;
};

int main() {
    Tool** tools = new Tool*[3];
    tools[0] = new Hummer(_static, 2000);
    tools[1] = new Saw(_movable, 420);
    tools[2] = new ElectricSaw(_static, 720, 220);

    for (int i = 0; i < 3; i++) {
        std::cout << "Cost of the object is " << tools[i]->cost() << std::endl;
        tools[i]->printData();
        delete tools[i];
        std::cout << std::endl;
    }

    return 0;
}
