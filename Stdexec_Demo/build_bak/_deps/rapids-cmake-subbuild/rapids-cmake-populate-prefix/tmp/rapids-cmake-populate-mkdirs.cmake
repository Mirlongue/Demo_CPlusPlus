# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/rapids-cmake-src"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/rapids-cmake-build"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/rapids-cmake-subbuild/rapids-cmake-populate-prefix"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/rapids-cmake-subbuild/rapids-cmake-populate-prefix/tmp"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/rapids-cmake-subbuild/rapids-cmake-populate-prefix/src/rapids-cmake-populate-stamp"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/rapids-cmake-subbuild/rapids-cmake-populate-prefix/src"
  "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/rapids-cmake-subbuild/rapids-cmake-populate-prefix/src/rapids-cmake-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/rapids-cmake-subbuild/rapids-cmake-populate-prefix/src/rapids-cmake-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Reposity_github/CPlusPlus/Stdexec_Demo/build/_deps/rapids-cmake-subbuild/rapids-cmake-populate-prefix/src/rapids-cmake-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
