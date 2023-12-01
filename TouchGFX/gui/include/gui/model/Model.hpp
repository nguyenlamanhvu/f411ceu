#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
protected:
    ModelListener* modelListener;
    int Pressure_Val;
    int Temperature_Val;
    int CO_Val;
    char Hour;
    char Minute;
    char Second;
    int tickCounter;
};

#endif // MODEL_HPP
