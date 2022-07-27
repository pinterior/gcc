#undef TARGET_RUN386
#define TARGET_RUN386

#undef LIB_SPEC
#define LIB_SPEC "-lc"

#undef STARTFILE_SPEC
#define STARTFILE_SPEC "crt0.o%s crti.o%s crtbeginT.o%s"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC "crtend.o%s crtn.o%s"

#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS()      \
  do {                                \
    builtin_define_std ("RUN386");    \
    builtin_define_std ("MSDOS");    \
    builtin_assert ("system=run386");   \
    builtin_assert ("system=msdos");   \
  } while(0);
