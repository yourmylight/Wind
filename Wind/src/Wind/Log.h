#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Wind {
	class WIND_API Log {
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define WD_CORE_TRACE(...)  ::Wind::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define WD_CORE_INFO(...)   ::Wind::Log::GetCoreLogger()->info(__VA_ARGS__)
#define WD_CORE_WARN(...)   ::Wind::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define WD_CORE_ERROR(...)  ::Wind::Log::GetCoreLogger()->error(__VA_ARGS__)
#define WD_CORE_FATAL(...)  ::Wind::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define WD_TRACE(...)  ::Wind::Log::GetClientLogger()->trace(__VA_ARGS__)
#define WD_INFO(...)   ::Wind::Log::GetClientLogger()->info(__VA_ARGS__)
#define WD_WARN(...)   ::Wind::Log::GetClientLogger()->warn(__VA_ARGS__)
#define WD_ERROR(...)  ::Wind::Log::GetClientLogger()->error(__VA_ARGS__)
#define WD_FATAL(...)  ::Wind::Log::GetClientLogger()->fatal(__VA_ARGS__)
