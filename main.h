#pragma once

#if defined(_MSC_VER)
//MSVC
#ifdef _WIN32
#include <Windows.h>
#define crossleep(seconds) Sleep(seconds*1000)
#else
#error "Compilation with MSC was expected to be under Windows..."
#endif
#elif defined(__GNUC__)
//GCC
#ifdef __linux__
#include <unistd.h> 
#define crossleep(seconds) sleep(seconds)
#else
#error "Compilation with GNU Compiler was expected to be under Linux..."
#endif
#elif defined(__clang__)
//Clang
#ifdef __unix__
#include <unistd.h> 
#define crossleep(seconds) sleep(seconds)
#else
#error "Compilation with Clang was expected to be under BSD or Linux..."
#endif
#else
//Unknown
#error "Unknown compiler!"
#endif