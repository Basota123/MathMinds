cmake_minimum_required(VERSION 3.5)

project(graphs VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Core)




#target_link_libraries(mytarget PRIVATE Qt6::Widgets)

set(TS_FILES graphs_ru_RU.ts)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(graphs
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        null_task.h null_task.cpp null_task.ui
        graph.h graph.cpp

        fifth_task.h fifth_task.cpp fifth_task.ui
        sixth_task.h sixth_task.cpp sixth_task.ui
        seventh_task.h seventh_task.cpp seventh_task.ui
        second_task.h second_task.cpp second_task.ui
        designer.h designer.cpp
        fourth_task.h fourth_task.cpp fourth_task.ui
        first_task.h first_task.cpp first_task.ui
        third_task.h third_task.cpp third_task.ui
        eighth_task.h eighth_task.cpp eighth_task.ui
        prufer_code.h prufer_code.cpp prufer_code.ui
        prufer_decode.h prufer_decode.cpp prufer_decode.ui

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET graphs APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(graphs SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(graphs
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(graphs PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(graphs PRIVATE Qt6::Core)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.graphs)
endif()
set_target_properties(graphs PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS graphs
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(graphs)
endif()
