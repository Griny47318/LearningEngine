#include "LE.h"


class  SandBox : public LE::Application
{
public:
    SandBox()
    {

    }
    ~SandBox()
    {

    }

    void Run() override
    {
        while (true);
    }

};

LE::Application* LE::CreateApplication()
{
    return new SandBox;
}
