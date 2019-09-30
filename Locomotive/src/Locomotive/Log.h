#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Locomotive{

  class LOCOMOTIVE_API Log{
    public:
      static void Init();

      inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
        return s_CoreLogger;
      }

      inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
        return s_ClientLogger;
      }

    private:
      static std::shared_ptr<spdlog::logger> s_CoreLogger;
      static std::shared_ptr<spdlog::logger> s_ClientLogger;

  };

}

// Core log macros
#define LM_CORE_FATAL(...) ::Locomotive::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define LM_CORE_ERROR(...) ::Locomotive::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LM_CORE_WARN(...) ::Locomotive::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LM_CORE_INFO(...) ::Locomotive::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LM_CORE_TRACE(...) ::Locomotive::Log::GetCoreLogger()->trace(__VA_ARGS__)

// Client log macros
#define LM_FATAL(...) ::Locomotive::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define LM_ERROR(...) ::Locomotive::Log::GetClientLogger()->error(__VA_ARGS__)
#define LM_WARN(...) ::Locomotive::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LM_INFO(...) ::Locomotive::Log::GetClientLogger()->info(__VA_ARGS__)
#define LM_TRACE(...) ::Locomotive::Log::GetClientLogger()->trace(__VA_ARGS__)

