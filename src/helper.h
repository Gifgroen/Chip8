#ifndef _HELPER_H
#define _HELPER_H

// TODO(Karsten): Extract to Math package
#define ArrayCount(A) (sizeof(A) / sizeof((A)[0]))

// Assertion helper
#define Statement(S) do { S } while(false)

#if !defined(AssertBreak)
#  if OS_WINDOWS
#    define AssertBreak() (__debugbreak())
#  else
#    define AssertBreak() (__builtin_trap())
# endif
#endif

#if ASSERT_ENABLED
#define Assert(C) Statement(if (!(C)) { AssertBreak(); })
#else
#define Assert(C)
#endif

#endif // _HELPER_H
