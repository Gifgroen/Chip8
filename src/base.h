#ifndef _BASE_H
#define _BASE_H

///
/// Detect program context
///

#if defined(__clang__) /// Compiler: clang
#  define COMPILER_CLANG 1
#  if defined(_WIN32) // OS
#    define OS_WINDOWS 1
#  elif defined(__APPLE__) && defined(__MACH__)
#    define OS_MAC 1
#  elif defined(__linux__)
#    define OS_LINUX 1
#  else
#    error Unsupported OS for this compiler setup
#  endif
#  if defined(__arm__) // Arch
#    define ARCH_ARM 1
#  elif defined(__aarch64__)
#    define ARCH_ARM64 1
#  elif defined(i386) || defined(__i386) || defined(__i386__)
#    define ARCH_x86 1
#  elif defined(__x86_64__)
#    define ARCH_x64 1
#  else
#    error Undefined architecture
#  endif
#elif defined(_MSC_VER) /// Compiler: MSVC
#  define COMPILER_CL 1
#  if defined(_WIN32) // OS
#    define OS_WINDOWS 1
#  else
#    error Unsupported OS for this compiler setup
#  endif

  /// TODO: ARCH

#elif defined(__GNUC__) // COMPILER GCC
#  define COMPILER_GCC 1
#  if defined(_WIN32) // OS
#    define OS_WINDOWS 1
#  elif defined(__APPLE__) && defined(__MACH__)
#    define OS_MAC 1
#  elif defined(__linux__)
#    define OS_LINUX 1
#  else
#    error Unsupported OS for this compiler setup
#  endif
#  if defined(__arm__) // Arch
#    define ARCH_ARM 1
#  elif defined(__aarch64__)
#    define ARCH_ARM64 1
#  elif defined(i386) || defined(__i386) || defined(__i386__)
#    define ARCH_x86 1
#  elif defined(__x86_64__)
#    define ARCH_x64 1
#  else
#    error Undefined architecture
#  endif
#else
#  error Unsupported compiler
#endif

///
/// Zero out undefined context
///

/// Compiler
#if !defined(COMPILER_CLANG)
#  define COMPILER_CLANG 0
#endif
#if !defined(COMPILER_CL)
#  define COMPILER_CL 0
#endif
#if !defined(COMPILER_GCC)
#  define COMPILER_GCC 0
#endif

/// OS
#if !defined(OS_WINDOWS)
#  define OS_WINDOWS 0
#endif
#if !defined(OS_MAC)
#  define OS_MAC 0
#endif
#if !defined(OS_LINUX)
#  define OS_LINUX 0
#endif

/// ARCH
#if !defined(ARCH_ARM)
#define ARCH_ARM 0
#endif
#if !defined(ARCH_ARM64)
#define ARCH_ARM64 0
#endif
#if !defined(ARCH_x86)
#define ARCH_x86 0
#endif
#if !defined(ARCH_x64)
#define ARCH_x64 0
#endif

#endif // _BASE_H
