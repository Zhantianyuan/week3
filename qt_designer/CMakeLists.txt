# hello_qt_cm/CMakeLists.txt -----------------------------------------
# This is the minimum cmake version needed for Qt
cmake_minimum_required( VERSION 2.8.11 )

# Name of the project
project( qt_ui )

# The CMake build process might generate some new files in the current
# directory. This makes sure they can be found.
set( CMAKE_INCLUDE_CURRENT_DIR ON )

# This allows CMake to run one of Qt's build tools called moc
# if it is needed. moc.exe can be found in Qt's bin directory.
# We'll look at what moc does later.
set( CMAKE_AUTOMOC ON )
set( CMAKE_AUTOUIC ON )

# Find the Qt widgets package. This locates the relevant include and
# lib directories, and the necessary static libraries for linking.
find_package( Qt5Widgets )

# Just for show: This is what find_package has found:
message( STATUS "Qt5Widgets Include Dirs: ${Qt5Widgets_INCLUDE_DIRS}" )
message( STATUS "Qt5Widgets Libraries: ${Qt5Widgets_LIBRARIES}" )

# Same as previously: define the executable and it's sources.
add_executable( hello_qt WIN32
                main.cpp mainwindow.cpp
                mainwindow.h
                mainwindow.ui
		edititemdialog.h
		edititemdialog.cpp
		edititemdialog.ui
		stockitem.cpp
		stockitem.h
		stockitemlistmodel.cpp
		stockitemlistmodel.h
 )

# Tell CMake that the executable depends on the Qt::Widget libraries.
target_link_libraries( hello_qt Qt5::Widgets )
# --------------------------------------------------------------------
