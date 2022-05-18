## This is a test repository to verify the correct interaction betwen the following two libraries:


zf_log
[![Build Status](https://travis-ci.org/wonder-mice/zf_log.svg?branch=master)](https://travis-ci.org/wonder-mice/zf_log)
[![Build Status](https://ci.appveyor.com/api/projects/status/u9rmuaw147q578w0/branch/master?svg=true)](https://ci.appveyor.com/project/wonder-mice/zf-log/branch/master)
[![Gitter Chat](https://badges.gitter.im/wonder-mice/zf_log.svg)](https://gitter.im/wonder-mice/zf_log?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
========

### Core logging library for C, Objective-C and C++

Following the [Unix way](https://en.wikipedia.org/wiki/Unix_philosophy), this
library provides the logging core which can be used directly or extended. In
essence, it's a thin wrapper around snprintf() function. By implementing less
than 20% of functionality found in more sophisticated and feature reach
libraries, it covers more than 80% of common use cases. Found to be
particularly useful in cross-platform applications and on mobile/embedded
platforms. Focus is made on simplicity, ease of use and performance (to be
more precise - low overhead).

Official github page : https://github.com/wonder-mice/zf_log

catch2
[![Github Releases](https://img.shields.io/github/release/catchorg/catch2.svg)](https://github.com/catchorg/catch2/releases)
[![Linux build status](https://github.com/catchorg/Catch2/actions/workflows/linux-simple-builds.yml/badge.svg)](https://github.com/catchorg/Catch2/actions/workflows/linux-simple-builds.yml)
[![Linux build status](https://github.com/catchorg/Catch2/actions/workflows/linux-other-builds.yml/badge.svg)](https://github.com/catchorg/Catch2/actions/workflows/linux-other-builds.yml)
[![MacOS build status](https://github.com/catchorg/Catch2/actions/workflows/mac-builds.yml/badge.svg)](https://github.com/catchorg/Catch2/actions/workflows/mac-builds.yml)
[![Build Status](https://ci.appveyor.com/api/projects/status/github/catchorg/Catch2?svg=true&branch=devel)](https://ci.appveyor.com/project/catchorg/catch2)
[![Code Coverage](https://codecov.io/gh/catchorg/Catch2/branch/devel/graph/badge.svg)](https://codecov.io/gh/catchorg/Catch2)
[![Try online](https://img.shields.io/badge/try-online-blue.svg)](https://godbolt.org/z/9x9qoM)
[![Join the chat in Discord: https://discord.gg/4CWS9zD](https://img.shields.io/badge/Discord-Chat!-brightgreen.svg)](https://discord.gg/4CWS9zD)
========

Catch2 is mainly a unit testing framework for C++, but it also
provides basic micro-benchmarking features, and simple BDD macros.

Catch2's main advantage is that using it is both simple and natural.
Tests autoregister themselves and do not have to be named with valid
identifiers, assertions look like normal C++ code, and sections provide
a nice way to share set-up and tear-down code in tests.

Official github page : https://github.com/catchorg/Catch2