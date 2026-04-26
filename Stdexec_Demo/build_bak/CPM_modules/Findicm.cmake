include("D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/cmake/CPM_0.38.5.cmake")
CPMAddPackage("NAME;icm;VERSION;1.5.0;GITHUB_REPOSITORY;iboB/icm;GIT_TAG;v1.5.0;VERSION;1.5.0;PATCH_COMMAND;git;restore;--;.;&&;git;apply;D:/Reposity_github/CPlusPlus/Stdexec_Demo/stdexec/cmake/cpm/patches/icm/regex-build-error.diff")
set(icm_FOUND TRUE)