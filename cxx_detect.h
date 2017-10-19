// CXX_DETECT - C++ Compiler and Features Detection
// ================================================
//
// Dual licensed under PUBLIC DOMAIN (UNLICENSE) and ZLIB.
//   (choose the one that you prefer and is valid in your country)
//
// PUBLIC DOMAIN (UNLICENSE)
// =========================
//
// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.
//
// In jurisdictions that recognize copyright laws, the author or authors
// of this software dedicate any and all copyright interest in the
// software to the public domain. We make this dedication for the benefit
// of the public at large and to the detriment of our heirs and
// successors. We intend this dedication to be an overt act of
// relinquishment in perpetuity of all present and future rights to this
// software under copyright law.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
// OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//
// For more information, please refer to <http://unlicense.org>
//
// ZLIB LICENSE
// ============
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.

// ============================================================================
// [Guard]
// ============================================================================

#if !defined(CXX_DETECT_H) || CXX_DETECT_H < 20171018

#if defined(CXX_DETECT_H)
# undef CXX_DETECT_H
# define CXX_DETECT_H_CLEANUP
#endif
#define CXX_DETECT_H 20171018

// ============================================================================
// [Cleanup]
// ============================================================================

#if defined(CXX_DETECT_H_CLEANUP)
# undef CXX_DETECT_H_CLEANUP

// C/C++ Compiler vendor and vendor details
# undef CXX_CLANG
# undef CXX_GNU
# undef CXX_GNU_COMPAT
# undef CXX_INTEL
# undef CXX_MSC
# undef CXX_MINGW
# undef CXX_MAKE_VER

// C++ standard version.
# undef CXX_CPLUSPLUS

// C++ features (X == vendor-specific).
# undef CXX_HAS_X_ASSUME
# undef CXX_HAS_X_ASSUME_ALIGNED
# undef CXX_HAS_X_ATTRIBUTE
# undef CXX_HAS_X_ATTRIBUTE_ALIGNED
# undef CXX_HAS_X_ATTRIBUTE_ALWAYS_INLINE
# undef CXX_HAS_X_ATTRIBUTE_NOINLINE
# undef CXX_HAS_X_ATTRIBUTE_DEPRECATED
# undef CXX_HAS_X_ATTRIBUTE_NORETURN
# undef CXX_HAS_X_ATTRIBUTE_NOSANITIZE
# undef CXX_HAS_X_ATTRIBUTE_OPTIMIZE
# undef CXX_HAS_X_BUILTIN_ASSUME
# undef CXX_HAS_X_BUILTIN_ASSUME_ALIGNED
# undef CXX_HAS_X_BUILTIN_EXPECT
# undef CXX_HAS_X_BUILTIN_UNREACHABLE
# undef CXX_HAS_X_DECLSPEC_ALIGN
# undef CXX_HAS_X_DECLSPEC_DEPRECATED
# undef CXX_HAS_X_DECLSPEC_NOINLINE
# undef CXX_HAS_X_DECLSPEC_NORETURN
# undef CXX_HAS_X_FORCEINLINE

// C++ features (C++11).
# undef CXX_HAS_ALIAS_TEMPLATES
# undef CXX_HAS_ALIGNAS
# undef CXX_HAS_ALIGNOF
# undef CXX_HAS_ATTRIBUTES
# undef CXX_HAS_AUTO_TYPE
# undef CXX_HAS_CONSTEXPR
# undef CXX_HAS_DECLTYPE
# undef CXX_HAS_DEFAULT_FUNCTION_TEMPLATE_ARGS
# undef CXX_HAS_DEFAULTED_FUNCTIONS
# undef CXX_HAS_DELEGATING_CONSTRUCTORS
# undef CXX_HAS_DELETED_FUNCTIONS
# undef CXX_HAS_EXPLICIT_CONVERSIONS
# undef CXX_HAS_FINAL
# undef CXX_HAS_INHERITING_CONSTRUCTORS
# undef CXX_HAS_INITIALIZER_LISTS
# undef CXX_HAS_INLINE_NAMESPACES
# undef CXX_HAS_LAMBDAS
# undef CXX_HAS_LOCAL_TYPE_TEMPLATE_ARGS
# undef CXX_HAS_NOEXCEPT
# undef CXX_HAS_NONSTATIC_MEMBER_INIT
# undef CXX_HAS_NULLPTR
# undef CXX_HAS_OVERRIDE
# undef CXX_HAS_RANGE_FOR
# undef CXX_HAS_RAW_STRING_LITERALS
# undef CXX_HAS_REFERENCE_QUALIFIED_FUNCTIONS
# undef CXX_HAS_RVALUE_REFERENCES
# undef CXX_HAS_STATIC_ASSERT
# undef CXX_HAS_STRONG_ENUMS
# undef CXX_HAS_THREAD_LOCAL
# undef CXX_HAS_UNICODE_LITERALS
# undef CXX_HAS_UNRESTRICTED_UNIONS
# undef CXX_HAS_VARIADIC_TEMPLATES

// C++ features (C++14).
# undef CXX_HAS_AGGREGATE_NSDMI
# undef CXX_HAS_BINARY_LITERALS
# undef CXX_HAS_CONTEXTUAL_CONVERSIONS
# undef CXX_HAS_DECLTYPE_AUTO
# undef CXX_HAS_GENERIC_LAMBDAS
# undef CXX_HAS_INIT_CAPTURES
# undef CXX_HAS_RELAXED_CONSTEXPR
# undef CXX_HAS_VARIABLE_TEMPLATES

// C++ features (C++17).

// C++ native types.
# undef CXX_HAS_NATIVE_CHAR
# undef CXX_HAS_NATIVE_CHAR16_T
# undef CXX_HAS_NATIVE_CHAR32_T
# undef CXX_HAS_NATIVE_WCHAR_T

// Target architecture.
# undef CXX_ARCH_X86
# undef CXX_ARCH_X86_64
# undef CXX_ARCH_ARM32
# undef CXX_ARCH_ARM64
# undef CXX_ARCH_BITS
# undef CXX_ARCH_LE
# undef CXX_ARCH_BE

// Target operating system.
# undef CXX_OS_WINDOWS
# undef CXX_OS_MAC
# undef CXX_OS_IOS
# undef CXX_OS_ANDROID
# undef CXX_OS_LINUX
# undef CXX_OS_NETBSD
# undef CXX_OS_FREEBSD
# undef CXX_OS_OPENBSD
# undef CXX_OS_DRAGONFLYBSD
# undef CXX_OS_QNX
# undef CXX_OS_SOLARIS
# undef CXX_OS_CYGWIN
# undef CXX_OS_BSD

// Visibility.
# undef CXX_EXPORT
# undef CXX_IMPORT

// Function Attributes.
# undef CXX_CDECL
# undef CXX_STDCALL
# undef CXX_FASTCALL
# undef CXX_REGPARM
# undef CXX_FORCEINLINE
# undef CXX_NOINLINE
# undef CXX_NORETURN

// Likely / Unlikely.
# undef CXX_LIKELY
# undef CXX_UNLIKELY

// Assumptions.
# undef CXX_ASSUME
# undef CXX_ASSUME_ALIGNED

// Annotations.
# undef CXX_UNUSED
# undef CXX_FALLTHROUGH

// Other macros.
# undef CXX_ALIGN_DECL
# undef CXX_ALIGN_TYPE

# undef CXX_ARRAY_SIZE
# undef CXX_OFFSET_OF

#endif

// ============================================================================
// [C++ Compiler Vendor]
// ============================================================================

#define CXX_CLANG    0
#define CXX_GNU      0
#define CXX_INTEL    0
#define CXX_MSC      0

#define CXX_MAKE_VER(MAJOR, MINOR, PATCH) ((MAJOR) * 10000000 + (MINOR) * 100000 + (PATCH))

// Intel pretends to be GNU/MSC, so check it first.
#if defined(__INTEL_COMPILER)
# undef CXX_INTEL
# define CXX_INTEL CXX_MAKE_VER(__INTEL_COMPILER / 100, (__INTEL_COMPILER / 10) % 10, __INTEL_COMPILER % 10)
#elif defined(_MSC_VER) && defined(_MSC_FULL_VER)
# undef CXX_MSC
# if _MSC_VER == _MSC_FULL_VER / 10000
#  define CXX_MSC CXX_MAKE_VER(_MSC_VER / 100, _MSC_VER % 100, _MSC_FULL_VER % 10000)
# else
#  define CXX_MSC CXX_MAKE_VER(_MSC_VER / 100, (_MSC_FULL_VER / 100000) % 100, _MSC_FULL_VER % 100000)
# endif
#elif defined(__clang__) && defined(__clang_minor__)
# undef CXX_CLANG
# define CXX_CLANG CXX_MAKE_VER(__clang_major__, __clang_minor__, __clang_patchlevel__)
#elif defined(__GNUC__) && defined(__GNUC_MINOR__) && defined(__GNUC_PATCHLEVEL__)
# undef CXX_GNU
# define CXX_GNU CXX_MAKE_VER(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
#else
# error "[ccx_detect.h] Unable to detect C/C++ compiler."
#endif

// CXX_MINGW - MINGW - 0 (no MINGW), 32 (MINGW32), 64 (MINGW64).
#if defined(__MINGW64__)
# define CXX_MINGW 64
#elif defined(__MINGW32__)
# define CXX_MINGW 32
#else
# define CXX_MINGW 0
#endif

// CXX_GNU_COMPAT - C++ compiler is GNU or pretends to be (clang/ICC).
#if defined(__GNUC__) && !defined(__GNUC_MINOR__)
# define CXX_GNU_COMPAT CXX_MAKE_VER(__GNUC__, 0, 0)
#elif defined(__GNUC__) && !defined(__GNUC_PATCHLEVEL__)
# define CXX_GNU_COMPAT CXX_MAKE_VER(__GNUC__, __GNUC_MINOR__, 0)
#elif defined(__GNUC__)
# define CXX_GNU_COMPAT CXX_MAKE_VER(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
#else
# define CXX_GNU_COMPAT 0
#endif

// ============================================================================
// [C++ Version]
// ============================================================================

// 199711L - C++98
// 201103L - C++11
// 201402L - C++14
// 201703L - C++17
#if defined(__cplusplus)
# if __cplusplus >= 201103L
#  define CXX_CPLUSPLUS __cplusplus
# elif defined(__GXX_EXPERIMENTAL_CXX0X__) || CXX_MSC >= CXX_MAKE_VER(18, 0, 0) || CXX_INTEL >= CXX_MAKE_VER(14, 0, 0)
#  define CXX_CPLUSPLUS 201103L
# else
#  define CXX_CPLUSPLUS 199711L
# endif
#endif

#if !defined(CXX_CPLUSPLUS)
# define CXX_CPLUSPLUS 0
#endif

// ============================================================================
// [C++ Compiler Features]
// ============================================================================

// Feature Comparison:
//   http://en.cppreference.com/w/cpp/compiler_support

// Clang Compiler:
//   https://releases.llvm.org/5.0.0/tools/clang/docs/LanguageExtensions.html
#if CXX_CLANG
# define CXX_HAS_X_ASSUME                       (0)
# define CXX_HAS_X_ASSUME_ALIGNED               (0)
# define CXX_HAS_X_ATTRIBUTE                    (1)
# define CXX_HAS_X_ATTRIBUTE_ALIGNED            (__has_attribute(__aligned__))
# define CXX_HAS_X_ATTRIBUTE_ALWAYS_INLINE      (__has_attribute(__always_inline__))
# define CXX_HAS_X_ATTRIBUTE_DEPRECATED         (__has_attribute(__deprecated__) && __has_extension(__attribute_deprecated_with_message__))
# define CXX_HAS_X_ATTRIBUTE_NOINLINE           (__has_attribute(__noinline__))
# define CXX_HAS_X_ATTRIBUTE_NORETURN           (__has_attribute(__noreturn__))
# define CXX_HAS_X_ATTRIBUTE_NOSANITIZE         (__has_attribute(__nosanitize__))
# define CXX_HAS_X_ATTRIBUTE_OPTIMIZE           (__has_attribute(__optimize__))
# define CXX_HAS_X_BUILTIN_ASSUME               (__has_builtin(__builtin_assume))
# define CXX_HAS_X_BUILTIN_ASSUME_ALIGNED       (__has_builtin(__builtin_assume_aligned))
# define CXX_HAS_X_BUILTIN_EXPECT               (__has_builtin(__builtin_expect))
# define CXX_HAS_X_BUILTIN_UNREACHABLE          (__has_builtin(__builtin_unreachable))
# define CXX_HAS_X_DECLSPEC_ALIGN               (0)
# define CXX_HAS_X_DECLSPEC_DEPRECATED          (0)
# define CXX_HAS_X_DECLSPEC_NOINLINE            (0)
# define CXX_HAS_X_DECLSPEC_NORETURN            (0)
# define CXX_HAS_X_FORCEINLINE                  (0)

# define CXX_HAS_ALIAS_TEMPLATES                (__has_extension(__cxx_alias_templates__))
# define CXX_HAS_ALIGNAS                        (__has_extension(__cxx_alignas__))
# define CXX_HAS_ALIGNOF                        (__has_extension(__cxx_alignof__))
# define CXX_HAS_ATTRIBUTES                     (__has_extension(__cxx_attributes__))
# define CXX_HAS_AUTO_TYPE                      (__has_extension(__cxx_auto_type__))
# define CXX_HAS_CONSTEXPR                      (__has_extension(__cxx_constexpr__))
# define CXX_HAS_DECLTYPE                       (__has_extension(__cxx_decltype__))
# define CXX_HAS_DEFAULT_FUNCTION_TEMPLATE_ARGS (__has_extension(__cxx_default_function_template_args__))
# define CXX_HAS_DEFAULTED_FUNCTIONS            (__has_extension(__cxx_defaulted_functions__))
# define CXX_HAS_DELEGATING_CONSTRUCTORS        (__has_extension(__cxx_delegating_constructors__))
# define CXX_HAS_DELETED_FUNCTIONS              (__has_extension(__cxx_deleted_functions__))
# define CXX_HAS_EXPLICIT_CONVERSIONS           (__has_feature(__cxx_explicit_conversions__))
# define CXX_HAS_FINAL                          (__has_extension(__cxx_override_control__))
# define CXX_HAS_INHERITING_CONSTRUCTORS        (__has_feature(__cxx_inheriting_constructors__))
# define CXX_HAS_INITIALIZER_LISTS              (__has_extension(__cxx_generalized_initializers__))
# define CXX_HAS_INLINE_NAMESPACES              (__has_extension(__cxx_inline_namespaces__))
# define CXX_HAS_LAMBDAS                        (__has_extension(__cxx_lambdas__))
# define CXX_HAS_LOCAL_TYPE_TEMPLATE_ARGS       (__has_extension(__cxx_local_type_template_args__))
# define CXX_HAS_NOEXCEPT                       (__has_extension(__cxx_noexcept__))
# define CXX_HAS_NONSTATIC_MEMBER_INIT          (__has_feature(__cxx_nonstatic_member_init__))
# define CXX_HAS_NULLPTR                        (__has_extension(__cxx_nullptr__))
# define CXX_HAS_OVERRIDE                       (__has_extension(__cxx_override_control__))
# define CXX_HAS_RANGE_FOR                      (__has_extension(__cxx_range_for__))
# define CXX_HAS_RAW_STRING_LITERALS            (__has_feature(__cxx_raw_string_literals__))
# define CXX_HAS_REFERENCE_QUALIFIED_FUNCTIONS  (__has_extension(__cxx_reference_qualified_functions__))
# define CXX_HAS_RVALUE_REFERENCES              (__has_extension(__cxx_rvalue_references__))
# define CXX_HAS_STATIC_ASSERT                  (__has_extension(__cxx_static_assert__))
# define CXX_HAS_STRONG_ENUMS                   (__has_extension(__cxx_strong_enums__))
# define CXX_HAS_THREAD_LOCAL                   (__has_feature(__cxx_thread_local__))
# define CXX_HAS_UNICODE_LITERALS               (__has_extension(__cxx_unicode_literals__))
# define CXX_HAS_UNRESTRICTED_UNIONS            (__has_feature(__cxx_unrestricted_unions__))
# define CXX_HAS_VARIADIC_TEMPLATES             (__has_extension(__cxx_variadic_templates__))

# define CXX_HAS_AGGREGATE_NSDMI                (__has_extension(__cxx_aggregate_nsdmi__))
# define CXX_HAS_BINARY_LITERALS                (__has_extension(__cxx_binary_literals__))
# define CXX_HAS_CONTEXTUAL_CONVERSIONS         (__has_extension(__cxx_contextual_conversions__))
# define CXX_HAS_DECLTYPE_AUTO                  (__has_extension(__cxx_decltype_auto__))
# define CXX_HAS_GENERIC_LAMBDAS                (__has_extension(__cxx_generic_lambdas__))
# define CXX_HAS_INIT_CAPTURES                  (__has_extension(__cxx_init_captures__))
# define CXX_HAS_RELAXED_CONSTEXPR              (__has_extension(__cxx_relaxed_constexpr__))
# define CXX_HAS_VARIABLE_TEMPLATES             (__has_extension(__cxx_variable_templates__))

# define CXX_HAS_NATIVE_CHAR                    (1)
# define CXX_HAS_NATIVE_CHAR16_T                (CXX_HAS_UNICODE_LITERALS)
# define CXX_HAS_NATIVE_CHAR32_T                (CXX_HAS_UNICODE_LITERALS)
# define CXX_HAS_NATIVE_WCHAR_T                 (1)
#endif

// GNU Compiler:
//   https://gcc.gnu.org/projects/cxx-status.html
#if CXX_GNU
# define CXX_HAS_X_ASSUME                       (0)
# define CXX_HAS_X_ASSUME_ALIGNED               (0)
# define CXX_HAS_X_ATTRIBUTE                    (1)
# define CXX_HAS_X_ATTRIBUTE_ALIGNED            (CXX_GNU >= CXX_MAKE_VER(2, 7, 0))
# define CXX_HAS_X_ATTRIBUTE_ALWAYS_INLINE      (CXX_GNU >= CXX_MAKE_VER(4, 4, 0) && !CXX_MINGW)
# define CXX_HAS_X_ATTRIBUTE_DEPRECATED         (CXX_GNU >= CXX_MAKE_VER(4, 5, 0))
# define CXX_HAS_X_ATTRIBUTE_NOINLINE           (CXX_GNU >= CXX_MAKE_VER(3, 4, 0) && !CXX_MINGW)
# define CXX_HAS_X_ATTRIBUTE_NORETURN           (CXX_GNU >= CXX_MAKE_VER(2, 5, 0))
# define CXX_HAS_X_ATTRIBUTE_NOSANITIZE         (0)
# define CXX_HAS_X_ATTRIBUTE_OPTIMIZE           (CXX_GNU >= CXX_MAKE_VER(4, 4, 0))
# define CXX_HAS_X_BUILTIN_ASSUME               (0)
# define CXX_HAS_X_BUILTIN_ASSUME_ALIGNED       (CXX_GNU >= CXX_MAKE_VER(4, 7, 0))
# define CXX_HAS_X_BUILTIN_EXPECT               (1)
# define CXX_HAS_X_BUILTIN_UNREACHABLE          (CXX_GNU >= CXX_MAKE_VER(4, 5, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_X_DECLSPEC_ALIGN               (0)
# define CXX_HAS_X_DECLSPEC_DEPRECATED          (0)
# define CXX_HAS_X_DECLSPEC_NOINLINE            (0)
# define CXX_HAS_X_DECLSPEC_NORETURN            (0)
# define CXX_HAS_X_FORCEINLINE                  (0)

# define CXX_HAS_ALIAS_TEMPLATES                (CXX_GNU >= CXX_MAKE_VER(4, 7, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_ALIGNAS                        (CXX_GNU >= CXX_MAKE_VER(4, 8, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_ALIGNOF                        (CXX_GNU >= CXX_MAKE_VER(4, 8, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_ATTRIBUTES                     (CXX_GNU >= CXX_MAKE_VER(4, 8, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_AUTO_TYPE                      (CXX_GNU >= CXX_MAKE_VER(4, 4, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_CONSTEXPR                      (CXX_GNU >= CXX_MAKE_VER(4, 6, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_DECLTYPE                       (CXX_GNU >= CXX_MAKE_VER(4, 3, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_DEFAULT_FUNCTION_TEMPLATE_ARGS (CXX_GNU >= CXX_MAKE_VER(4, 7, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_DEFAULTED_FUNCTIONS            (CXX_GNU >= CXX_MAKE_VER(4, 4, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_DELEGATING_CONSTRUCTORS        (CXX_GNU >= CXX_MAKE_VER(4, 7, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_DELETED_FUNCTIONS              (CXX_GNU >= CXX_MAKE_VER(4, 4, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_EXPLICIT_CONVERSIONS           (CXX_GNU >= CXX_MAKE_VER(4, 5, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_FINAL                          (CXX_GNU >= CXX_MAKE_VER(4, 7, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_INHERITING_CONSTRUCTORS        (CXX_GNU >= CXX_MAKE_VER(4, 8, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_INITIALIZER_LISTS              (CXX_GNU >= CXX_MAKE_VER(4, 4, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_INLINE_NAMESPACES              (CXX_GNU >= CXX_MAKE_VER(4, 4, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_LAMBDAS                        (CXX_GNU >= CXX_MAKE_VER(4, 5, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_LOCAL_TYPE_TEMPLATE_ARGS       (CXX_GNU >= CXX_MAKE_VER(4, 5, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_NOEXCEPT                       (CXX_GNU >= CXX_MAKE_VER(4, 6, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_NONSTATIC_MEMBER_INIT          (CXX_GNU >= CXX_MAKE_VER(4, 7, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_NULLPTR                        (CXX_GNU >= CXX_MAKE_VER(4, 6, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_OVERRIDE                       (CXX_GNU >= CXX_MAKE_VER(4, 7, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_RANGE_FOR                      (CXX_GNU >= CXX_MAKE_VER(4, 6, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_RAW_STRING_LITERALS            (CXX_GNU >= CXX_MAKE_VER(4, 5, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_REFERENCE_QUALIFIED_FUNCTIONS  (CXX_GNU >= CXX_MAKE_VER(4, 8, 1) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_RVALUE_REFERENCES              (CXX_GNU >= CXX_MAKE_VER(4, 6, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_STATIC_ASSERT                  (CXX_GNU >= CXX_MAKE_VER(4, 3, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_STRONG_ENUMS                   (CXX_GNU >= CXX_MAKE_VER(4, 4, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_THREAD_LOCAL                   (CXX_GNU >= CXX_MAKE_VER(4, 8, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_UNICODE_LITERALS               (CXX_GNU >= CXX_MAKE_VER(4, 5, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_UNRESTRICTED_UNIONS            (CXX_GNU >= CXX_MAKE_VER(4, 6, 0) && CXX_CPLUSPLUS >= 201103L)
# define CXX_HAS_VARIADIC_TEMPLATES             (CXX_GNU >= CXX_MAKE_VER(4, 3, 0) && CXX_CPLUSPLUS >= 201103L)

# define CXX_HAS_AGGREGATE_NSDMI                (CXX_GNU >= CXX_MAKE_VER(5, 0, 0) && CXX_CPLUSPLUS >= 201402L)
# define CXX_HAS_BINARY_LITERALS                (CXX_GNU >= CXX_MAKE_VER(4, 9, 0) && CXX_CPLUSPLUS >= 201402L)
# define CXX_HAS_CONTEXTUAL_CONVERSIONS         (CXX_GNU >= CXX_MAKE_VER(4, 9, 0) && CXX_CPLUSPLUS >= 201402L)
# define CXX_HAS_DECLTYPE_AUTO                  (CXX_GNU >= CXX_MAKE_VER(4, 9, 0) && CXX_CPLUSPLUS >= 201402L)
# define CXX_HAS_GENERIC_LAMBDAS                (CXX_GNU >= CXX_MAKE_VER(4, 9, 0) && CXX_CPLUSPLUS >= 201402L)
# define CXX_HAS_INIT_CAPTURES                  (CXX_GNU >= CXX_MAKE_VER(4, 9, 0) && CXX_CPLUSPLUS >= 201402L)
# define CXX_HAS_RELAXED_CONSTEXPR              (CXX_GNU >= CXX_MAKE_VER(5, 0, 0) && CXX_CPLUSPLUS >= 201402L)
# define CXX_HAS_VARIABLE_TEMPLATES             (CXX_GNU >= CXX_MAKE_VER(5, 0, 0) && CXX_CPLUSPLUS >= 201402L)

# define CXX_HAS_NATIVE_CHAR                    (1)
# define CXX_HAS_NATIVE_CHAR16_T                (CXX_HAS_UNICODE_LITERALS)
# define CXX_HAS_NATIVE_CHAR32_T                (CXX_HAS_UNICODE_LITERALS)
# define CXX_HAS_NATIVE_WCHAR_T                 (1)
#endif

// Intel Compiler:
//   https://software.intel.com/en-us/articles/c0x-features-supported-by-intel-c-compiler
//   https://software.intel.com/en-us/articles/c14-features-supported-by-intel-c-compiler
//   https://software.intel.com/en-us/articles/c17-features-supported-by-intel-c-compiler
#if CXX_INTEL
# define CXX_HAS_X_ASSUME                       (1)
# define CXX_HAS_X_ASSUME_ALIGNED               (1)
# define CXX_HAS_X_ATTRIBUTE                    (CXX_GNU_COMPAT >= 1)
# define CXX_HAS_X_ATTRIBUTE_ALIGNED            (CXX_GNU_COMPAT >= 1)
# define CXX_HAS_X_ATTRIBUTE_ALWAYS_INLINE      (CXX_GNU_COMPAT >= 1)
# define CXX_HAS_X_ATTRIBUTE_DEPRECATED         (CXX_GNU_COMPAT >= 1)
# define CXX_HAS_X_ATTRIBUTE_NOINLINE           (CXX_GNU_COMPAT >= 1)
# define CXX_HAS_X_ATTRIBUTE_NORETURN           (CXX_GNU_COMPAT >= 1)
# define CXX_HAS_X_ATTRIBUTE_NOSANITIZE         (0)
# define CXX_HAS_X_ATTRIBUTE_OPTIMIZE           (CXX_GNU_COMPAT >= 1)
# define CXX_HAS_X_BUILTIN_ASSUME               (0)
# define CXX_HAS_X_BUILTIN_ASSUME_ALIGNED       (0)
# define CXX_HAS_X_BUILTIN_EXPECT               (CXX_GNU_COMPAT >= 1)
# define CXX_HAS_X_BUILTIN_UNREACHABLE          (0)
# define CXX_HAS_X_DECLSPEC_ALIGN               (CXX_GNU_COMPAT == 0)
# define CXX_HAS_X_DECLSPEC_DEPRECATED          (CXX_GNU_COMPAT == 0)
# define CXX_HAS_X_DECLSPEC_NOINLINE            (CXX_GNU_COMPAT == 0)
# define CXX_HAS_X_DECLSPEC_NORETURN            (CXX_GNU_COMPAT == 0)
# define CXX_HAS_X_FORCEINLINE                  (CXX_GNU_COMPAT == 0)

# define CXX_HAS_ALIAS_TEMPLATES                (CXX_INTEL >= CXX_MAKE_VER(12, 1, 0))
# define CXX_HAS_ALIGNAS                        (CXX_INTEL >= CXX_MAKE_VER(15, 0, 0))
# define CXX_HAS_ALIGNOF                        (CXX_INTEL >= CXX_MAKE_VER(15, 0, 0))
# define CXX_HAS_ATTRIBUTES                     (CXX_INTEL >= CXX_MAKE_VER(12, 1, 0))
# define CXX_HAS_AUTO_TYPE                      (CXX_INTEL >= CXX_MAKE_VER(12, 0, 0))
# define CXX_HAS_CONSTEXPR                      (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_DECLTYPE                       (CXX_INTEL >= CXX_MAKE_VER(12, 0, 0))
# define CXX_HAS_DEFAULT_FUNCTION_TEMPLATE_ARGS (CXX_INTEL >= CXX_MAKE_VER(13, 0, 0))
# define CXX_HAS_DEFAULTED_FUNCTIONS            (CXX_INTEL >= CXX_MAKE_VER(12, 0, 0))
# define CXX_HAS_DELEGATING_CONSTRUCTORS        (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_DELETED_FUNCTIONS              (CXX_INTEL >= CXX_MAKE_VER(12, 0, 0))
# define CXX_HAS_EXPLICIT_CONVERSIONS           (CXX_INTEL >= CXX_MAKE_VER(13, 0, 0))
# define CXX_HAS_FINAL                          (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_INHERITING_CONSTRUCTORS        (CXX_INTEL >= CXX_MAKE_VER(15, 0, 0))
# define CXX_HAS_INITIALIZER_LISTS              (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_INLINE_NAMESPACES              (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_LAMBDAS                        (CXX_INTEL >= CXX_MAKE_VER(12, 0, 0))
# define CXX_HAS_LOCAL_TYPE_TEMPLATE_ARGS       (CXX_INTEL >= CXX_MAKE_VER(12, 0, 0))
# define CXX_HAS_NOEXCEPT                       (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_NONSTATIC_MEMBER_INIT          (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_NULLPTR                        (CXX_INTEL >= CXX_MAKE_VER(12, 6, 0))
# define CXX_HAS_OVERRIDE                       (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_RANGE_FOR                      (CXX_INTEL >= CXX_MAKE_VER(13, 0, 0))
# define CXX_HAS_RAW_STRING_LITERALS            (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_REFERENCE_QUALIFIED_FUNCTIONS  (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0))
# define CXX_HAS_RVALUE_REFERENCES              (CXX_INTEL >= CXX_MAKE_VER(11, 1, 0))
# define CXX_HAS_STATIC_ASSERT                  (CXX_INTEL >= CXX_MAKE_VER(11, 1, 0))
# define CXX_HAS_STRONG_ENUMS                   (CXX_INTEL >= CXX_MAKE_VER(13, 0, 0))
# define CXX_HAS_THREAD_LOCAL                   (CXX_INTEL >= CXX_MAKE_VER(15, 0, 0))
# define CXX_HAS_UNICODE_LITERALS               (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0) || (CXX_GNU_COMPAT > 0 && CXX_INTEL >= CXX_MAKE_VER(12, 6, 0)))
# define CXX_HAS_UNRESTRICTED_UNIONS            (CXX_INTEL >= CXX_MAKE_VER(14, 0, 0) && CXX_GNU_COMPAT)
# define CXX_HAS_VARIADIC_TEMPLATES             (CXX_INTEL >= CXX_MAKE_VER(12, 6, 0))

# define CXX_HAS_AGGREGATE_NSDMI                (CXX_INTEL >= CXX_MAKE_VER(16, 0, 0))
# define CXX_HAS_BINARY_LITERALS                (CXX_INTEL >= CXX_MAKE_VER(11, 0, 0))
# define CXX_HAS_CONTEXTUAL_CONVERSIONS         (CXX_INTEL >= CXX_MAKE_VER(16, 0, 0))
# define CXX_HAS_DECLTYPE_AUTO                  (CXX_INTEL >= CXX_MAKE_VER(15, 0, 0))
# define CXX_HAS_GENERIC_LAMBDAS                (CXX_INTEL >= CXX_MAKE_VER(16, 0, 0))
# define CXX_HAS_INIT_CAPTURES                  (CXX_INTEL >= CXX_MAKE_VER(15, 0, 0))
# define CXX_HAS_RELAXED_CONSTEXPR              (CXX_INTEL >= CXX_MAKE_VER(17, 0, 0))
# define CXX_HAS_VARIABLE_TEMPLATES             (CXX_INTEL >= CXX_MAKE_VER(17, 0, 0))

# define CXX_HAS_NATIVE_CHAR                    (1)
# define CXX_HAS_NATIVE_CHAR16_T                (CXX_HAS_UNICODE_LITERALS)
# define CXX_HAS_NATIVE_CHAR32_T                (CXX_HAS_UNICODE_LITERALS)
# define CXX_HAS_NATIVE_WCHAR_T                 (1)
#endif

// MSC Compiler:
//   https://msdn.microsoft.com/en-us/library/hh567368.aspx
//
// Version List:
//   16.00.0 == VS2010
//   17.00.0 == VS2012
//   18.00.0 == VS2013
//   19.00.0 == VS2015
//   19.10.0 == VS2017
#if CXX_MSC
# define CXX_HAS_X_ASSUME                       (1)
# define CXX_HAS_X_ASSUME_ALIGNED               (0)
# define CXX_HAS_X_ATTRIBUTE                    (0)
# define CXX_HAS_X_ATTRIBUTE_ALIGNED            (0)
# define CXX_HAS_X_ATTRIBUTE_ALWAYS_INLINE      (0)
# define CXX_HAS_X_ATTRIBUTE_DEPRECATED         (0)
# define CXX_HAS_X_ATTRIBUTE_NOINLINE           (0)
# define CXX_HAS_X_ATTRIBUTE_NORETURN           (0)
# define CXX_HAS_X_ATTRIBUTE_NOSANITIZE         (0)
# define CXX_HAS_X_ATTRIBUTE_OPTIMIZE           (0)
# define CXX_HAS_X_BUILTIN_ASSUME               (0)
# define CXX_HAS_X_BUILTIN_ASSUME_ALIGNED       (0)
# define CXX_HAS_X_BUILTIN_EXPECT               (0)
# define CXX_HAS_X_BUILTIN_UNREACHABLE          (0)
# define CXX_HAS_X_DECLSPEC_ALIGN               (1)
# define CXX_HAS_X_DECLSPEC_DEPRECATED          (1)
# define CXX_HAS_X_DECLSPEC_NOINLINE            (1)
# define CXX_HAS_X_DECLSPEC_NORETURN            (1)
# define CXX_HAS_X_FORCEINLINE                  (1)

# define CXX_HAS_ALIAS_TEMPLATES                (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_ALIGNAS                        (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_ALIGNOF                        (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_ATTRIBUTES                     (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_AUTO_TYPE                      (CXX_MSC >= CXX_MAKE_VER(16, 0 , 0))
# define CXX_HAS_CONSTEXPR                      (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_DECLTYPE                       (CXX_MSC >= CXX_MAKE_VER(16, 0 , 0))
# define CXX_HAS_DEFAULT_FUNCTION_TEMPLATE_ARGS (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_DEFAULTED_FUNCTIONS            (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_DELEGATING_CONSTRUCTORS        (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_DELETED_FUNCTIONS              (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_EXPLICIT_CONVERSIONS           (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_FINAL                          (CXX_MSC >= CXX_MAKE_VER(14, 0 , 0))
# define CXX_HAS_INHERITING_CONSTRUCTORS        (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_INITIALIZER_LISTS              (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_INLINE_NAMESPACES              (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_LAMBDAS                        (CXX_MSC >= CXX_MAKE_VER(16, 0 , 0))
# define CXX_HAS_LOCAL_TYPE_TEMPLATE_ARGS       (CXX_MSC >= CXX_MAKE_VER(16, 0 , 0))
# define CXX_HAS_NOEXCEPT                       (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_NONSTATIC_MEMBER_INIT          (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_NULLPTR                        (CXX_MSC >= CXX_MAKE_VER(16, 0 , 0))
# define CXX_HAS_OVERRIDE                       (CXX_MSC >= CXX_MAKE_VER(14, 0 , 0))
# define CXX_HAS_RANGE_FOR                      (CXX_MSC >= CXX_MAKE_VER(17, 0 , 0))
# define CXX_HAS_RAW_STRING_LITERALS            (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_REFERENCE_QUALIFIED_FUNCTIONS  (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_RVALUE_REFERENCES              (CXX_MSC >= CXX_MAKE_VER(16, 0 , 0))
# define CXX_HAS_STATIC_ASSERT                  (CXX_MSC >= CXX_MAKE_VER(16, 0 , 0))
# define CXX_HAS_STRONG_ENUMS                   (CXX_MSC >= CXX_MAKE_VER(14, 0 , 0))
# define CXX_HAS_THREAD_LOCAL                   (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_UNICODE_LITERALS               (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_UNRESTRICTED_UNIONS            (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_VARIADIC_TEMPLATES             (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))

# define CXX_HAS_AGGREGATE_NSDMI                (CXX_MSC >= CXX_MAKE_VER(19, 10, 0))
# define CXX_HAS_BINARY_LITERALS                (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_CONTEXTUAL_CONVERSIONS         (CXX_MSC >= CXX_MAKE_VER(18, 0 , 0))
# define CXX_HAS_DECLTYPE_AUTO                  (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_GENERIC_LAMBDAS                (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_INIT_CAPTURES                  (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))
# define CXX_HAS_RELAXED_CONSTEXPR              (CXX_MSC >= CXX_MAKE_VER(19, 10, 0))
# define CXX_HAS_VARIABLE_TEMPLATES             (CXX_MSC >= CXX_MAKE_VER(19, 0 , 0))

# define CXX_HAS_NATIVE_CHAR                    (1)
# define CXX_HAS_NATIVE_CHAR16_T                (CXX_HAS_UNICODE_LITERALS)
# define CXX_HAS_NATIVE_CHAR32_T                (CXX_HAS_UNICODE_LITERALS)
# if defined(_NATIVE_WCHAR_T_DEFINED)
#  define CXX_HAS_NATIVE_WCHAR_T                (1)
# else
#  define CXX_HAS_NATIVE_WCHAR_T                (0)
# endif
#endif

// ============================================================================
// [Target Architecture]
// ============================================================================

#if (defined(_M_X64  ) || defined(__x86_64) || defined(__x86_64__) || \
     defined(_M_AMD64) || defined(__amd64 ) || defined(__amd64__ ))
# define CXX_ARCH_X86_64     (1)
#else
# define CXX_ARCH_X86_64     (0)
#endif

#if (defined(_M_IX86 ) || defined(__X86__ ) || defined(__i386  ) || \
     defined(__IA32__) || defined(__I86__ ) || defined(__i386__) || \
     defined(__i486__) || defined(__i586__) || defined(__i686__))
# define CXX_ARCH_X86        (!CXX_ARCH_X86_64)
#else
# define CXX_ARCH_X86        (0)
#endif

#if defined(__aarch64__)
# define CXX_ARCH_ARM64      (1)
#else
# define CXX_ARCH_ARM64      (0)
#endif

#if (defined(_M_ARM  ) || defined(__arm    ) || defined(__thumb__ ) || \
     defined(_M_ARMT ) || defined(__arm__  ) || defined(__thumb2__))
# define CXX_ARCH_ARM32      (!CXX_ARCH_ARM64)
#else
# define CXX_ARCH_ARM32      (0)
#endif

#if CXX_ARCH_X86_64 || CXX_ARCH_ARM64
# define CXX_ARCH_BITS       (64)
#else
# define CXX_ARCH_BITS       (32)
#endif

#define CXX_ARCH_LE          (CXX_ARCH_X86 || CXX_ARCH_X86_64 || CXX_ARCH_ARM32 || CXX_ARCH_ARM64)
#define CXX_ARCH_BE          (!(CXX_ARCH_LE))

// ============================================================================
// [Target OS]
// ============================================================================

#if defined(_WIN32) || defined(_WINDOWS)
# define CXX_OS_WINDOWS      (1)
#else
# define CXX_OS_WINDOWS      (0)
#endif

#if defined(__APPLE__)
# include <TargetConditionals.h>
# define CXX_OS_MAC          (TARGET_OS_MAC)
# define CXX_OS_IOS          (TARGET_OS_IPHONE)
#else
# define CXX_OS_MAC          (0)
# define CXX_OS_IOS          (0)
#endif

#if defined(__ANDROID__)
# define CXX_OS_ANDROID      (1)
#else
# define CXX_OS_ANDROID      (0)
#endif

#if defined(__linux__) || defined(__ANDROID__)
# define CXX_OS_LINUX        (1)
#else
# define CXX_OS_LINUX        (0)
#endif

#if defined(__NetBSD__)
# define CXX_OS_NETBSD       (1)
#else
# define CXX_OS_NETBSD       (0)
#endif

#if defined(__FreeBSD__)
# define CXX_OS_FREEBSD      (1)
#else
# define CXX_OS_FREEBSD      (0)
#endif

#if defined(__OpenBSD__)
# define CXX_OS_OPENBSD      (1)
#else
# define CXX_OS_OPENBSD      (0)
#endif

#if defined(__DragonFly__)
# define CXX_OS_DRAGONFLYBSD (1)
#else
# define CXX_OS_DRAGONFLYBSD (0)
#endif

#if defined(__QNXNTO__)
# define CXX_OS_QNX          (1)
#else
# define CXX_OS_QNX          (0)
#endif

#if defined(__sun)
# define CXX_OS_SOLARIS      (1)
#else
# define CXX_OS_SOLARIS      (0)
#endif

#if defined(__CYGWIN__)
# define CXX_OS_CYGWIN       (1)
#else
# define CXX_OS_CYGWIN       (0)
#endif

#define CXX_OS_BSD           (CXX_OS_FREEBSD || CXX_OS_DRAGONFLYBSD  || CXX_OS_NETBSD || CXX_OS_OPENBSD || CXX_OS_MAC)

// ============================================================================
// [Export|Import]
// ============================================================================

#if CXX_OS_WINDOWS
# if (CXX_GNU || CXX_CLANG) && !CXX_MINGW
#  define CXX_EXPORT __attribute__((__dllexport__))
#  define CXX_IMPORT __attribute__((__dllimport__))
# else
#  define CXX_EXPORT __declspec(dllexport)
#  define CXX_IMPORT __declspec(dllimport)
# endif
#else
# if CXX_CLANG || CXX_GNU >= CXX_MAKE_VER(4, 0, 0) || CXX_GNU_COMPAT
#  define CXX_EXPORT __attribute__((__visibility__("default")))
#  define CXX_IMPORT
# else
#  define CXX_EXPORT
#  define CXX_IMPORT
# endif
#endif

// ============================================================================
// [Function Attributes]
// ============================================================================

#if CXX_ARCH_X86
# if CXX_HAS_X_ATTRIBUTE
#  define CXX_CDECL      __attribute__((__cdecl__))
#  define CXX_STDCALL    __attribute__((__stdcall__))
#  define CXX_FASTCALL   __attribute__((__fastcall__))
#  define CXX_REGPARM(N) __attribute__((__regparm__(N)))
# else
#  define CXX_CDECL      __cdecl
#  define CXX_STDCALL    __stdcall
#  define CXX_FASTCALL   __fastcall
#  define CXX_REGPARM(N)
# endif
#else
# define CXX_CDECL
# define CXX_STDCALL
# define CXX_FASTCALL
# define CXX_REGPARM(N)
#endif

#if CXX_HAS_X_ATTRIBUTE_ALWAYS_INLINE
# define CXX_FORCEINLINE inline __attribute__((__always_inline__))
#elif CXX_HAS_X_FORCEINLINE
# define CXX_FORCEINLINE __forceinline
#else
# define CXX_FORCEINLINE inline
#endif

#if CXX_HAS_X_ATTRIBUTE_NOINLINE
# define CXX_NOINLINE __attribute__((__noinline__))
#elif CXX_HAS_X_DECLSPEC_NOINLINE
# define CXX_NOINLINE __declspec(noinline)
#else
# define CXX_NOINLINE
#endif

#if CXX_HAS_X_ATTRIBUTE_NORETURN
# define CXX_NORETURN __attribute__((__noreturn__))
#elif CXX_HAS_X_DECLSPEC_NORETURN
# define CXX_NORETURN __declspec(noreturn)
#else
# define CXX_NORETURN
#endif


// ============================================================================
// [Likely / Unlikely]
// ============================================================================

#if CXX_HAS_X_BUILTIN_EXPECT
# define CXX_LIKELY(EXP) __builtin_expect(!!(EXP), 1)
# define CXX_UNLIKELY(EXP) __builtin_expect(!!(EXP), 0)
#else
# define CXX_LIKELY(EXP) (EXP)
# define CXX_UNLIKELY(EXP) (EXP)
#endif

// ============================================================================
// [CXX_ALIGN]
// ============================================================================

#if CXX_HAS_X_DECLSPEC_ALIGN
# define CXX_ALIGN_TYPE(TYPE, N_ALIGN) __declspec(align(N_ALIGN)) TYPE
# define CXX_ALIGN_DECL(TYPE, VARIABLE, N_ALIGN) __declspec(align(N_ALIGN)) TYPE VARIABLE
#elif CXX_HAS_X_ATTRIBUTE_ALIGNED
# define CXX_ALIGN_TYPE(TYPE, N_ALIGN) __attribute__((__aligned__(N_ALIGN))) TYPE
# define CXX_ALIGN_DECL(TYPE, VARIABLE, N_ALIGN) TYPE __attribute__((__aligned__(N_ALIGN))) VARIABLE
#else
# define CXX_ALIGN_TYPE(TYPE, N_ALIGN) TYPE
# define CXX_ALIGN_DECL(TYPE, VARIABLE, N_ALIGN) TYPE VARIABLE
#endif

// ============================================================================
// [Assumptions]
// ============================================================================

#if CXX_HAS_X_ASSUME
# define CXX_ASSUME(EXP) __assume(EXP)
#elif CXX_HAS_X_BUILTIN_ASSUME
# define CXX_ASSUME(EXP) __builtin_assume(EXP)
#elif CXX_HAS_X_BUILTIN_UNREACHABLE
# define CXX_ASSUME(EXP) do { if (!(EXP)) __builtin_unreachable(); } while (0)
#else
# define CXX_ASSUME(EXP) ((void)0)
#endif

#if CXX_HAS_X_ASSUME_ALIGNED
# define CXX_ASSUME_ALIGNED(PTR, N_ALIGN) __assume_aligned(PTR, N_ALIGN)
#elif CXX_HAS_X_BUILTIN_ASSUME_ALIGNED
# define CXX_ASSUME_ALIGNED(PTR, N_ALIGN) PTR = __builtin_assume_aligned(PTR, N_ALIGN)
#else
# define CXX_ASSUME_ALIGNED(PTR, N_ALIGN) ((void)0)
#endif

// ============================================================================
// [Annotations]
// ============================================================================

#define CXX_UNUSED(X) (void)(X)

#if CXX_CLANG && CXX_CPLUSPLUS >= 201103L
# define CXX_FALLTHROUGH [[clang::fallthrough]]
#elif CXX_GNU >= CXX_MAKE_VER(7, 0, 0)
# define CXX_FALLTHROUGH __attribute__((__fallthrough__))
#else
# define CXX_FALLTHROUGH (void)0 /* fallthrough */
#endif

// ============================================================================
// [Other General Purpose Macros]
// ============================================================================

#define CXX_ARRAY_SIZE(X) (sizeof(X) / sizeof((X)[0]))
#define CXX_OFFSET_OF(STRUCT, MEMBER) ((size_t)((const char*)&((const (STRUCT)*)0x1)->MEMBER) - 1)

// ============================================================================
// [Guard]
// ============================================================================

#endif
