# Copyright 1994-2021 The MathWorks, Inc.
#
# File    : ert_lcc64.tmf   
#
# Abstract:
#       Template makefile for building a PC-based stand-alone embedded real-time 
#       version of Simulink model using generated C code and 
#			LCC compiler Version 2.4
#
#       This makefile attempts to conform to the guidelines specified in the
#       IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (gmake) which is located in matlabroot/bin/win64.
#
#       Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#         OPT_OPTS       - Optimization options. Default is none. To enable 
#                          debugging specify as OPT_OPTS=-g4. 
#         OPTS           - User specific compile options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths 
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#                          (For Lcc, have a '/'as file separator before the 
#                          file name instead of a '\' . 
#                          i.e.,  d:\work\proj1/myfile.c - reqd for 'gmake')
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see ert.tlc

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = "%MATLAB%\bin\win64\gmake"
SHELL           = cmd
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = any

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = "LCC-win64 v2.4.1 | gmake (64-bit Windows)"

MAKEFILE_FILESEP = /

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link. 
#  NUMST               - Number of sample times
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done,
#                        if 0, the generated code runs indefinitely
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead 
#                        of executable (1/0)?
#  MAKEFILEBUILDER_TGT - Is this build performed by the MakefileBuilder class
#                        e.g. to create a PIL executable?
#  STANDALONE_SUPPRESS_EXE - Build the standalone target but only create object code modules 
#                            and do not build an executable

MODEL                = EvPowertrainController
MODULES              = EvPowertrainController.c EvPowertrainController_capi.c
PRODUCT              = EvPowertrainControllerlib.lib
MAKEFILE             = EvPowertrainController.mk
MATLAB_ROOT          = C:/Program Files/MATLAB/R2023b
ALT_MATLAB_ROOT      = C:/PROGRA~1/MATLAB/R2023b
START_DIR            = D:/Full_EV_Model_WithBatTemp_Anomalous/EV/Work
S_FUNCTIONS_LIB      = 
NUMST                = 2
NCSTATES             = 0
BUILDARGS            =  GENERATE_ERT_S_FUNCTION=0 GENERATE_ASAP2=0 EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 OPTS="-DIS_SIM_TARGET -DMATLAB_MEX_FILE -DTID01EQ=0"
MULTITASKING         = 0
INTEGER_CODE         = 0
MAT_FILE             = 0
ALLOCATIONFCN        = 0
ONESTEPFCN           = 0
TERMFCN              = 1
MULTI_INSTANCE_CODE  = 0
CLASSIC_INTERFACE    = 0
MODELREFS            = 
SHRLIBTARGET         = 0
MAKEFILEBUILDER_TGT  = 0
ENABLE_SLEXEC_SSBRIDGE  = 1
STANDALONE_SUPPRESS_EXE = 0
OPTIMIZATION_FLAGS      = 
ADDITIONAL_LDFLAGS      = 
DEFINES_CUSTOM          = 
DEFINES_OTHER           = -DHAVESTDIO -DMDL_REF_SIM_TGT=1
COMPILE_FLAGS_OTHER     = 
SYSTEM_LIBS             = -L"C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft" libmwipp.lib libfixedpoint.lib libmwmathutil.lib libmwsl_AsyncioQueue.lib sf_runtime.lib libmwslexec_simlog.lib libmwcoder_ToAsyncQueueTgtAppSvc.lib libmwsl_simtarget_instrumentation.lib libmwsl_simtarget_core.lib libmwstringutil.lib libemlrt.lib
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0

#--------------------------- Model and reference models -----------------------
MODELLIB                  = EvPowertrainControllerlib.lib
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = EvPowertrainController_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ../../..
FMT_RELATIVE_PATH_TO_ANCHOR   = $(subst /,\,$(RELATIVE_PATH_TO_ANCHOR))
# NONE: standalone, SIM: modelref sim, RTW: modelref coder target
MODELREF_TARGET_TYPE       = SIM
MODELREF_SFCN_SUFFIX       = _msf


#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif

#--------------------------- Tool Specifications -------------------------------

LCC = $(MATLAB_ROOT)\sys\lcc64\lcc64
include $(MATLAB_ROOT)\rtw\c\tools\lcc64tools.mak

CMD_FILE             = $(MODEL).rsp

#------------------------------ Include Path -----------------------------------

# Additional includes 

ADD_INCLUDES = \
	-I$(START_DIR) \
	-I$(START_DIR)/slprj/sim/EvPowertrainController \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common \
	-I$(MATLAB_ROOT)/rtw/c/ert \
	-I$(START_DIR)/slprj/sim/_sharedutils \


# see COMPILER_INCLUDES from lcctool.mak

INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(ADD_INCLUDES) \
           $(COMPILER_INCLUDES) $(USER_INCLUDES)

#-------------------------------- C Flags --------------------------------------

# Optimization Options
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
OPTS =

# Compiler options, etc:
ifneq ($(OPTIMIZATION_FLAGS),)
CC_OPTS = $(OPTS) $(ANSI_OPTS) $(COMPILE_FLAGS_OTHER) $(OPTIMIZATION_FLAGS)
else
CC_OPTS = $(OPTS) $(ANSI_OPTS) $(COMPILE_FLAGS_OTHER) $(OPT_OPTS) 
endif

# Defines
CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DNUMST=$(NUMST) -DNCSTATES=$(NCSTATES) \
		  -DMAT_FILE=$(MAT_FILE) -DINTEGER_CODE=$(INTEGER_CODE) \
		  -DONESTEPFCN=$(ONESTEPFCN) -DTERMFCN=$(TERMFCN) \
		  -DHAVESTDIO -DMULTI_INSTANCE_CODE=$(MULTI_INSTANCE_CODE) \
		  -DCLASSIC_INTERFACE=$(CLASSIC_INTERFACE) \
		  -DALLOCATIONFCN=$(ALLOCATIONFCN)

ifeq ($(MODELREF_TARGET_TYPE),SIM)
ifneq ($(ENABLE_SLEXEC_SSBRIDGE), 0)
CPP_REQ_DEFINES += -DENABLE_SLEXEC_SSBRIDGE=$(ENABLE_SLEXEC_SSBRIDGE)
endif
else
CPP_REQ_DEFINES += -DMT=$(MULTITASKING)
endif

CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

DEFINES = $(DEFINES_CUSTOM) $(CPP_REQ_DEFINES) $(DEFINES_OTHER)

CFLAGS = $(DEFAULT_CFLAGS) $(CC_OPTS) $(DEFINES) $(INCLUDES) -w -noregistrylookup

# Additional flags required for SIM target
CFLAGS += -dll -Zp8 -noregistrylookup -DLCC_WIN64

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LDFLAGS = -s -L$(LIB)
else
LDFLAGS = -L$(LIB)
endif

#-------------------------- Additional Libraries ------------------------------

LIBS =


LIBS +=  $(S_FUNCTIONS_LIB)

#----------------------------- Source Files ------------------------------------
ADD_SRCS =

SRCS = $(ADD_SRCS) $(MODULES)

USER_SRCS =

USER_OBJS       = $(USER_SRCS:.c=.obj)
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

OBJS      = $(SRCS:.c=.obj) $(USER_OBJS)

DEF_FILE = $(MODEL).def

#--------------------------------- Rules ---------------------------------------
BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -o $(PRODUCT)
ifeq ($(MODELREF_TARGET_TYPE),NONE)
  ifeq ($(SHRLIBTARGET),1)
    BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -dll -entry LibMain -o $(PRODUCT)
    $(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) @$(CMD_FILE) $(LOCAL_USER_OBJS) @$(MODELREF_LINK_RSPFILE) $(LIBS) $(SYSTEM_LIBS) $(MODEL).def
	@cmd /C "echo ### Created dynamically linked library: $@"
  else
    ifeq ($(MAKEFILEBUILDER_TGT),1)
      PREBUILT_OBJS       = $(MODULES:.c=.obj)
      $(PRODUCT) : $(PREBUILT_OBJS) $(OBJS) $(MODELLIB) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) $(PREBUILT_OBJS) @$(CMD_FILE) $(LOCAL_USER_OBJS) $(MODELLIB) @$(MODELREF_LINK_RSPFILE) $(LIBS)
	@cmd /C "echo ### Created executable: $@"
    else
      ifeq ($(STANDALONE_SUPPRESS_EXE), 1)
        .PHONY: $(PRODUCT)
        $(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Created object modules $@"
      else
        $(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) @$(CMD_FILE) $(LOCAL_USER_OBJS) @$(MODELREF_LINK_RSPFILE) $(LIBS) $(SYSTEM_LIBS)
	@cmd /C "echo ### Created executable: $@"
      endif
    endif
  endif
else
 ifeq ($(MODELREF_TARGET_TYPE),SIM)  
  $(PRODUCT) : $(OBJS) $(LIBS)
	@if exist $(MODELLIB) del "$(MODELLIB)"
	$(LIBCMD) /out:$(MODELLIB) @$(CMD_FILE) $(LOCAL_USER_OBJS)
	@cmd /C "echo ### Created $(MODELLIB)"  
 else
  $(PRODUCT) : $(OBJS)
	@if exist $(MODELLIB) del "$(MODELLIB)"
	$(LIBCMD) /out:$(MODELLIB) @$(CMD_FILE) $(LOCAL_USER_OBJS)
	@cmd /C "echo ### Created $(MODELLIB)"
	@cmd /C "echo ### Created library: $@"
 endif
endif

%.obj : %.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : %.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/ert/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



# Libraries:





#----------------------------- Dependencies ------------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw