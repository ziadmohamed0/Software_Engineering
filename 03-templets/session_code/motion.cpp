#include <iostream>

template<typename T>
class Sensor
{
    public:
    T& GetDataObject()
    {
        return data;
    }

    protected:
    T data;
};

class Temprture
{
    public:

    void setTemp(double newTemp)
    {
        this->Tem_data = newTemp;
    }

    double getTemp()
    {
        return this->Tem_data;
    }


    private:
    double Tem_data;
};

class Motion
{
    public:
    Motion()
    {
        this->x = this->y = this->z = 0;
    }
    Motion(Motion & newobj)
    {
        this->x = newobj.x;
        this->y = newobj.y;
        this->z = newobj.z;
    }

    void setX(double new_x)
    {
        this->x = new_x;
    }

    double getX()
    {
        return this->x;
    }
    void setY(double new_Y)
    {
        this->y = new_Y;
    }

    double getY()
    {
        return this->y;
    }
    void setZ(double new_Z)
    {
        this->z = new_Z;
    }

    double getZ()
    {
        return this->z;
    }

    private:
    double x;
    double y;
    double z;
};
class AC :public Sensor<Temprture>
{
    public:

    void ReadTemp()
    {
        this->data.setTemp(20);
    }

    void WorkingAc()
    {
        if((this->data).getTemp() > 35)
        {
            std::cout << "Turn AC on\n";
        }
        else
        {
            std::cout << "Turn AC off\n";
        }
    }

};

class Accelormeter :public Sensor<Motion>
{
    public:

    void ReadData()
    {
        this->data.setX(5.5);
        this->data.setY(6.5);
        this->data.setZ(4.5);
    }
    void compalmentery_filter()
    {
        double old_x = this->data.getX();
        double old_y = this->data.getY();
        double old_z = this->data.getZ();

        this->data.setX(old_x * 2);
        this->data.setY(old_y * 2);
        this->data.setZ(old_z * 2);
    }

};

int main()
{

    AC ac1;
    ac1.ReadTemp();

    ac1.WorkingAc();

    // Accelormeter acc1;

    // acc1.ReadData();  // hardware reading

    // Motion& Dataread = acc1.GetDataObject();
    // std::cout << "My reading x = " << Dataread.getX() << " y = "<< Dataread.getY()
    // << " z = " << Dataread.getZ() << std::endl;

    // acc1.compalmentery_filter();

    // std::cout << "My reading x = " << Dataread.getX() << " y = "<< Dataread.getY()
    // << " z = " << Dataread.getZ() << std::endl;


    return 0;
}