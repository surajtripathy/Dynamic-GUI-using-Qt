#############################################################################
# Makefile for building: Assignment
# Generated by qmake (2.01a) (Qt 4.6.2) on: Tue May 30 19:36:14 2017
# Project:  Assignment.pro
# Template: app
# Command: /opt/qtsdk-2010.02/qt/bin/qmake -spec /opt/qtsdk-2010.02/qt/mkspecs/linux-g++-64 -unix CONFIG+=debug -o Makefile Assignment.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_DEPRECATED_WARNINGS -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/opt/qtsdk-2010.02/qt/mkspecs/linux-g++-64 -I. -I/opt/qtsdk-2010.02/qt/include/QtCore -I/opt/qtsdk-2010.02/qt/include/QtGui -I/opt/qtsdk-2010.02/qt/include -I/usr/lib/qwt-5.2.0/include -I/usr/lib/qledplugin -I. -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-rpath,/opt/qtsdk-2010.02/qt/lib
LIBS          = $(SUBLIBS)  -L/opt/qtsdk-2010.02/qt/lib -lqwt -lqledplugin -lQtGui -L/opt/qtsdk-2010.02/qt/lib -L/usr/X11R6/lib64 -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /opt/qtsdk-2010.02/qt/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		a1.cpp \
		child.cpp moc_a1.cpp \
		moc_child.cpp
OBJECTS       = main.o \
		a1.o \
		child.o \
		moc_a1.o \
		moc_child.o
DIST          = /opt/qtsdk-2010.02/qt/mkspecs/common/g++.conf \
		/opt/qtsdk-2010.02/qt/mkspecs/common/unix.conf \
		/opt/qtsdk-2010.02/qt/mkspecs/common/linux.conf \
		/opt/qtsdk-2010.02/qt/mkspecs/qconfig.pri \
		/opt/qtsdk-2010.02/qt/mkspecs/features/qt_functions.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/qt_config.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/exclusive_builds.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/default_pre.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/debug.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/default_post.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/warn_on.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/qt.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/unix/thread.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/moc.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/resources.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/uic.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/yacc.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/lex.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/include_source_dir.prf \
		Assignment.pro
QMAKE_TARGET  = Assignment
DESTDIR       = 
TARGET        = Assignment

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_a1.h ui_child.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Assignment.pro  /opt/qtsdk-2010.02/qt/mkspecs/linux-g++-64/qmake.conf /opt/qtsdk-2010.02/qt/mkspecs/common/g++.conf \
		/opt/qtsdk-2010.02/qt/mkspecs/common/unix.conf \
		/opt/qtsdk-2010.02/qt/mkspecs/common/linux.conf \
		/opt/qtsdk-2010.02/qt/mkspecs/qconfig.pri \
		/opt/qtsdk-2010.02/qt/mkspecs/features/qt_functions.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/qt_config.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/exclusive_builds.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/default_pre.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/debug.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/default_post.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/warn_on.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/qt.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/unix/thread.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/moc.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/resources.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/uic.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/yacc.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/lex.prf \
		/opt/qtsdk-2010.02/qt/mkspecs/features/include_source_dir.prf \
		/opt/qtsdk-2010.02/qt/lib/libQtGui.prl \
		/opt/qtsdk-2010.02/qt/lib/libQtCore.prl
	$(QMAKE) -spec /opt/qtsdk-2010.02/qt/mkspecs/linux-g++-64 -unix CONFIG+=debug -o Makefile Assignment.pro
/opt/qtsdk-2010.02/qt/mkspecs/common/g++.conf:
/opt/qtsdk-2010.02/qt/mkspecs/common/unix.conf:
/opt/qtsdk-2010.02/qt/mkspecs/common/linux.conf:
/opt/qtsdk-2010.02/qt/mkspecs/qconfig.pri:
/opt/qtsdk-2010.02/qt/mkspecs/features/qt_functions.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/qt_config.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/exclusive_builds.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/default_pre.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/debug.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/default_post.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/warn_on.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/qt.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/unix/thread.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/moc.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/resources.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/uic.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/yacc.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/lex.prf:
/opt/qtsdk-2010.02/qt/mkspecs/features/include_source_dir.prf:
/opt/qtsdk-2010.02/qt/lib/libQtGui.prl:
/opt/qtsdk-2010.02/qt/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /opt/qtsdk-2010.02/qt/mkspecs/linux-g++-64 -unix CONFIG+=debug -o Makefile Assignment.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Assignment1.0.0 || $(MKDIR) .tmp/Assignment1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Assignment1.0.0/ && $(COPY_FILE) --parents a1.h child.h .tmp/Assignment1.0.0/ && $(COPY_FILE) --parents main.cpp a1.cpp child.cpp .tmp/Assignment1.0.0/ && $(COPY_FILE) --parents a1.ui child.ui .tmp/Assignment1.0.0/ && (cd `dirname .tmp/Assignment1.0.0` && $(TAR) Assignment1.0.0.tar Assignment1.0.0 && $(COMPRESS) Assignment1.0.0.tar) && $(MOVE) `dirname .tmp/Assignment1.0.0`/Assignment1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Assignment1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_a1.cpp moc_child.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_a1.cpp moc_child.cpp
moc_a1.cpp: child.h \
		a1.h
	/opt/qtsdk-2010.02/qt/bin/moc $(DEFINES) $(INCPATH) a1.h -o moc_a1.cpp

moc_child.cpp: child.h
	/opt/qtsdk-2010.02/qt/bin/moc $(DEFINES) $(INCPATH) child.h -o moc_child.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_a1.h ui_child.h
compiler_uic_clean:
	-$(DEL_FILE) ui_a1.h ui_child.h
ui_a1.h: a1.ui
	/opt/qtsdk-2010.02/qt/bin/uic a1.ui -o ui_a1.h

ui_child.h: child.ui
	/opt/qtsdk-2010.02/qt/bin/uic child.ui -o ui_child.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp a1.h \
		child.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

a1.o: a1.cpp a1.h \
		child.h \
		ui_a1.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o a1.o a1.cpp

child.o: child.cpp child.h \
		ui_child.h \
		a1.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o child.o child.cpp

moc_a1.o: moc_a1.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_a1.o moc_a1.cpp

moc_child.o: moc_child.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_child.o moc_child.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

