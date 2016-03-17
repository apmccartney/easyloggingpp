# Introduction
Easylogging++ is single header only, feature-rich, efficient logging library for C++ applications. It has been written keeping three things in mind; performance, management (setup, configure, logging, simplicity) and portability. Its highly configurable and extremely useful for small to large sized projects.
This manual is for Easylogging++ v9.80. For other versions please refer to corresponding [release](https://github.com/easylogging/easyloggingpp/releases) on github.

## Regarding the Los Alamos National Laboratory Fork 

This is a fork of the [Easylogging++ framework](https://github.com/easylogging/easyloggingpp) originally developed by [Majid Khan](https://github.com/mkhan3189).
Additions and revisions made to the original work as part of this fork are subject to the terms specified in the `License.lanl` file.

### Why yet another library
If you are working on a small utility or large project in C++, this library can be handy. Its based on single header and does not require linking or installation. You can import into your project as if its part of your project. This library has been designed with various thoughts in mind (i.e, portibility, performance, usability, features and easy to setup).

Why yet another library? Well, answer is pretty straight forward, use it as if you wrote it so you can fix issues (if any) as you go or raise them on github. In addition to that, I have not seen any logging library based on single-header with such a design where you can configure on the go and get the same performance. I have seen other single-header logging libraries for C++ but either they use external libraries, e.g, boost, Qt to support certain features like threading, regular expression or date etc. This library has everything built-in to prevent usage of external libraries, not that I don't like those libraries, in fact I love them, but because not all projects use these libraries, I couldn't take risk of depending on them.

### Features at a glance
Easylogging++ is feature-rich containing many features that both typical and advanced developer will require while writing a software;
 * Highly configurable
 * Extremely fast
 * Thread and type safe
 * Cross-platform
 * Custom log patterns
 * Conditional and occasional logging
 * Performance tracking
 * Verbose logging
 * Crash handling
 * Helper CHECK macros
 * STL logging
 * Third-party library logging (Qt, boost, wxWidgets etc)
 * Extensible (Logging your own class or third-party class)
 * And many more...

### Future
We see Easylogging++ with bright future. Plans are to write wrappers of this library to use in other types of C++ based projects, e.g, [QML Logging](https://github.com/easylogging/qmllogging) etc. Since we are low on resources, it may take some time, but it will certainly be available and would be worked on in regular fasion.

