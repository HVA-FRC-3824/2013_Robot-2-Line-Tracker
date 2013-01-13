# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/Robot-2-Line-Tracker



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = Robot-2-Line-Tracker/$(MODE_DIR)/Robot-2-Line-Tracker.out


#Rules

# Robot-2-Line-Tracker
ifeq ($(DEBUG_MODE),1)
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Robot-2-Line-Tracker/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Robot-2-Line-Tracker/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
Robot-2-Line-Tracker/$(MODE_DIR)/% : IDE_DEFINES = 
Robot-2-Line-Tracker/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Robot-2-Line-Tracker/$(MODE_DIR)/% : DEFINES = 
Robot-2-Line-Tracker/$(MODE_DIR)/% : EXPAND_DBG = 0
Robot-2-Line-Tracker/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Robot-2-Line-Tracker/$(MODE_DIR)/% : CPU = PPC603
Robot-2-Line-Tracker/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Robot-2-Line-Tracker/$(MODE_DIR)/% : TOOL = gnu
Robot-2-Line-Tracker/$(MODE_DIR)/% : TOOL_PATH = 
Robot-2-Line-Tracker/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
Robot-2-Line-Tracker/$(MODE_DIR)/% : LIBPATH = 
Robot-2-Line-Tracker/$(MODE_DIR)/% : LIBS = 
Robot-2-Line-Tracker/$(MODE_DIR)/% : OBJ_DIR := Robot-2-Line-Tracker/$(MODE_DIR)

Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/DisplayButtons.o : $(PRJ_ROOT_DIR)/Commands/DisplayButtons.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Drivetowall.o : $(PRJ_ROOT_DIR)/Commands/Drivetowall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Followline.o : $(PRJ_ROOT_DIR)/Commands/Followline.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Searchforline.o : $(PRJ_ROOT_DIR)/Commands/Searchforline.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/ShowGyroValue.o : $(PRJ_ROOT_DIR)/Commands/ShowGyroValue.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/TeleopJoystickDrive.o : $(PRJ_ROOT_DIR)/Commands/TeleopJoystickDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/TeleopXboxDrive.o : $(PRJ_ROOT_DIR)/Commands/TeleopXboxDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Turnleft.o : $(PRJ_ROOT_DIR)/Commands/Turnleft.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Turnright.o : $(PRJ_ROOT_DIR)/Commands/Turnright.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/UpdateTurnPIDValues.o : $(PRJ_ROOT_DIR)/Commands/UpdateTurnPIDValues.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Drivetrain.o : $(PRJ_ROOT_DIR)/Subsystems/Drivetrain.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Linetracker.o : $(PRJ_ROOT_DIR)/Subsystems/Linetracker.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Orientation.o : $(PRJ_ROOT_DIR)/Subsystems/Orientation.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Rangefinder.o : $(PRJ_ROOT_DIR)/Subsystems/Rangefinder.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_Robot-2-Line-Tracker = Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/AutonomousCommand.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/DisplayButtons.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Drivetowall.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Followline.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Searchforline.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/ShowGyroValue.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/TeleopJoystickDrive.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/TeleopXboxDrive.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Turnleft.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Turnright.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/UpdateTurnPIDValues.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/OI.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Robot.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/RobotMap.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Drivetrain.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Linetracker.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Orientation.o \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Rangefinder.o

Robot-2-Line-Tracker/$(MODE_DIR)/Robot-2-Line-Tracker.out : $(OBJECTS_Robot-2-Line-Tracker)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_Robot-2-Line-Tracker) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_Robot-2-Line-Tracker) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Robot-2-Line-Tracker/$(MODE_DIR)/Robot-2-Line-Tracker_compile_file : $(FILE) ;

_clean :: Robot-2-Line-Tracker/$(MODE_DIR)/Robot-2-Line-Tracker_clean

Robot-2-Line-Tracker/$(MODE_DIR)/Robot-2-Line-Tracker_clean : 
	$(TRACE_FLAG)if [ -d "Robot-2-Line-Tracker" ]; then cd "Robot-2-Line-Tracker"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/AutonomousCommand.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/DisplayButtons.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Drivetowall.d \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Followline.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Searchforline.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/ShowGyroValue.d \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/TeleopJoystickDrive.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/TeleopXboxDrive.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Turnleft.d \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/Turnright.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Commands/UpdateTurnPIDValues.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/OI.d \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Robot.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/RobotMap.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Drivetrain.d \
	 Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Linetracker.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Orientation.d Robot-2-Line-Tracker/$(MODE_DIR)/Objects/Robot-2-Line-Tracker/Subsystems/Rangefinder.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
