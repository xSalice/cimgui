#undef NDEBUG

// Redefine IMGUI_IMPL_API for Win32 handler functions to avoid double extern
#undef IMGUI_IMPL_API
#define IMGUI_IMPL_API __declspec(dllexport)