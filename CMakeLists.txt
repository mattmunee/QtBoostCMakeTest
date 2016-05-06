cmake_minimum_required(VERSION 2.6)
PROJECT(QtBoostCMakeTestSln)
 
FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})

FIND_PACKAGE(Boost 1.58.0)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS})
 
QT4_WRAP_UI(UISrcs mainwindow.ui)
QT4_WRAP_CPP(MOCSrcs mainwindow.h)
 
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})
 
ADD_EXECUTABLE(QtBoostCMakeTestApp main.cpp mainwindow.cpp ${MOCSrcs} ${UISrcs})
TARGET_LINK_LIBRARIES(QtBoostCMakeTestApp ${QT_LIBRARIES})
