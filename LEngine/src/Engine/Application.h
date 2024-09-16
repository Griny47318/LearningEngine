#pragma once 

#include "config.h"
#include "Core.h"

namespace LE
{
    class LE_API  Application
    {
    public:
        Application();
        virtual ~Application();

        virtual void Run();
        
    };

    Application* CreateApplication();
}