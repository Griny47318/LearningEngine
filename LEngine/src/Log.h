#pragma once

#include <memory.h>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/logger.h"

namespace LE {
  

    class LE_API Log
    {
        public:
            static void Init();

            inline static std::shared_ptr<spdlog::logger>& GetCoreLogger();
            inline static std::shared_ptr<spdlog::logger>& GetClientLogger();

        private:
           static std::shared_ptr<spdlog::logger> s_CoreLogger;
           static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

//Core Log macros
#define LE_CORE_TRACE(...)      ::LE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LE_CORE_INFO(...)       ::LE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LE_CORE_WARN(...)       ::LE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LE_CORE_ERROR(...)      ::LE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LE_CORE_FATAL(...)      ::LE::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//Client Log macros
#define LE_TRACE(...)           ::LE::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LE_INFO(...)            ::LE::Log::GetClientLogger()->info(__VA_ARGS__)
#define LE_WARN(...)            ::LE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LE_ERROR(...)           ::LE::Log::GetClientLogger()->error(__VA_ARGS__)
#define LE_FATAL(...)           ::LE::Log::GetClientLogger()->fatal(__VA_ARGS__)