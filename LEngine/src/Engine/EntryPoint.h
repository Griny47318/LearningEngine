#pragma once

#ifdef LE_PLATFORM_WINDOW

#include <iostream>

extern LE::Application* LE::CreateApplication();


int main(int argc, char** argv)
{
    LE::Log::Init();
    LE_CORE_WARN("Initialized Log!");
    int a = 1;
    LE_INFO("Hello Log! Var={0}", a);

    LE::Application* app = LE::CreateApplication();
    app->Run();
    return 0;
}

#endif