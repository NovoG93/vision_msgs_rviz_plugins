#ifndef DETECTION_3D_ARRAY_DISPLAY_VISIBILITY_CONTROL_HPP
#define DETECTION_3D_ARRAY_DISPLAY_VISIBILITY_CONTROL_HPP

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
    #ifdef __GNUC__
        #define Detection3DArrayDisplay_EXPORT __attribute__((dllexport))
        #define Detection3DArrayDisplay_IMPORT __attribute__((dllimport))
    #else
        #define Detection3DArrayDisplay_EXPORT __declspec(dllexport)
        #define Detection3DArrayDisplay_IMPORT __declspec(dllimport)
    #endif
    #ifdef Detection3DArrayDisplay_BUILDING_LIBRARY
        #define Detection3DArrayDisplay_PUBLIC Detection3DArrayDisplay_EXPORT
    #else
        #define Detection3DArrayDisplay_PUBLIC Detection3DArrayDisplay_IMPORT
    #endif
    #define Detection3DArrayDisplay_PUBLIC_TYPE Detection3DArrayDisplay_PUBLIC
    #define Detection3DArrayDisplay_LOCAL
#else
    #define Detection3DArrayDisplay_EXPORT __attribute__((visibility("default")))
    #define Detection3DArrayDisplay_IMPORT
    #if __GNUC__ >= 4
        #define Detection3DArrayDisplay_PUBLIC __attribute__((visibility("default")))
        #define Detection3DArrayDisplay_LOCAL __attribute__((visibility("hidden")))
    #else
        #define Detection3DArrayDisplay_PUBLIC
        #define Detection3DArrayDisplay_LOCAL
    #endif
    #define Detection3DArrayDisplay_PUBLIC_TYPE
#endif

#endif // DETECTION_3D_ARRAY_DISPLAY_VISIBILITY_CONTROL_HPP