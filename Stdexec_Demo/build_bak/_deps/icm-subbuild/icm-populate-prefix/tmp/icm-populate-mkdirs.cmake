# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/icm-src"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/icm-build"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/icm-subbuild/icm-populate-prefix"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/icm-subbuild/icm-populate-prefix/tmp"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/icm-subbuild/icm-populate-prefix/src/icm-populate-stamp"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/icm-subbuild/icm-populate-prefix/src"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/icm-subbuild/icm-populate-prefix/src/icm-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/icm-subbuild/icm-populate-prefix/src/icm-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/icm-subbuild/icm-populate-prefix/src/icm-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
