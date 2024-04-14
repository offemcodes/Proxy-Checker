# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/dev/Proxy_Check/build/Desktop-Release/_deps/curl-src"
  "/home/dev/Proxy_Check/build/Desktop-Release/_deps/curl-build"
  "/home/dev/Proxy_Check/build/Desktop-Release/_deps/curl-subbuild/curl-populate-prefix"
  "/home/dev/Proxy_Check/build/Desktop-Release/_deps/curl-subbuild/curl-populate-prefix/tmp"
  "/home/dev/Proxy_Check/build/Desktop-Release/_deps/curl-subbuild/curl-populate-prefix/src/curl-populate-stamp"
  "/home/dev/Proxy_Check/build/Desktop-Release/_deps/curl-subbuild/curl-populate-prefix/src"
  "/home/dev/Proxy_Check/build/Desktop-Release/_deps/curl-subbuild/curl-populate-prefix/src/curl-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/dev/Proxy_Check/build/Desktop-Release/_deps/curl-subbuild/curl-populate-prefix/src/curl-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/dev/Proxy_Check/build/Desktop-Release/_deps/curl-subbuild/curl-populate-prefix/src/curl-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
