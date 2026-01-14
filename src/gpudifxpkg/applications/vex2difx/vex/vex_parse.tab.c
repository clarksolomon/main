/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./vex_parse.y"

/*
 * Copyright (c) 2020-2021 NVI, Inc.
 *
 * This file is part of VLBI Field System
 * (see http://github.com/nvi-inc/fs).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "vex.h"

#define YYDEBUG 1

/* globals */

struct vex *vex_ptr=NULL;
extern int lines;

int yylex();
void yyerror(char const* s);

#line 108 "vex_parse.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "vex_parse.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_VEX_REV = 3,                  /* T_VEX_REV  */
  YYSYMBOL_T_REF = 4,                      /* T_REF  */
  YYSYMBOL_T_DEF = 5,                      /* T_DEF  */
  YYSYMBOL_T_ENDDEF = 6,                   /* T_ENDDEF  */
  YYSYMBOL_T_SCAN = 7,                     /* T_SCAN  */
  YYSYMBOL_T_ENDSCAN = 8,                  /* T_ENDSCAN  */
  YYSYMBOL_T_CHAN_DEF = 9,                 /* T_CHAN_DEF  */
  YYSYMBOL_T_SAMPLE_RATE = 10,             /* T_SAMPLE_RATE  */
  YYSYMBOL_T_BITS_PER_SAMPLE = 11,         /* T_BITS_PER_SAMPLE  */
  YYSYMBOL_T_SWITCHING_CYCLE = 12,         /* T_SWITCHING_CYCLE  */
  YYSYMBOL_T_START = 13,                   /* T_START  */
  YYSYMBOL_T_SOURCE = 14,                  /* T_SOURCE  */
  YYSYMBOL_T_MODE = 15,                    /* T_MODE  */
  YYSYMBOL_T_STATION = 16,                 /* T_STATION  */
  YYSYMBOL_T_DATA_TRANSFER = 17,           /* T_DATA_TRANSFER  */
  YYSYMBOL_T_INTENT = 18,                  /* T_INTENT  */
  YYSYMBOL_T_POINTING_OFFSET = 19,         /* T_POINTING_OFFSET  */
  YYSYMBOL_T_ANTENNA_DIAM = 20,            /* T_ANTENNA_DIAM  */
  YYSYMBOL_T_AXIS_OFFSET = 21,             /* T_AXIS_OFFSET  */
  YYSYMBOL_T_ANTENNA_MOTION = 22,          /* T_ANTENNA_MOTION  */
  YYSYMBOL_T_POINTING_SECTOR = 23,         /* T_POINTING_SECTOR  */
  YYSYMBOL_T_AXIS_TYPE = 24,               /* T_AXIS_TYPE  */
  YYSYMBOL_T_NASMYTH = 25,                 /* T_NASMYTH  */
  YYSYMBOL_T_BBC_ASSIGN = 26,              /* T_BBC_ASSIGN  */
  YYSYMBOL_T_STREAM_DEF = 27,              /* T_STREAM_DEF  */
  YYSYMBOL_T_STREAM_SAMPLE_RATE = 28,      /* T_STREAM_SAMPLE_RATE  */
  YYSYMBOL_T_STREAM_LABEL = 29,            /* T_STREAM_LABEL  */
  YYSYMBOL_T_CLOCK_EARLY = 30,             /* T_CLOCK_EARLY  */
  YYSYMBOL_T_RECORD_TRANSPORT_TYPE = 31,   /* T_RECORD_TRANSPORT_TYPE  */
  YYSYMBOL_T_ELECTRONICS_RACK_TYPE = 32,   /* T_ELECTRONICS_RACK_TYPE  */
  YYSYMBOL_T_NUMBER_DRIVES = 33,           /* T_NUMBER_DRIVES  */
  YYSYMBOL_T_HEADSTACK = 34,               /* T_HEADSTACK  */
  YYSYMBOL_T_RECORD_DENSITY = 35,          /* T_RECORD_DENSITY  */
  YYSYMBOL_T_TAPE_LENGTH = 36,             /* T_TAPE_LENGTH  */
  YYSYMBOL_T_RECORDING_SYSTEM_ID = 37,     /* T_RECORDING_SYSTEM_ID  */
  YYSYMBOL_T_TAPE_MOTION = 38,             /* T_TAPE_MOTION  */
  YYSYMBOL_T_TAPE_CONTROL = 39,            /* T_TAPE_CONTROL  */
  YYSYMBOL_T_EQUIP = 40,                   /* T_EQUIP  */
  YYSYMBOL_T_COMPOSITE_EQUIP = 41,         /* T_COMPOSITE_EQUIP  */
  YYSYMBOL_T_EQUIP_SET = 42,               /* T_EQUIP_SET  */
  YYSYMBOL_T_EQUIP_INFO = 43,              /* T_EQUIP_INFO  */
  YYSYMBOL_T_CONNECTION = 44,              /* T_CONNECTION  */
  YYSYMBOL_T_RECORD_METHOD = 45,           /* T_RECORD_METHOD  */
  YYSYMBOL_T_RECORD_CONTROL = 46,          /* T_RECORD_CONTROL  */
  YYSYMBOL_T_DATASTREAM = 47,              /* T_DATASTREAM  */
  YYSYMBOL_T_THREAD = 48,                  /* T_THREAD  */
  YYSYMBOL_T_CHANNEL = 49,                 /* T_CHANNEL  */
  YYSYMBOL_T_MERGED_DATASTREAM = 50,       /* T_MERGED_DATASTREAM  */
  YYSYMBOL_T_TAI_UTC = 51,                 /* T_TAI_UTC  */
  YYSYMBOL_T_A1_TAI = 52,                  /* T_A1_TAI  */
  YYSYMBOL_T_EOP_REF_EPOCH = 53,           /* T_EOP_REF_EPOCH  */
  YYSYMBOL_T_NUM_EOP_POINTS = 54,          /* T_NUM_EOP_POINTS  */
  YYSYMBOL_T_EOP_INTERVAL = 55,            /* T_EOP_INTERVAL  */
  YYSYMBOL_T_UT1_UTC = 56,                 /* T_UT1_UTC  */
  YYSYMBOL_T_X_WOBBLE = 57,                /* T_X_WOBBLE  */
  YYSYMBOL_T_Y_WOBBLE = 58,                /* T_Y_WOBBLE  */
  YYSYMBOL_T_NUT_REF_EPOCH = 59,           /* T_NUT_REF_EPOCH  */
  YYSYMBOL_T_NUM_NUT_POINTS = 60,          /* T_NUM_NUT_POINTS  */
  YYSYMBOL_T_NUT_INTERVAL = 61,            /* T_NUT_INTERVAL  */
  YYSYMBOL_T_DELTA_PSI = 62,               /* T_DELTA_PSI  */
  YYSYMBOL_T_DELTA_EPS = 63,               /* T_DELTA_EPS  */
  YYSYMBOL_T_NUT_MODEL = 64,               /* T_NUT_MODEL  */
  YYSYMBOL_T_EOP_ORIGIN = 65,              /* T_EOP_ORIGIN  */
  YYSYMBOL_T_DELTA_X_NUT = 66,             /* T_DELTA_X_NUT  */
  YYSYMBOL_T_DELTA_Y_NUT = 67,             /* T_DELTA_Y_NUT  */
  YYSYMBOL_T_NUT_ORIGIN = 68,              /* T_NUT_ORIGIN  */
  YYSYMBOL_T_EXPER_NUM = 69,               /* T_EXPER_NUM  */
  YYSYMBOL_T_EXPER_NAME = 70,              /* T_EXPER_NAME  */
  YYSYMBOL_T_EXPER_NOMINAL_START = 71,     /* T_EXPER_NOMINAL_START  */
  YYSYMBOL_T_EXPER_NOMINAL_STOP = 72,      /* T_EXPER_NOMINAL_STOP  */
  YYSYMBOL_T_PI_NAME = 73,                 /* T_PI_NAME  */
  YYSYMBOL_T_PI_EMAIL = 74,                /* T_PI_EMAIL  */
  YYSYMBOL_T_CONTACT_NAME = 75,            /* T_CONTACT_NAME  */
  YYSYMBOL_T_CONTACT_EMAIL = 76,           /* T_CONTACT_EMAIL  */
  YYSYMBOL_T_SCHEDULER_NAME = 77,          /* T_SCHEDULER_NAME  */
  YYSYMBOL_T_SCHEDULER_EMAIL = 78,         /* T_SCHEDULER_EMAIL  */
  YYSYMBOL_T_TARGET_CORRELATOR = 79,       /* T_TARGET_CORRELATOR  */
  YYSYMBOL_T_EXPER_DESCRIPTION = 80,       /* T_EXPER_DESCRIPTION  */
  YYSYMBOL_T_SCHEDULING_SOFTWARE = 81,     /* T_SCHEDULING_SOFTWARE  */
  YYSYMBOL_T_VEX_FILE_WRITER = 82,         /* T_VEX_FILE_WRITER  */
  YYSYMBOL_T_EXTENSION = 83,               /* T_EXTENSION  */
  YYSYMBOL_T_HEADSTACK_POS = 84,           /* T_HEADSTACK_POS  */
  YYSYMBOL_T_IF_DEF = 85,                  /* T_IF_DEF  */
  YYSYMBOL_T_RECEIVER_NAME = 86,           /* T_RECEIVER_NAME  */
  YYSYMBOL_T_SUB_LO_FREQUENCIES = 87,      /* T_SUB_LO_FREQUENCIES  */
  YYSYMBOL_T_SUB_LO_SIDEBANDS = 88,        /* T_SUB_LO_SIDEBANDS  */
  YYSYMBOL_T_SWITCHED_POWER = 89,          /* T_SWITCHED_POWER  */
  YYSYMBOL_T_PASS_ORDER = 90,              /* T_PASS_ORDER  */
  YYSYMBOL_T_S2_GROUP_ORDER = 91,          /* T_S2_GROUP_ORDER  */
  YYSYMBOL_T_PHASE_CAL_DETECT = 92,        /* T_PHASE_CAL_DETECT  */
  YYSYMBOL_T_TAPE_CHANGE = 93,             /* T_TAPE_CHANGE  */
  YYSYMBOL_T_NEW_SOURCE_COMMAND = 94,      /* T_NEW_SOURCE_COMMAND  */
  YYSYMBOL_T_NEW_TAPE_SETUP = 95,          /* T_NEW_TAPE_SETUP  */
  YYSYMBOL_T_SETUP_ALWAYS = 96,            /* T_SETUP_ALWAYS  */
  YYSYMBOL_T_PARITY_CHECK = 97,            /* T_PARITY_CHECK  */
  YYSYMBOL_T_TAPE_PREPASS = 98,            /* T_TAPE_PREPASS  */
  YYSYMBOL_T_PREOB_CAL = 99,               /* T_PREOB_CAL  */
  YYSYMBOL_T_MIDOB_CAL = 100,              /* T_MIDOB_CAL  */
  YYSYMBOL_T_POSTOB_CAL = 101,             /* T_POSTOB_CAL  */
  YYSYMBOL_T_HEADSTACK_MOTION = 102,       /* T_HEADSTACK_MOTION  */
  YYSYMBOL_T_PROCEDURE_NAME_PREFIX = 103,  /* T_PROCEDURE_NAME_PREFIX  */
  YYSYMBOL_T_ROLL_REINIT_PERIOD = 104,     /* T_ROLL_REINIT_PERIOD  */
  YYSYMBOL_T_ROLL_INC_PERIOD = 105,        /* T_ROLL_INC_PERIOD  */
  YYSYMBOL_T_ROLL = 106,                   /* T_ROLL  */
  YYSYMBOL_T_ROLL_DEF = 107,               /* T_ROLL_DEF  */
  YYSYMBOL_T_SEFD_MODEL = 108,             /* T_SEFD_MODEL  */
  YYSYMBOL_T_SEFD = 109,                   /* T_SEFD  */
  YYSYMBOL_T_SITE_TYPE = 110,              /* T_SITE_TYPE  */
  YYSYMBOL_T_SITE_NAME = 111,              /* T_SITE_NAME  */
  YYSYMBOL_T_SITE_ID = 112,                /* T_SITE_ID  */
  YYSYMBOL_T_SITE_POSITION = 113,          /* T_SITE_POSITION  */
  YYSYMBOL_T_SITE_POSITION_EPOCH = 114,    /* T_SITE_POSITION_EPOCH  */
  YYSYMBOL_T_SITE_POSITION_REF = 115,      /* T_SITE_POSITION_REF  */
  YYSYMBOL_T_SITE_VELOCITY = 116,          /* T_SITE_VELOCITY  */
  YYSYMBOL_T_HORIZON_MAP_AZ = 117,         /* T_HORIZON_MAP_AZ  */
  YYSYMBOL_T_HORIZON_MAP_EL = 118,         /* T_HORIZON_MAP_EL  */
  YYSYMBOL_T_ZEN_ATMOS = 119,              /* T_ZEN_ATMOS  */
  YYSYMBOL_T_OCEAN_LOAD_VERT = 120,        /* T_OCEAN_LOAD_VERT  */
  YYSYMBOL_T_OCEAN_LOAD_HORIZ = 121,       /* T_OCEAN_LOAD_HORIZ  */
  YYSYMBOL_T_OCCUPATION_CODE = 122,        /* T_OCCUPATION_CODE  */
  YYSYMBOL_T_INCLINATION = 123,            /* T_INCLINATION  */
  YYSYMBOL_T_ECCENTRICITY = 124,           /* T_ECCENTRICITY  */
  YYSYMBOL_T_ARG_PERIGEE = 125,            /* T_ARG_PERIGEE  */
  YYSYMBOL_T_ASCENDING_NODE = 126,         /* T_ASCENDING_NODE  */
  YYSYMBOL_T_MEAN_ANOMALY = 127,           /* T_MEAN_ANOMALY  */
  YYSYMBOL_T_SEMI_MAJOR_AXIS = 128,        /* T_SEMI_MAJOR_AXIS  */
  YYSYMBOL_T_MEAN_MOTION = 129,            /* T_MEAN_MOTION  */
  YYSYMBOL_T_ORBIT_EPOCH = 130,            /* T_ORBIT_EPOCH  */
  YYSYMBOL_T_SOURCE_TYPE = 131,            /* T_SOURCE_TYPE  */
  YYSYMBOL_T_SOURCE_NAME = 132,            /* T_SOURCE_NAME  */
  YYSYMBOL_T_IAU_NAME = 133,               /* T_IAU_NAME  */
  YYSYMBOL_T_RA = 134,                     /* T_RA  */
  YYSYMBOL_T_DEC = 135,                    /* T_DEC  */
  YYSYMBOL_T_SOURCE_POSITION_REF = 136,    /* T_SOURCE_POSITION_REF  */
  YYSYMBOL_T_RA_RATE = 137,                /* T_RA_RATE  */
  YYSYMBOL_T_DEC_RATE = 138,               /* T_DEC_RATE  */
  YYSYMBOL_T_SOURCE_POSITION_EPOCH = 139,  /* T_SOURCE_POSITION_EPOCH  */
  YYSYMBOL_T_REF_COORD_FRAME = 140,        /* T_REF_COORD_FRAME  */
  YYSYMBOL_T_VELOCITY_WRT_LSR = 141,       /* T_VELOCITY_WRT_LSR  */
  YYSYMBOL_T_SOURCE_MODEL = 142,           /* T_SOURCE_MODEL  */
  YYSYMBOL_T_BSP_FILE_NAME = 143,          /* T_BSP_FILE_NAME  */
  YYSYMBOL_T_BSP_OBJECT_ID = 144,          /* T_BSP_OBJECT_ID  */
  YYSYMBOL_T_TLE0 = 145,                   /* T_TLE0  */
  YYSYMBOL_T_TLE1 = 146,                   /* T_TLE1  */
  YYSYMBOL_T_TLE2 = 147,                   /* T_TLE2  */
  YYSYMBOL_T_DATUM = 148,                  /* T_DATUM  */
  YYSYMBOL_T_VECTOR = 149,                 /* T_VECTOR  */
  YYSYMBOL_T_VSN = 150,                    /* T_VSN  */
  YYSYMBOL_T_FANIN_DEF = 151,              /* T_FANIN_DEF  */
  YYSYMBOL_T_FANOUT_DEF = 152,             /* T_FANOUT_DEF  */
  YYSYMBOL_T_TRACK_FRAME_FORMAT = 153,     /* T_TRACK_FRAME_FORMAT  */
  YYSYMBOL_T_DATA_MODULATION = 154,        /* T_DATA_MODULATION  */
  YYSYMBOL_T_VLBA_FRMTR_SYS_TRK = 155,     /* T_VLBA_FRMTR_SYS_TRK  */
  YYSYMBOL_T_VLBA_TRNSPRT_SYS_TRK = 156,   /* T_VLBA_TRNSPRT_SYS_TRK  */
  YYSYMBOL_T_S2_RECORDING_MODE = 157,      /* T_S2_RECORDING_MODE  */
  YYSYMBOL_T_S2_DATA_SOURCE = 158,         /* T_S2_DATA_SOURCE  */
  YYSYMBOL_T_FORMAT_DEF = 159,             /* T_FORMAT_DEF  */
  YYSYMBOL_T_THREAD_DEF = 160,             /* T_THREAD_DEF  */
  YYSYMBOL_T_CHANNEL_DEF = 161,            /* T_CHANNEL_DEF  */
  YYSYMBOL_B_GLOBAL = 162,                 /* B_GLOBAL  */
  YYSYMBOL_B_STATION = 163,                /* B_STATION  */
  YYSYMBOL_B_MODE = 164,                   /* B_MODE  */
  YYSYMBOL_B_SCHED = 165,                  /* B_SCHED  */
  YYSYMBOL_B_EXPER = 166,                  /* B_EXPER  */
  YYSYMBOL_B_SCHEDULING_PARAMS = 167,      /* B_SCHEDULING_PARAMS  */
  YYSYMBOL_B_PROCEDURES = 168,             /* B_PROCEDURES  */
  YYSYMBOL_B_EOP = 169,                    /* B_EOP  */
  YYSYMBOL_B_FREQ = 170,                   /* B_FREQ  */
  YYSYMBOL_B_CLOCK = 171,                  /* B_CLOCK  */
  YYSYMBOL_B_ANTENNA = 172,                /* B_ANTENNA  */
  YYSYMBOL_B_BBC = 173,                    /* B_BBC  */
  YYSYMBOL_B_CORR = 174,                   /* B_CORR  */
  YYSYMBOL_B_DAS = 175,                    /* B_DAS  */
  YYSYMBOL_B_HEAD_POS = 176,               /* B_HEAD_POS  */
  YYSYMBOL_B_PASS_ORDER = 177,             /* B_PASS_ORDER  */
  YYSYMBOL_B_PHASE_CAL_DETECT = 178,       /* B_PHASE_CAL_DETECT  */
  YYSYMBOL_B_ROLL = 179,                   /* B_ROLL  */
  YYSYMBOL_B_IF = 180,                     /* B_IF  */
  YYSYMBOL_B_SEFD = 181,                   /* B_SEFD  */
  YYSYMBOL_B_SITE = 182,                   /* B_SITE  */
  YYSYMBOL_B_SOURCE = 183,                 /* B_SOURCE  */
  YYSYMBOL_B_TRACKS = 184,                 /* B_TRACKS  */
  YYSYMBOL_B_TAPELOG_OBS = 185,            /* B_TAPELOG_OBS  */
  YYSYMBOL_B_BITSTREAMS = 186,             /* B_BITSTREAMS  */
  YYSYMBOL_B_THREADS = 187,                /* B_THREADS  */
  YYSYMBOL_B_DATASTREAMS = 188,            /* B_DATASTREAMS  */
  YYSYMBOL_B_EXTENSIONS = 189,             /* B_EXTENSIONS  */
  YYSYMBOL_T_LITERAL = 190,                /* T_LITERAL  */
  YYSYMBOL_T_NAME = 191,                   /* T_NAME  */
  YYSYMBOL_T_LINK = 192,                   /* T_LINK  */
  YYSYMBOL_T_ANGLE = 193,                  /* T_ANGLE  */
  YYSYMBOL_T_COMMENT = 194,                /* T_COMMENT  */
  YYSYMBOL_T_COMMENT_TRAILING = 195,       /* T_COMMENT_TRAILING  */
  YYSYMBOL_196_ = 196,                     /* '='  */
  YYSYMBOL_197_ = 197,                     /* ';'  */
  YYSYMBOL_198_ = 198,                     /* ':'  */
  YYSYMBOL_YYACCEPT = 199,                 /* $accept  */
  YYSYMBOL_vex = 200,                      /* vex  */
  YYSYMBOL_version_lowls = 201,            /* version_lowls  */
  YYSYMBOL_version_lowl = 202,             /* version_lowl  */
  YYSYMBOL_version = 203,                  /* version  */
  YYSYMBOL_blocks = 204,                   /* blocks  */
  YYSYMBOL_block = 205,                    /* block  */
  YYSYMBOL_global_block = 206,             /* global_block  */
  YYSYMBOL_station_block = 207,            /* station_block  */
  YYSYMBOL_station_defs = 208,             /* station_defs  */
  YYSYMBOL_station_defx = 209,             /* station_defx  */
  YYSYMBOL_station_def = 210,              /* station_def  */
  YYSYMBOL_mode_block = 211,               /* mode_block  */
  YYSYMBOL_mode_defs = 212,                /* mode_defs  */
  YYSYMBOL_mode_defx = 213,                /* mode_defx  */
  YYSYMBOL_mode_def = 214,                 /* mode_def  */
  YYSYMBOL_refs = 215,                     /* refs  */
  YYSYMBOL_refx = 216,                     /* refx  */
  YYSYMBOL_ref = 217,                      /* ref  */
  YYSYMBOL_primitive = 218,                /* primitive  */
  YYSYMBOL_qrefs = 219,                    /* qrefs  */
  YYSYMBOL_qrefx = 220,                    /* qrefx  */
  YYSYMBOL_qref = 221,                     /* qref  */
  YYSYMBOL_qualifiers = 222,               /* qualifiers  */
  YYSYMBOL_sched_block = 223,              /* sched_block  */
  YYSYMBOL_sched_defs = 224,               /* sched_defs  */
  YYSYMBOL_sched_defx = 225,               /* sched_defx  */
  YYSYMBOL_sched_def = 226,                /* sched_def  */
  YYSYMBOL_sched_lowls = 227,              /* sched_lowls  */
  YYSYMBOL_sched_lowl = 228,               /* sched_lowl  */
  YYSYMBOL_start = 229,                    /* start  */
  YYSYMBOL_mode = 230,                     /* mode  */
  YYSYMBOL_source = 231,                   /* source  */
  YYSYMBOL_source_stations = 232,          /* source_stations  */
  YYSYMBOL_source_station = 233,           /* source_station  */
  YYSYMBOL_station = 234,                  /* station  */
  YYSYMBOL_data_transfer = 235,            /* data_transfer  */
  YYSYMBOL_intent = 236,                   /* intent  */
  YYSYMBOL_pointing_offset = 237,          /* pointing_offset  */
  YYSYMBOL_start_position = 238,           /* start_position  */
  YYSYMBOL_pass = 239,                     /* pass  */
  YYSYMBOL_sector = 240,                   /* sector  */
  YYSYMBOL_drives = 241,                   /* drives  */
  YYSYMBOL_scan_id = 242,                  /* scan_id  */
  YYSYMBOL_method = 243,                   /* method  */
  YYSYMBOL_destination = 244,              /* destination  */
  YYSYMBOL_options = 245,                  /* options  */
  YYSYMBOL_antenna_block = 246,            /* antenna_block  */
  YYSYMBOL_antenna_defs = 247,             /* antenna_defs  */
  YYSYMBOL_antenna_defx = 248,             /* antenna_defx  */
  YYSYMBOL_antenna_def = 249,              /* antenna_def  */
  YYSYMBOL_antenna_lowls = 250,            /* antenna_lowls  */
  YYSYMBOL_antenna_lowl = 251,             /* antenna_lowl  */
  YYSYMBOL_antenna_diam = 252,             /* antenna_diam  */
  YYSYMBOL_axis_type = 253,                /* axis_type  */
  YYSYMBOL_axis_offset = 254,              /* axis_offset  */
  YYSYMBOL_antenna_motion = 255,           /* antenna_motion  */
  YYSYMBOL_pointing_sector = 256,          /* pointing_sector  */
  YYSYMBOL_nasmyth = 257,                  /* nasmyth  */
  YYSYMBOL_bbc_block = 258,                /* bbc_block  */
  YYSYMBOL_bbc_defs = 259,                 /* bbc_defs  */
  YYSYMBOL_bbc_defx = 260,                 /* bbc_defx  */
  YYSYMBOL_bbc_def = 261,                  /* bbc_def  */
  YYSYMBOL_bbc_lowls = 262,                /* bbc_lowls  */
  YYSYMBOL_bbc_lowl = 263,                 /* bbc_lowl  */
  YYSYMBOL_bbc_assign = 264,               /* bbc_assign  */
  YYSYMBOL_bitstreams_block = 265,         /* bitstreams_block  */
  YYSYMBOL_bitstreams_defs = 266,          /* bitstreams_defs  */
  YYSYMBOL_bitstreams_defx = 267,          /* bitstreams_defx  */
  YYSYMBOL_bitstreams_def = 268,           /* bitstreams_def  */
  YYSYMBOL_bitstreams_lowls = 269,         /* bitstreams_lowls  */
  YYSYMBOL_bitstreams_lowl = 270,          /* bitstreams_lowl  */
  YYSYMBOL_stream_def = 271,               /* stream_def  */
  YYSYMBOL_stream_sample_rate = 272,       /* stream_sample_rate  */
  YYSYMBOL_stream_label = 273,             /* stream_label  */
  YYSYMBOL_clock_block = 274,              /* clock_block  */
  YYSYMBOL_clock_defs = 275,               /* clock_defs  */
  YYSYMBOL_clock_defx = 276,               /* clock_defx  */
  YYSYMBOL_clock_def = 277,                /* clock_def  */
  YYSYMBOL_clock_lowls = 278,              /* clock_lowls  */
  YYSYMBOL_clock_lowl = 279,               /* clock_lowl  */
  YYSYMBOL_clock_early = 280,              /* clock_early  */
  YYSYMBOL_das_block = 281,                /* das_block  */
  YYSYMBOL_das_defs = 282,                 /* das_defs  */
  YYSYMBOL_das_defx = 283,                 /* das_defx  */
  YYSYMBOL_das_def = 284,                  /* das_def  */
  YYSYMBOL_das_lowls = 285,                /* das_lowls  */
  YYSYMBOL_das_lowl = 286,                 /* das_lowl  */
  YYSYMBOL_record_transport_type = 287,    /* record_transport_type  */
  YYSYMBOL_electronics_rack_type = 288,    /* electronics_rack_type  */
  YYSYMBOL_number_drives = 289,            /* number_drives  */
  YYSYMBOL_headstack = 290,                /* headstack  */
  YYSYMBOL_record_density = 291,           /* record_density  */
  YYSYMBOL_tape_length = 292,              /* tape_length  */
  YYSYMBOL_recording_system_id = 293,      /* recording_system_id  */
  YYSYMBOL_tape_motion = 294,              /* tape_motion  */
  YYSYMBOL_tape_control = 295,             /* tape_control  */
  YYSYMBOL_equip = 296,                    /* equip  */
  YYSYMBOL_composite_equip = 297,          /* composite_equip  */
  YYSYMBOL_equip_set = 298,                /* equip_set  */
  YYSYMBOL_equip_info = 299,               /* equip_info  */
  YYSYMBOL_connection = 300,               /* connection  */
  YYSYMBOL_record_method = 301,            /* record_method  */
  YYSYMBOL_record_control = 302,           /* record_control  */
  YYSYMBOL_datastreams_block = 303,        /* datastreams_block  */
  YYSYMBOL_datastreams_defs = 304,         /* datastreams_defs  */
  YYSYMBOL_datastreams_defx = 305,         /* datastreams_defx  */
  YYSYMBOL_datastreams_def = 306,          /* datastreams_def  */
  YYSYMBOL_datastreams_lowls = 307,        /* datastreams_lowls  */
  YYSYMBOL_datastreams_lowl = 308,         /* datastreams_lowl  */
  YYSYMBOL_datastream = 309,               /* datastream  */
  YYSYMBOL_thread = 310,                   /* thread  */
  YYSYMBOL_channel = 311,                  /* channel  */
  YYSYMBOL_merged_datastream = 312,        /* merged_datastream  */
  YYSYMBOL_eop_block = 313,                /* eop_block  */
  YYSYMBOL_eop_defs = 314,                 /* eop_defs  */
  YYSYMBOL_eop_defx = 315,                 /* eop_defx  */
  YYSYMBOL_eop_def = 316,                  /* eop_def  */
  YYSYMBOL_eop_lowls = 317,                /* eop_lowls  */
  YYSYMBOL_eop_lowl = 318,                 /* eop_lowl  */
  YYSYMBOL_tai_utc = 319,                  /* tai_utc  */
  YYSYMBOL_a1_tai = 320,                   /* a1_tai  */
  YYSYMBOL_eop_ref_epoch = 321,            /* eop_ref_epoch  */
  YYSYMBOL_num_eop_points = 322,           /* num_eop_points  */
  YYSYMBOL_eop_interval = 323,             /* eop_interval  */
  YYSYMBOL_ut1_utc = 324,                  /* ut1_utc  */
  YYSYMBOL_x_wobble = 325,                 /* x_wobble  */
  YYSYMBOL_y_wobble = 326,                 /* y_wobble  */
  YYSYMBOL_nut_ref_epoch = 327,            /* nut_ref_epoch  */
  YYSYMBOL_num_nut_points = 328,           /* num_nut_points  */
  YYSYMBOL_nut_interval = 329,             /* nut_interval  */
  YYSYMBOL_delta_psi = 330,                /* delta_psi  */
  YYSYMBOL_delta_eps = 331,                /* delta_eps  */
  YYSYMBOL_nut_model = 332,                /* nut_model  */
  YYSYMBOL_eop_origin = 333,               /* eop_origin  */
  YYSYMBOL_delta_x_nut = 334,              /* delta_x_nut  */
  YYSYMBOL_delta_y_nut = 335,              /* delta_y_nut  */
  YYSYMBOL_nut_origin = 336,               /* nut_origin  */
  YYSYMBOL_exper_block = 337,              /* exper_block  */
  YYSYMBOL_exper_defs = 338,               /* exper_defs  */
  YYSYMBOL_exper_defx = 339,               /* exper_defx  */
  YYSYMBOL_exper_def = 340,                /* exper_def  */
  YYSYMBOL_exper_lowls = 341,              /* exper_lowls  */
  YYSYMBOL_exper_lowl = 342,               /* exper_lowl  */
  YYSYMBOL_exper_num = 343,                /* exper_num  */
  YYSYMBOL_exper_name = 344,               /* exper_name  */
  YYSYMBOL_exper_description = 345,        /* exper_description  */
  YYSYMBOL_exper_nominal_start = 346,      /* exper_nominal_start  */
  YYSYMBOL_exper_nominal_stop = 347,       /* exper_nominal_stop  */
  YYSYMBOL_pi_name = 348,                  /* pi_name  */
  YYSYMBOL_pi_email = 349,                 /* pi_email  */
  YYSYMBOL_contact_name = 350,             /* contact_name  */
  YYSYMBOL_contact_email = 351,            /* contact_email  */
  YYSYMBOL_scheduler_name = 352,           /* scheduler_name  */
  YYSYMBOL_scheduler_email = 353,          /* scheduler_email  */
  YYSYMBOL_target_correlator = 354,        /* target_correlator  */
  YYSYMBOL_scheduling_software = 355,      /* scheduling_software  */
  YYSYMBOL_vex_file_writer = 356,          /* vex_file_writer  */
  YYSYMBOL_extensions_block = 357,         /* extensions_block  */
  YYSYMBOL_extensions_defs = 358,          /* extensions_defs  */
  YYSYMBOL_extensions_defx = 359,          /* extensions_defx  */
  YYSYMBOL_extensions_def = 360,           /* extensions_def  */
  YYSYMBOL_extensions_lowls = 361,         /* extensions_lowls  */
  YYSYMBOL_extensions_lowl = 362,          /* extensions_lowl  */
  YYSYMBOL_extension = 363,                /* extension  */
  YYSYMBOL_freq_block = 364,               /* freq_block  */
  YYSYMBOL_freq_defs = 365,                /* freq_defs  */
  YYSYMBOL_freq_defx = 366,                /* freq_defx  */
  YYSYMBOL_freq_def = 367,                 /* freq_def  */
  YYSYMBOL_freq_lowls = 368,               /* freq_lowls  */
  YYSYMBOL_freq_lowl = 369,                /* freq_lowl  */
  YYSYMBOL_chan_def = 370,                 /* chan_def  */
  YYSYMBOL_switch_states = 371,            /* switch_states  */
  YYSYMBOL_switch_state = 372,             /* switch_state  */
  YYSYMBOL_sample_rate = 373,              /* sample_rate  */
  YYSYMBOL_bits_per_sample = 374,          /* bits_per_sample  */
  YYSYMBOL_switching_cycle = 375,          /* switching_cycle  */
  YYSYMBOL_head_pos_block = 376,           /* head_pos_block  */
  YYSYMBOL_head_pos_defs = 377,            /* head_pos_defs  */
  YYSYMBOL_head_pos_defx = 378,            /* head_pos_defx  */
  YYSYMBOL_head_pos_def = 379,             /* head_pos_def  */
  YYSYMBOL_head_pos_lowls = 380,           /* head_pos_lowls  */
  YYSYMBOL_head_pos_lowl = 381,            /* head_pos_lowl  */
  YYSYMBOL_headstack_pos = 382,            /* headstack_pos  */
  YYSYMBOL_if_block = 383,                 /* if_block  */
  YYSYMBOL_if_defs = 384,                  /* if_defs  */
  YYSYMBOL_if_defx = 385,                  /* if_defx  */
  YYSYMBOL_if_def = 386,                   /* if_def  */
  YYSYMBOL_if_lowls = 387,                 /* if_lowls  */
  YYSYMBOL_if_lowl = 388,                  /* if_lowl  */
  YYSYMBOL_if_def_st = 389,                /* if_def_st  */
  YYSYMBOL_receiver_name = 390,            /* receiver_name  */
  YYSYMBOL_sub_lo_frequencies = 391,       /* sub_lo_frequencies  */
  YYSYMBOL_sub_lo_sidebands = 392,         /* sub_lo_sidebands  */
  YYSYMBOL_switched_power = 393,           /* switched_power  */
  YYSYMBOL_pass_order_block = 394,         /* pass_order_block  */
  YYSYMBOL_pass_order_defs = 395,          /* pass_order_defs  */
  YYSYMBOL_pass_order_defx = 396,          /* pass_order_defx  */
  YYSYMBOL_pass_order_def = 397,           /* pass_order_def  */
  YYSYMBOL_pass_order_lowls = 398,         /* pass_order_lowls  */
  YYSYMBOL_pass_order_lowl = 399,          /* pass_order_lowl  */
  YYSYMBOL_pass_order = 400,               /* pass_order  */
  YYSYMBOL_s2_group_order = 401,           /* s2_group_order  */
  YYSYMBOL_phase_cal_detect_block = 402,   /* phase_cal_detect_block  */
  YYSYMBOL_phase_cal_detect_defs = 403,    /* phase_cal_detect_defs  */
  YYSYMBOL_phase_cal_detect_defx = 404,    /* phase_cal_detect_defx  */
  YYSYMBOL_phase_cal_detect_def = 405,     /* phase_cal_detect_def  */
  YYSYMBOL_phase_cal_detect_lowls = 406,   /* phase_cal_detect_lowls  */
  YYSYMBOL_phase_cal_detect_lowl = 407,    /* phase_cal_detect_lowl  */
  YYSYMBOL_phase_cal_detect = 408,         /* phase_cal_detect  */
  YYSYMBOL_procedures_block = 409,         /* procedures_block  */
  YYSYMBOL_procedures_defs = 410,          /* procedures_defs  */
  YYSYMBOL_procedures_defx = 411,          /* procedures_defx  */
  YYSYMBOL_procedures_def = 412,           /* procedures_def  */
  YYSYMBOL_procedures_lowls = 413,         /* procedures_lowls  */
  YYSYMBOL_procedures_lowl = 414,          /* procedures_lowl  */
  YYSYMBOL_tape_change = 415,              /* tape_change  */
  YYSYMBOL_headstack_motion = 416,         /* headstack_motion  */
  YYSYMBOL_new_source_command = 417,       /* new_source_command  */
  YYSYMBOL_new_tape_setup = 418,           /* new_tape_setup  */
  YYSYMBOL_setup_always = 419,             /* setup_always  */
  YYSYMBOL_parity_check = 420,             /* parity_check  */
  YYSYMBOL_tape_prepass = 421,             /* tape_prepass  */
  YYSYMBOL_preob_cal = 422,                /* preob_cal  */
  YYSYMBOL_midob_cal = 423,                /* midob_cal  */
  YYSYMBOL_postob_cal = 424,               /* postob_cal  */
  YYSYMBOL_procedure_name_prefix = 425,    /* procedure_name_prefix  */
  YYSYMBOL_roll_block = 426,               /* roll_block  */
  YYSYMBOL_roll_defs = 427,                /* roll_defs  */
  YYSYMBOL_roll_defx = 428,                /* roll_defx  */
  YYSYMBOL_roll_def = 429,                 /* roll_def  */
  YYSYMBOL_roll_lowls = 430,               /* roll_lowls  */
  YYSYMBOL_roll_lowl = 431,                /* roll_lowl  */
  YYSYMBOL_roll_reinit_period = 432,       /* roll_reinit_period  */
  YYSYMBOL_roll_inc_period = 433,          /* roll_inc_period  */
  YYSYMBOL_roll = 434,                     /* roll  */
  YYSYMBOL_roll_def_st = 435,              /* roll_def_st  */
  YYSYMBOL_scheduling_params_block = 436,  /* scheduling_params_block  */
  YYSYMBOL_scheduling_params_defs = 437,   /* scheduling_params_defs  */
  YYSYMBOL_scheduling_params_defx = 438,   /* scheduling_params_defx  */
  YYSYMBOL_scheduling_params_def = 439,    /* scheduling_params_def  */
  YYSYMBOL_scheduling_params_lowls = 440,  /* scheduling_params_lowls  */
  YYSYMBOL_scheduling_params_lowl = 441,   /* scheduling_params_lowl  */
  YYSYMBOL_sefd_block = 442,               /* sefd_block  */
  YYSYMBOL_sefd_defs = 443,                /* sefd_defs  */
  YYSYMBOL_sefd_defx = 444,                /* sefd_defx  */
  YYSYMBOL_sefd_def = 445,                 /* sefd_def  */
  YYSYMBOL_sefd_lowls = 446,               /* sefd_lowls  */
  YYSYMBOL_sefd_lowl = 447,                /* sefd_lowl  */
  YYSYMBOL_sefd_model = 448,               /* sefd_model  */
  YYSYMBOL_sefd = 449,                     /* sefd  */
  YYSYMBOL_site_block = 450,               /* site_block  */
  YYSYMBOL_site_defs = 451,                /* site_defs  */
  YYSYMBOL_site_defx = 452,                /* site_defx  */
  YYSYMBOL_site_def = 453,                 /* site_def  */
  YYSYMBOL_site_lowls = 454,               /* site_lowls  */
  YYSYMBOL_site_lowl = 455,                /* site_lowl  */
  YYSYMBOL_site_type = 456,                /* site_type  */
  YYSYMBOL_site_name = 457,                /* site_name  */
  YYSYMBOL_site_id = 458,                  /* site_id  */
  YYSYMBOL_site_position = 459,            /* site_position  */
  YYSYMBOL_site_position_epoch = 460,      /* site_position_epoch  */
  YYSYMBOL_site_position_ref = 461,        /* site_position_ref  */
  YYSYMBOL_site_velocity = 462,            /* site_velocity  */
  YYSYMBOL_horizon_map_az = 463,           /* horizon_map_az  */
  YYSYMBOL_horizon_map_el = 464,           /* horizon_map_el  */
  YYSYMBOL_zen_atmos = 465,                /* zen_atmos  */
  YYSYMBOL_ocean_load_vert = 466,          /* ocean_load_vert  */
  YYSYMBOL_ocean_load_horiz = 467,         /* ocean_load_horiz  */
  YYSYMBOL_occupation_code = 468,          /* occupation_code  */
  YYSYMBOL_inclination = 469,              /* inclination  */
  YYSYMBOL_eccentricity = 470,             /* eccentricity  */
  YYSYMBOL_arg_perigee = 471,              /* arg_perigee  */
  YYSYMBOL_ascending_node = 472,           /* ascending_node  */
  YYSYMBOL_mean_anomaly = 473,             /* mean_anomaly  */
  YYSYMBOL_semi_major_axis = 474,          /* semi_major_axis  */
  YYSYMBOL_mean_motion = 475,              /* mean_motion  */
  YYSYMBOL_orbit_epoch = 476,              /* orbit_epoch  */
  YYSYMBOL_source_block = 477,             /* source_block  */
  YYSYMBOL_source_defs = 478,              /* source_defs  */
  YYSYMBOL_source_defx = 479,              /* source_defx  */
  YYSYMBOL_source_def = 480,               /* source_def  */
  YYSYMBOL_source_lowls = 481,             /* source_lowls  */
  YYSYMBOL_source_lowl = 482,              /* source_lowl  */
  YYSYMBOL_source_type = 483,              /* source_type  */
  YYSYMBOL_source_name = 484,              /* source_name  */
  YYSYMBOL_iau_name = 485,                 /* iau_name  */
  YYSYMBOL_ra = 486,                       /* ra  */
  YYSYMBOL_dec = 487,                      /* dec  */
  YYSYMBOL_ref_coord_frame = 488,          /* ref_coord_frame  */
  YYSYMBOL_source_position_ref = 489,      /* source_position_ref  */
  YYSYMBOL_source_position_epoch = 490,    /* source_position_epoch  */
  YYSYMBOL_ra_rate = 491,                  /* ra_rate  */
  YYSYMBOL_dec_rate = 492,                 /* dec_rate  */
  YYSYMBOL_velocity_wrt_lsr = 493,         /* velocity_wrt_lsr  */
  YYSYMBOL_source_model = 494,             /* source_model  */
  YYSYMBOL_bsp_file_name = 495,            /* bsp_file_name  */
  YYSYMBOL_bsp_object_id = 496,            /* bsp_object_id  */
  YYSYMBOL_tle0 = 497,                     /* tle0  */
  YYSYMBOL_tle1 = 498,                     /* tle1  */
  YYSYMBOL_tle2 = 499,                     /* tle2  */
  YYSYMBOL_datum = 500,                    /* datum  */
  YYSYMBOL_vector = 501,                   /* vector  */
  YYSYMBOL_tapelog_obs_block = 502,        /* tapelog_obs_block  */
  YYSYMBOL_tapelog_obs_defs = 503,         /* tapelog_obs_defs  */
  YYSYMBOL_tapelog_obs_defx = 504,         /* tapelog_obs_defx  */
  YYSYMBOL_tapelog_obs_def = 505,          /* tapelog_obs_def  */
  YYSYMBOL_tapelog_obs_lowls = 506,        /* tapelog_obs_lowls  */
  YYSYMBOL_tapelog_obs_lowl = 507,         /* tapelog_obs_lowl  */
  YYSYMBOL_vsn = 508,                      /* vsn  */
  YYSYMBOL_tracks_block = 509,             /* tracks_block  */
  YYSYMBOL_tracks_defs = 510,              /* tracks_defs  */
  YYSYMBOL_tracks_defx = 511,              /* tracks_defx  */
  YYSYMBOL_tracks_def = 512,               /* tracks_def  */
  YYSYMBOL_tracks_lowls = 513,             /* tracks_lowls  */
  YYSYMBOL_tracks_lowl = 514,              /* tracks_lowl  */
  YYSYMBOL_fanin_def = 515,                /* fanin_def  */
  YYSYMBOL_fanout_def = 516,               /* fanout_def  */
  YYSYMBOL_track_frame_format = 517,       /* track_frame_format  */
  YYSYMBOL_data_modulation = 518,          /* data_modulation  */
  YYSYMBOL_vlba_frmtr_sys_trk = 519,       /* vlba_frmtr_sys_trk  */
  YYSYMBOL_vlba_trnsprt_sys_trk = 520,     /* vlba_trnsprt_sys_trk  */
  YYSYMBOL_s2_recording_mode = 521,        /* s2_recording_mode  */
  YYSYMBOL_s2_data_source = 522,           /* s2_data_source  */
  YYSYMBOL_bit_stream_list = 523,          /* bit_stream_list  */
  YYSYMBOL_threads_block = 524,            /* threads_block  */
  YYSYMBOL_threads_defs = 525,             /* threads_defs  */
  YYSYMBOL_threads_defx = 526,             /* threads_defx  */
  YYSYMBOL_threads_def = 527,              /* threads_def  */
  YYSYMBOL_threads_lowls = 528,            /* threads_lowls  */
  YYSYMBOL_threads_lowl = 529,             /* threads_lowl  */
  YYSYMBOL_format_def = 530,               /* format_def  */
  YYSYMBOL_thread_def = 531,               /* thread_def  */
  YYSYMBOL_channel_def = 532,              /* channel_def  */
  YYSYMBOL_optional_name = 533,            /* optional_name  */
  YYSYMBOL_optional_value = 534,           /* optional_value  */
  YYSYMBOL_external_ref = 535,             /* external_ref  */
  YYSYMBOL_literal = 536,                  /* literal  */
  YYSYMBOL_unit_list = 537,                /* unit_list  */
  YYSYMBOL_unit_more = 538,                /* unit_more  */
  YYSYMBOL_unit_option = 539,              /* unit_option  */
  YYSYMBOL_unit_value = 540,               /* unit_value  */
  YYSYMBOL_name_list = 541,                /* name_list  */
  YYSYMBOL_name_value = 542,               /* name_value  */
  YYSYMBOL_value_list = 543,               /* value_list  */
  YYSYMBOL_value = 544,                    /* value  */
  YYSYMBOL_value2 = 545,                   /* value2  */
  YYSYMBOL_unit_value2 = 546,              /* unit_value2  */
  YYSYMBOL_name_or_not = 547,              /* name_or_not  */
  YYSYMBOL_link_list = 548,                /* link_list  */
  YYSYMBOL_link_or_not = 549,              /* link_or_not  */
  YYSYMBOL_empty_value = 550,              /* empty_value  */
  YYSYMBOL_empty_name = 551                /* empty_name  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2022

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  199
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  353
/* YYNRULES -- Number of rules.  */
#define YYNRULES  888
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1975

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   450


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   198,   197,
       2,   196,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   480,   480,   481,   483,   484,   486,   487,   488,   492,
     497,   498,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   522,   523,   524,   525,   526,   527,   531,
     532,   536,   537,   539,   540,   542,   543,   544,   546,   547,
     551,   552,   554,   555,   557,   558,   559,   561,   562,   567,
     568,   570,   571,   572,   574,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   601,
     602,   604,   605,   606,   608,   609,   611,   612,   616,   617,
     619,   620,   622,   623,   624,   626,   628,   630,   631,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   643,   645,
     647,   649,   651,   653,   656,   657,   659,   661,   670,   677,
     684,   687,   694,   695,   697,   698,   700,   701,   703,   704,
     705,   707,   708,   710,   711,   713,   714,   716,   717,   722,
     723,   725,   726,   728,   729,   730,   732,   734,   736,   737,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   749,
     751,   753,   755,   758,   760,   764,   770,   778,   783,   792,
     802,   807,   808,   810,   811,   813,   814,   815,   817,   818,
     821,   822,   824,   825,   826,   827,   829,   834,   835,   837,
     838,   840,   841,   842,   844,   845,   848,   849,   851,   852,
     853,   854,   855,   856,   858,   860,   863,   865,   868,   870,
     875,   876,   878,   879,   881,   882,   883,   885,   887,   890,
     891,   893,   894,   895,   896,   898,   900,   902,   904,   906,
     908,   910,   912,   917,   918,   920,   921,   923,   924,   925,
     927,   928,   931,   932,   934,   935,   936,   937,   938,   939,
     940,   942,   943,   944,   945,   946,   947,   948,   949,   950,
     951,   952,   953,   955,   957,   959,   961,   963,   966,   969,
     971,   974,   976,   978,   980,   984,   986,   988,   991,   993,
     996,   999,  1002,  1004,  1006,  1009,  1011,  1013,  1016,  1020,
    1021,  1023,  1024,  1026,  1027,  1028,  1030,  1032,  1034,  1035,
    1037,  1038,  1039,  1040,  1041,  1042,  1043,  1045,  1047,  1050,
    1053,  1056,  1058,  1063,  1064,  1066,  1067,  1069,  1070,  1071,
    1073,  1074,  1077,  1078,  1080,  1081,  1082,  1083,  1084,  1085,
    1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,
    1096,  1097,  1098,  1099,  1100,  1102,  1104,  1106,  1108,  1110,
    1112,  1113,  1115,  1116,  1118,  1119,  1121,  1123,  1125,  1127,
    1128,  1130,  1131,  1133,  1135,  1137,  1140,  1141,  1143,  1144,
    1146,  1148,  1153,  1154,  1156,  1157,  1159,  1160,  1161,  1163,
    1165,  1167,  1168,  1170,  1171,  1172,  1173,  1175,  1177,  1178,
    1179,  1180,  1181,  1182,  1183,  1185,  1186,  1187,  1188,  1189,
    1191,  1193,  1195,  1198,  1200,  1202,  1204,  1206,  1208,  1210,
    1212,  1214,  1216,  1218,  1220,  1222,  1224,  1227,  1229,  1231,
    1233,  1239,  1240,  1242,  1243,  1245,  1246,  1247,  1249,  1250,
    1253,  1254,  1256,  1257,  1258,  1259,  1261,  1267,  1268,  1270,
    1271,  1273,  1274,  1275,  1277,  1278,  1281,  1282,  1284,  1285,
    1286,  1287,  1288,  1289,  1290,  1292,  1299,  1307,  1317,  1328,
    1329,  1331,  1333,  1335,  1337,  1342,  1343,  1345,  1346,  1348,
    1349,  1350,  1352,  1354,  1357,  1358,  1360,  1361,  1362,  1363,
    1365,  1370,  1371,  1373,  1374,  1376,  1377,  1378,  1380,  1381,
    1384,  1385,  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,
    1396,  1398,  1400,  1402,  1404,  1406,  1408,  1410,  1412,  1414,
    1416,  1418,  1420,  1422,  1424,  1427,  1430,  1433,  1436,  1438,
    1443,  1444,  1446,  1447,  1450,  1451,  1452,  1454,  1456,  1459,
    1461,  1463,  1464,  1466,  1467,  1468,  1470,  1472,  1476,  1477,
    1479,  1481,  1483,  1484,  1485,  1487,  1489,  1491,  1493,  1495,
    1496,  1497,  1498,  1500,  1502,  1507,  1508,  1510,  1512,  1514,
    1515,  1516,  1518,  1520,  1523,  1525,  1527,  1529,  1531,  1533,
    1535,  1537,  1539,  1541,  1543,  1545,  1547,  1549,  1550,  1551,
    1553,  1555,  1557,  1559,  1561,  1564,  1567,  1570,  1573,  1576,
    1579,  1583,  1584,  1586,  1587,  1589,  1590,  1591,  1593,  1595,
    1598,  1599,  1601,  1602,  1603,  1604,  1605,  1606,  1607,  1609,
    1611,  1613,  1615,  1619,  1621,  1623,  1625,  1628,  1629,  1630,
    1632,  1634,  1637,  1639,  1642,  1643,  1644,  1645,  1649,  1650,
    1652,  1653,  1655,  1656,  1657,  1659,  1661,  1664,  1665,  1667,
    1668,  1669,  1670,  1671,  1673,  1675,  1680,  1681,  1683,  1684,
    1686,  1687,  1688,  1690,  1692,  1694,  1695,  1697,  1698,  1699,
    1700,  1701,  1702,  1703,  1704,  1705,  1706,  1707,  1708,  1709,
    1710,  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,  1719,
    1720,  1722,  1724,  1726,  1728,  1731,  1735,  1737,  1739,  1743,
    1745,  1747,  1749,  1753,  1757,  1759,  1761,  1763,  1765,  1767,
    1769,  1771,  1773,  1777,  1778,  1780,  1781,  1783,  1784,  1785,
    1787,  1789,  1792,  1793,  1795,  1796,  1797,  1798,  1799,  1800,
    1801,  1802,  1803,  1804,  1805,  1806,  1807,  1808,  1809,  1810,
    1811,  1812,  1813,  1814,  1815,  1816,  1817,  1818,  1819,  1820,
    1821,  1822,  1823,  1824,  1826,  1828,  1830,  1833,  1835,  1837,
    1839,  1841,  1843,  1845,  1847,  1849,  1851,  1854,  1864,  1866,
    1868,  1870,  1872,  1874,  1876,  1878,  1881,  1883,  1885,  1887,
    1892,  1893,  1895,  1897,  1899,  1900,  1901,  1904,  1906,  1909,
    1911,  1913,  1914,  1915,  1916,  1919,  1921,  1926,  1927,  1929,
    1930,  1932,  1933,  1934,  1936,  1938,  1941,  1942,  1944,  1945,
    1946,  1948,  1949,  1950,  1952,  1954,  1955,  1956,  1957,  1958,
    1960,  1963,  1966,  1970,  1972,  1974,  1977,  1981,  1984,  1986,
    1988,  1991,  1993,  1998,  1999,  2001,  2002,  2004,  2005,  2006,
    2008,  2010,  2013,  2014,  2017,  2018,  2019,  2020,  2021,  2022,
    2025,  2027,  2029,  2033,  2037,  2040,  2043,  2047,  2054,  2055,
    2058,  2059,  2061,  2064,  2066,  2067,  2069,  2070,  2072,  2073,
    2075,  2077,  2078,  2080,  2082,  2083,  2085,  2087,  2088,  2090,
    2091,  2093,  2094,  2096,  2097,  2099,  2100,  2102,  2104
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_VEX_REV", "T_REF",
  "T_DEF", "T_ENDDEF", "T_SCAN", "T_ENDSCAN", "T_CHAN_DEF",
  "T_SAMPLE_RATE", "T_BITS_PER_SAMPLE", "T_SWITCHING_CYCLE", "T_START",
  "T_SOURCE", "T_MODE", "T_STATION", "T_DATA_TRANSFER", "T_INTENT",
  "T_POINTING_OFFSET", "T_ANTENNA_DIAM", "T_AXIS_OFFSET",
  "T_ANTENNA_MOTION", "T_POINTING_SECTOR", "T_AXIS_TYPE", "T_NASMYTH",
  "T_BBC_ASSIGN", "T_STREAM_DEF", "T_STREAM_SAMPLE_RATE", "T_STREAM_LABEL",
  "T_CLOCK_EARLY", "T_RECORD_TRANSPORT_TYPE", "T_ELECTRONICS_RACK_TYPE",
  "T_NUMBER_DRIVES", "T_HEADSTACK", "T_RECORD_DENSITY", "T_TAPE_LENGTH",
  "T_RECORDING_SYSTEM_ID", "T_TAPE_MOTION", "T_TAPE_CONTROL", "T_EQUIP",
  "T_COMPOSITE_EQUIP", "T_EQUIP_SET", "T_EQUIP_INFO", "T_CONNECTION",
  "T_RECORD_METHOD", "T_RECORD_CONTROL", "T_DATASTREAM", "T_THREAD",
  "T_CHANNEL", "T_MERGED_DATASTREAM", "T_TAI_UTC", "T_A1_TAI",
  "T_EOP_REF_EPOCH", "T_NUM_EOP_POINTS", "T_EOP_INTERVAL", "T_UT1_UTC",
  "T_X_WOBBLE", "T_Y_WOBBLE", "T_NUT_REF_EPOCH", "T_NUM_NUT_POINTS",
  "T_NUT_INTERVAL", "T_DELTA_PSI", "T_DELTA_EPS", "T_NUT_MODEL",
  "T_EOP_ORIGIN", "T_DELTA_X_NUT", "T_DELTA_Y_NUT", "T_NUT_ORIGIN",
  "T_EXPER_NUM", "T_EXPER_NAME", "T_EXPER_NOMINAL_START",
  "T_EXPER_NOMINAL_STOP", "T_PI_NAME", "T_PI_EMAIL", "T_CONTACT_NAME",
  "T_CONTACT_EMAIL", "T_SCHEDULER_NAME", "T_SCHEDULER_EMAIL",
  "T_TARGET_CORRELATOR", "T_EXPER_DESCRIPTION", "T_SCHEDULING_SOFTWARE",
  "T_VEX_FILE_WRITER", "T_EXTENSION", "T_HEADSTACK_POS", "T_IF_DEF",
  "T_RECEIVER_NAME", "T_SUB_LO_FREQUENCIES", "T_SUB_LO_SIDEBANDS",
  "T_SWITCHED_POWER", "T_PASS_ORDER", "T_S2_GROUP_ORDER",
  "T_PHASE_CAL_DETECT", "T_TAPE_CHANGE", "T_NEW_SOURCE_COMMAND",
  "T_NEW_TAPE_SETUP", "T_SETUP_ALWAYS", "T_PARITY_CHECK", "T_TAPE_PREPASS",
  "T_PREOB_CAL", "T_MIDOB_CAL", "T_POSTOB_CAL", "T_HEADSTACK_MOTION",
  "T_PROCEDURE_NAME_PREFIX", "T_ROLL_REINIT_PERIOD", "T_ROLL_INC_PERIOD",
  "T_ROLL", "T_ROLL_DEF", "T_SEFD_MODEL", "T_SEFD", "T_SITE_TYPE",
  "T_SITE_NAME", "T_SITE_ID", "T_SITE_POSITION", "T_SITE_POSITION_EPOCH",
  "T_SITE_POSITION_REF", "T_SITE_VELOCITY", "T_HORIZON_MAP_AZ",
  "T_HORIZON_MAP_EL", "T_ZEN_ATMOS", "T_OCEAN_LOAD_VERT",
  "T_OCEAN_LOAD_HORIZ", "T_OCCUPATION_CODE", "T_INCLINATION",
  "T_ECCENTRICITY", "T_ARG_PERIGEE", "T_ASCENDING_NODE", "T_MEAN_ANOMALY",
  "T_SEMI_MAJOR_AXIS", "T_MEAN_MOTION", "T_ORBIT_EPOCH", "T_SOURCE_TYPE",
  "T_SOURCE_NAME", "T_IAU_NAME", "T_RA", "T_DEC", "T_SOURCE_POSITION_REF",
  "T_RA_RATE", "T_DEC_RATE", "T_SOURCE_POSITION_EPOCH",
  "T_REF_COORD_FRAME", "T_VELOCITY_WRT_LSR", "T_SOURCE_MODEL",
  "T_BSP_FILE_NAME", "T_BSP_OBJECT_ID", "T_TLE0", "T_TLE1", "T_TLE2",
  "T_DATUM", "T_VECTOR", "T_VSN", "T_FANIN_DEF", "T_FANOUT_DEF",
  "T_TRACK_FRAME_FORMAT", "T_DATA_MODULATION", "T_VLBA_FRMTR_SYS_TRK",
  "T_VLBA_TRNSPRT_SYS_TRK", "T_S2_RECORDING_MODE", "T_S2_DATA_SOURCE",
  "T_FORMAT_DEF", "T_THREAD_DEF", "T_CHANNEL_DEF", "B_GLOBAL", "B_STATION",
  "B_MODE", "B_SCHED", "B_EXPER", "B_SCHEDULING_PARAMS", "B_PROCEDURES",
  "B_EOP", "B_FREQ", "B_CLOCK", "B_ANTENNA", "B_BBC", "B_CORR", "B_DAS",
  "B_HEAD_POS", "B_PASS_ORDER", "B_PHASE_CAL_DETECT", "B_ROLL", "B_IF",
  "B_SEFD", "B_SITE", "B_SOURCE", "B_TRACKS", "B_TAPELOG_OBS",
  "B_BITSTREAMS", "B_THREADS", "B_DATASTREAMS", "B_EXTENSIONS",
  "T_LITERAL", "T_NAME", "T_LINK", "T_ANGLE", "T_COMMENT",
  "T_COMMENT_TRAILING", "'='", "';'", "':'", "$accept", "vex",
  "version_lowls", "version_lowl", "version", "blocks", "block",
  "global_block", "station_block", "station_defs", "station_defx",
  "station_def", "mode_block", "mode_defs", "mode_defx", "mode_def",
  "refs", "refx", "ref", "primitive", "qrefs", "qrefx", "qref",
  "qualifiers", "sched_block", "sched_defs", "sched_defx", "sched_def",
  "sched_lowls", "sched_lowl", "start", "mode", "source",
  "source_stations", "source_station", "station", "data_transfer",
  "intent", "pointing_offset", "start_position", "pass", "sector",
  "drives", "scan_id", "method", "destination", "options", "antenna_block",
  "antenna_defs", "antenna_defx", "antenna_def", "antenna_lowls",
  "antenna_lowl", "antenna_diam", "axis_type", "axis_offset",
  "antenna_motion", "pointing_sector", "nasmyth", "bbc_block", "bbc_defs",
  "bbc_defx", "bbc_def", "bbc_lowls", "bbc_lowl", "bbc_assign",
  "bitstreams_block", "bitstreams_defs", "bitstreams_defx",
  "bitstreams_def", "bitstreams_lowls", "bitstreams_lowl", "stream_def",
  "stream_sample_rate", "stream_label", "clock_block", "clock_defs",
  "clock_defx", "clock_def", "clock_lowls", "clock_lowl", "clock_early",
  "das_block", "das_defs", "das_defx", "das_def", "das_lowls", "das_lowl",
  "record_transport_type", "electronics_rack_type", "number_drives",
  "headstack", "record_density", "tape_length", "recording_system_id",
  "tape_motion", "tape_control", "equip", "composite_equip", "equip_set",
  "equip_info", "connection", "record_method", "record_control",
  "datastreams_block", "datastreams_defs", "datastreams_defx",
  "datastreams_def", "datastreams_lowls", "datastreams_lowl", "datastream",
  "thread", "channel", "merged_datastream", "eop_block", "eop_defs",
  "eop_defx", "eop_def", "eop_lowls", "eop_lowl", "tai_utc", "a1_tai",
  "eop_ref_epoch", "num_eop_points", "eop_interval", "ut1_utc", "x_wobble",
  "y_wobble", "nut_ref_epoch", "num_nut_points", "nut_interval",
  "delta_psi", "delta_eps", "nut_model", "eop_origin", "delta_x_nut",
  "delta_y_nut", "nut_origin", "exper_block", "exper_defs", "exper_defx",
  "exper_def", "exper_lowls", "exper_lowl", "exper_num", "exper_name",
  "exper_description", "exper_nominal_start", "exper_nominal_stop",
  "pi_name", "pi_email", "contact_name", "contact_email", "scheduler_name",
  "scheduler_email", "target_correlator", "scheduling_software",
  "vex_file_writer", "extensions_block", "extensions_defs",
  "extensions_defx", "extensions_def", "extensions_lowls",
  "extensions_lowl", "extension", "freq_block", "freq_defs", "freq_defx",
  "freq_def", "freq_lowls", "freq_lowl", "chan_def", "switch_states",
  "switch_state", "sample_rate", "bits_per_sample", "switching_cycle",
  "head_pos_block", "head_pos_defs", "head_pos_defx", "head_pos_def",
  "head_pos_lowls", "head_pos_lowl", "headstack_pos", "if_block",
  "if_defs", "if_defx", "if_def", "if_lowls", "if_lowl", "if_def_st",
  "receiver_name", "sub_lo_frequencies", "sub_lo_sidebands",
  "switched_power", "pass_order_block", "pass_order_defs",
  "pass_order_defx", "pass_order_def", "pass_order_lowls",
  "pass_order_lowl", "pass_order", "s2_group_order",
  "phase_cal_detect_block", "phase_cal_detect_defs",
  "phase_cal_detect_defx", "phase_cal_detect_def",
  "phase_cal_detect_lowls", "phase_cal_detect_lowl", "phase_cal_detect",
  "procedures_block", "procedures_defs", "procedures_defx",
  "procedures_def", "procedures_lowls", "procedures_lowl", "tape_change",
  "headstack_motion", "new_source_command", "new_tape_setup",
  "setup_always", "parity_check", "tape_prepass", "preob_cal", "midob_cal",
  "postob_cal", "procedure_name_prefix", "roll_block", "roll_defs",
  "roll_defx", "roll_def", "roll_lowls", "roll_lowl", "roll_reinit_period",
  "roll_inc_period", "roll", "roll_def_st", "scheduling_params_block",
  "scheduling_params_defs", "scheduling_params_defx",
  "scheduling_params_def", "scheduling_params_lowls",
  "scheduling_params_lowl", "sefd_block", "sefd_defs", "sefd_defx",
  "sefd_def", "sefd_lowls", "sefd_lowl", "sefd_model", "sefd",
  "site_block", "site_defs", "site_defx", "site_def", "site_lowls",
  "site_lowl", "site_type", "site_name", "site_id", "site_position",
  "site_position_epoch", "site_position_ref", "site_velocity",
  "horizon_map_az", "horizon_map_el", "zen_atmos", "ocean_load_vert",
  "ocean_load_horiz", "occupation_code", "inclination", "eccentricity",
  "arg_perigee", "ascending_node", "mean_anomaly", "semi_major_axis",
  "mean_motion", "orbit_epoch", "source_block", "source_defs",
  "source_defx", "source_def", "source_lowls", "source_lowl",
  "source_type", "source_name", "iau_name", "ra", "dec", "ref_coord_frame",
  "source_position_ref", "source_position_epoch", "ra_rate", "dec_rate",
  "velocity_wrt_lsr", "source_model", "bsp_file_name", "bsp_object_id",
  "tle0", "tle1", "tle2", "datum", "vector", "tapelog_obs_block",
  "tapelog_obs_defs", "tapelog_obs_defx", "tapelog_obs_def",
  "tapelog_obs_lowls", "tapelog_obs_lowl", "vsn", "tracks_block",
  "tracks_defs", "tracks_defx", "tracks_def", "tracks_lowls",
  "tracks_lowl", "fanin_def", "fanout_def", "track_frame_format",
  "data_modulation", "vlba_frmtr_sys_trk", "vlba_trnsprt_sys_trk",
  "s2_recording_mode", "s2_data_source", "bit_stream_list",
  "threads_block", "threads_defs", "threads_defx", "threads_def",
  "threads_lowls", "threads_lowl", "format_def", "thread_def",
  "channel_def", "optional_name", "optional_value", "external_ref",
  "literal", "unit_list", "unit_more", "unit_option", "unit_value",
  "name_list", "name_value", "value_list", "value", "value2",
  "unit_value2", "name_or_not", "link_list", "link_or_not", "empty_value",
  "empty_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1889)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-881)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,  -132, -1889, -1889,    80,   200, -1889, -1889,  -116, -1889,
    -100,   -90,   -79,   -76,   -26,   -17,     2,    22,    49,    58,
      66,    81,    83,    90,   118,   148,   156,   159,   177,   196,
     206,   210,   220,   224,   241,   262,   264, -1889,  1118, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889,   269,   129,    72,
     115,   246,   153,   215,   268,   301,   313,   355,   385,   393,
     415,   438,   469,   509,   518,   592,   621,   669,   763,   769,
     772,   778,   792,   798,   827, -1889, -1889,  1142, -1889, -1889,
     129, -1889, -1889,   277, -1889, -1889,    72, -1889, -1889,   284,
   -1889, -1889,   115, -1889, -1889,   286, -1889, -1889,   246, -1889,
   -1889,   293, -1889, -1889,   153, -1889, -1889,   297, -1889, -1889,
     215, -1889, -1889,   308, -1889, -1889,   268, -1889, -1889,   315,
   -1889, -1889,   301, -1889, -1889,   324, -1889, -1889,   313, -1889,
   -1889,   326, -1889, -1889,   355, -1889, -1889,   341, -1889, -1889,
     385, -1889, -1889,   360, -1889, -1889,   393, -1889, -1889,   369,
   -1889, -1889,   415, -1889, -1889,   392, -1889, -1889,   438, -1889,
   -1889,   401, -1889, -1889,   469, -1889, -1889,   408, -1889, -1889,
     509, -1889, -1889,   424, -1889, -1889,   518, -1889, -1889,   429,
   -1889, -1889,   592, -1889, -1889,   432, -1889, -1889,   621, -1889,
   -1889,   434, -1889, -1889,   669, -1889, -1889,   439, -1889, -1889,
     763, -1889, -1889,   443, -1889, -1889,   769, -1889, -1889,   480,
   -1889, -1889,   772, -1889, -1889,   489, -1889, -1889,   778, -1889,
   -1889,   508, -1889, -1889,   792, -1889, -1889,   524, -1889, -1889,
     798, -1889, -1889,   528, -1889, -1889,   827, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889,   105, -1889,   344, -1889,   526, -1889,   529,
   -1889,   556, -1889,   565, -1889,   582, -1889,   598, -1889,   611,
   -1889,   614, -1889,   623, -1889,   626, -1889,   632, -1889,   640,
   -1889,   645, -1889,   648, -1889,   661, -1889,   665, -1889,   676,
   -1889,   678, -1889,   680, -1889,   689, -1889,   750, -1889,   765,
   -1889,   774, -1889,   797, -1889,   820, -1889,   600,   829,   834,
    1059,   615,   270,   351,   275,   310,   560,    67,   512,   861,
     522,    96,   587,   110,    75,    70,   113,   794,   278,   607,
     164,   599,   433,   202,   823,   830,   837,  1142,   833, -1889,
   -1889,   840, -1889, -1889,   836,   473,   670,   758,   773,   787,
     842,   844, -1889, -1889,  1078, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889,   835,   860,   867,   874,   883,   885,   888,
     891,   904,   906,   908,   915,   919,   926,   945,   969, -1889,
   -1889,  1054, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,   869,   963,
   -1889, -1889,   590, -1889, -1889, -1889,   970,   999,  1000,  1002,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1038, -1889, -1889,
    1076, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889,  1039,  1041,  1042,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,  1050,  1051,  1055,  1056,  1060,  1061,
    1062,  1063,  1064, -1889, -1889,   594, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889,  1053,  1065,  1066,  1067,
    1068, -1889, -1889,   340, -1889, -1889, -1889, -1889, -1889, -1889,
    1058,  1069, -1889, -1889,   610, -1889, -1889, -1889,  1070,  1072,
    1073,  1079,  1080,  1081,  1096, -1889, -1889,   104, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889,  1077,  1136, -1889, -1889,
     555, -1889, -1889, -1889,  1137,  1139,  1140,  1141,  1143,  1144,
    1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,
    1155, -1889, -1889,   964, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889,  1156,  1158, -1889, -1889,   694, -1889, -1889, -1889,
    1159,  1161,  1162, -1889, -1889,   527, -1889, -1889, -1889, -1889,
    1163,  1165, -1889, -1889,   786, -1889, -1889, -1889,  1166,  1168,
    1169,  1170,  1171, -1889, -1889,   307, -1889, -1889, -1889, -1889,
   -1889, -1889,  1172,  1174,  1175,  1176,  1177,  1178, -1889, -1889,
     207, -1889, -1889, -1889, -1889, -1889, -1889, -1889,  1179,  1181,
    1182, -1889, -1889,   296, -1889, -1889, -1889, -1889,  1183,  1185,
    1186,  1187,  1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,
    1196,  1197,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,
   -1889, -1889,   618, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889,  1206,  1208,  1209,  1210,
    1211,  1212,  1213,  1214,  1215,  1216,  1217,  1218,  1219,  1220,
    1221,  1222,  1223,  1224,  1225,  1226, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889,  1084, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,  1227,  1229,
    1230,  1231,  1232,  1233,  1234,  1235,  1236, -1889, -1889, -1889,
     757, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889,  1237,  1239, -1889, -1889,   824, -1889, -1889, -1889,  1240,
    1242,  1243,  1244, -1889, -1889,   483, -1889, -1889, -1889, -1889,
   -1889,  1245,  1247,  1248,  1249, -1889, -1889,   666, -1889, -1889,
   -1889, -1889, -1889,  1250,  1252,  1253,  1254,  1255, -1889, -1889,
     472, -1889, -1889, -1889, -1889, -1889, -1889,  1256,  1258, -1889,
   -1889,   870, -1889, -1889, -1889, -1889, -1889,  1259,  1261, -1889,
    1262, -1889, -1889,  1075,  1164,  1184,  1264,  1267,  1269,  1269,
    1265, -1889,  1037, -1889,  1270,  1272,  1273,  1274,  1275,  1276,
    1277,  1278,  1279,  1280,  1281,  1282,  1283,  1284,  1285, -1889,
   -1889, -1889,  1286, -1889, -1889,  1287,  1287,  1287,  1288,  1288,
    1288,  1288,  1288,  1288,  1287,  1289,  1290, -1889, -1889,  1287,
    1287,  1293,  1270,  1287,   -82,   -32,   -22,  1294,  1270,  1287,
      -7,    10,  1295,  1297,    13,    21,  1298,  1296, -1889, -1889,
    1160,  1287,  1270,  1299,  1300, -1889, -1889,  1269,  1301, -1889,
   -1889,  1287,  1287,  1303,  1167,  1304,  1241,  1302, -1889, -1889,
    1260,  1305, -1889, -1889,  1309,  1310,  1270,  1270,  1312,  1287,
    1270,  1313,  1314,  1315,  1316,  1317,  1318,  1319,  1321,  1270,
    1320, -1889, -1889,  1270,  1322, -1889, -1889,  1288,  1270,  1323,
   -1889, -1889,  1324,  1325, -1889, -1889,  1287,  1270,  1327,  1270,
    1326, -1889, -1889,  1329,  1332,  1333,  1334,  1335,  1331, -1889,
   -1889,  1338,  1339,  1336, -1889, -1889,  1341,  1343,  1344,  1287,
    1345,  1346,  1287,  1287,  1287,  1287,  1287,  1287,  1288,  1287,
    1270,  1287,  1287,  1287,  1287,  1270,  1347,  1342, -1889, -1889,
    1349,  1350,  1351,  1352,  1337,  1353,  1287,  1287,  1354,  1355,
    1287,  1270,  1356,  1357,  1358,  1359,  1360,  1288,  1288,  1361,
   -1889, -1889,  1362,  -135,  1363,  1364,  1270,  1270,  1365,  1366,
    1367, -1889, -1889,  1270,  1368, -1889, -1889,  1369,  1287,  1371,
    1370, -1889, -1889,  1372,  1270,  1374,  1373, -1889, -1889,  1376,
    1377,  1379,  1160,  1375, -1889, -1889,  1382,  1378, -1889, -1889,
    1383, -1889,  1380,  -104,  1381,  1135, -1889,  1238, -1889,  1384,
    1385, -1889,  1142, -1889,  1387,   -92,  1388,  1389,  1390,  1391,
    1392,  1393,  1394,  1395,  1396,  1397,   -60,   -56, -1889, -1889,
    1404,  1399,  1400,  1401, -1889,  1402,  1403,  1405,  1406,  1407,
    1408,  1410,  1411, -1889,  1412,  1413,  1414,  1415,  1416, -1889,
    1417,  1418, -1889,  1420, -1889,  1421,  1422,  1423,  1424, -1889,
    1425, -1889,  1426,  1427,   -42, -1889,  1428, -1889,  1429,   218,
   -1889, -1889,  1430,  1432,  1433,  1434, -1889,  1435, -1889,  1437,
    1438,  1439,  1440,   227,  1441, -1889,  1442, -1889,  1444,  1445,
    1446,  1447,  1436,   258,  1449,   300,  1450,  1451,  1452,  1453,
    1454,  1455,   327,  1457, -1889,  1458, -1889,   332, -1889,   339,
   -1889, -1889,   342, -1889,  1460,  1461,  1462,   346, -1889,  1463,
    1464,  1465,  1466,  1467, -1889,  1469,  1470, -1889,  1472,  1473,
     350,  1474,  1476,  1477,  1478,  1480,  1481,  1482,  1483,  1484,
    1486,  1487,  1488,  1489,  1490,  1491,  1492,  1493,  1494, -1889,
     365,  1495,  1496,  1497,  1498,  1499,  1500,  1501,  1502,  1503,
    1504,  1505,  1507,  1508,  1509,  1510,  1511,  1512,  1513, -1889,
    1514,  1515,  1456,  1517,  1518,  1519,  1520,  1522,   371, -1889,
    1523, -1889,  1524,   373,   376, -1889,   378,  1525,  1526, -1889,
    1527,  1528,  1529,  1530, -1889,  1531, -1889,   380, -1889, -1889,
    1539, -1889,  1287,  1540,  1288,  1288,  1311, -1889, -1889,  1541,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889,  -130, -1889,  -126, -1889, -1889, -1889, -1889,  1287,  1287,
    1287,  1287,  1287,  1287, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889,  1542, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889,  1543, -1889, -1889, -1889,  1544,  1287, -1889, -1889,
    1287,  1287, -1889, -1889,  1287,  1545, -1889,  1546,  1547,  1270,
   -1889, -1889, -1889,   -95,  1548, -1889,  1549, -1889, -1889,  1287,
   -1889,  1550,  1468,  1551,  1552,  1475, -1889,  1553, -1889,  1287,
   -1889,  1288, -1889,  1270, -1889,  1270, -1889, -1889, -1889, -1889,
     -51,  1555,  1287,  1288,  1556, -1889,  1287, -1889, -1889, -1889,
    1557,  1287, -1889, -1889,  1287, -1889, -1889, -1889,  1287,  1287,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
    1558, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889,  1479, -1889, -1889, -1889, -1889, -1889,  1288,  1287,  1270,
    1456,  1554,  1559, -1889, -1889,  1560,  1270, -1889, -1889,  1561,
    1563,  1564, -1889,  1566, -1889,  1567, -1889,  1565,  1270,  1270,
    1569,  1570,  1571,  1269,  1573, -1889,  1574,   404, -1889,   410,
    1568, -1889,  1572,  1575,  1576,  1577,  1578,   440,  1580,   444,
    1581,  1579,  1582,  1583,  1584,  1585,  1586,  1404,  1587, -1889,
   -1889, -1889,  1589,  1590,  1591,  1593,   478,  1594,  1595,   504,
    1597,  1598,  1599,  1270, -1889,  1600,   511,  1601,  1602,  1603,
    1604,  1605,  1613,  1608,  1609,  1611, -1889, -1889,   513,  1612,
    1615,  1614,  1616,   573,   578,  1617,  1619,  1620,  1621,  1623,
    1624,  1625,  1626,  1627,  1628,  1629,  1630,  1631,  1618,   302,
    1632,  1634,  1635,  1636,  1637,  1639,  1640, -1889,   609,  1641,
    1642,   620,  1643,  1644,  1645,  1646, -1889, -1889,  1647, -1889,
    1539,  1287,  1654,  1288,  1287,  1649, -1889, -1889,  1656,  1651,
   -1889,  1658,  1653, -1889, -1889, -1889,  1288,  1288,  1288,  1542,
   -1889, -1889,  1660, -1889, -1889,  1661,  1287,  1287, -1889,  1287,
   -1889,  1596,  1270,  1657,  1270, -1889,  1287,  1622,  1663,  1542,
    1288,  1662,  1659, -1889,  1287, -1889, -1889,  1665,  1664, -1889,
   -1889, -1889, -1889,  1287,  1270, -1889,  1287,  1287, -1889, -1889,
   -1889,  1667,  1287,  1386,  1287,  1270,   302, -1889,  1666,  1668,
    1270, -1889,  1669,  1672,  1539, -1889, -1889, -1889,  1270,  1270,
    1270, -1889,  1674,  1270,  1675,  1676,  1542, -1889,   652,  1671,
   -1889,  1673,  1677,  1678, -1889,  1680, -1889,  1681, -1889,  1682,
    1683,  1684, -1889,  1685,  1686,  1687,   656,  1688,  1690,  1691,
    1692, -1889,  1693,  1694,   658,   671,   674,   682,   686,  1696,
    1697,  1287,  1699,   747,  1700,  1701,  1702,  1703,   752,  1704,
    1705,  1706,  1679,  1270,   779,  1708,  1709,  1710,  1712, -1889,
    1713,  1715,  1716,  1717,  1718,  1719,   781, -1889,  1723,   793,
   -1889,  1287,  1727, -1889,  1288, -1889, -1889, -1889, -1889, -1889,
    1287,  1542, -1889, -1889,  1287,  1287, -1889, -1889, -1889, -1889,
    1287, -1889,  1728, -1889,  1714, -1889, -1889, -1889,  1729, -1889,
    1287,  1724, -1889, -1889, -1889, -1889, -1889,  1287, -1889,  1553,
    1287,  1456,  1270, -1889,   814, -1889,  1270, -1889,  1730,  1270,
   -1889,  1270, -1889, -1889,  1270,  1270,  1731, -1889, -1889, -1889,
   -1889,  1726, -1889,  1734,  1732,  1733,  1735,   818,  1736,  1738,
     839,  1739,  1740, -1889,   845,  1741,  1742,  1743,  1737,  1744,
    1746,  1747,   848,   850,   852, -1889,  1749,   854,   856,  1750,
    1751,  1753,   871,  1748, -1889,  1727,  1287,  1160, -1889,  1287,
   -1889, -1889, -1889,   -10, -1889, -1889, -1889,  1752, -1889,  1756,
    1760,   901,  1270, -1889,  1287, -1889,  1553, -1889,  1761, -1889,
   -1889, -1889,  1714, -1889,  1762,  1270,  1287, -1889, -1889,  1714,
   -1889,  1754,   909,  1758,  1759,   912,  1763,  1764,  1765,  1766,
   -1889,  1768,   916, -1889,  -131,  1769,  1771,  1772,  1773,   923,
    1775,  1776,  1777,   940,  1767, -1889,  1779, -1889,  1774, -1889,
    1287, -1889, -1889,  1287,  1778, -1889, -1889,  -113, -1889,   946,
     948,  1287, -1889, -1889,  1553, -1889, -1889,  1270,  1270, -1889,
   -1889,  1780, -1889,  1782,   950,   952,  1783,  1784,  1785,  1786,
    1789, -1889,  1788,   954, -1889,  1287, -1889,   -48,  1790,  1792,
    1793,   965,  1794,  1270, -1889, -1889,  1160, -1889,  1287,  1287,
    1287,  1287,  1287,  1796, -1889, -1889,    92,  1797, -1889,  1287,
     983,  1287, -1889,  1287, -1889,  1565,  1795,  1798,  1799,   985,
    1801,  1802,  1803,  1804,   987, -1889, -1889,  1805, -1889,  1806,
   -1889,  1287,  1807,  1809,   990,  1810, -1889,  1270, -1889,     4,
     992, -1889, -1889, -1889, -1889, -1889, -1889,  1813, -1889, -1889,
    1812,  1287, -1889, -1889,  1565,  1270, -1889,  1270,   994, -1889,
   -1889, -1889,  1814, -1889,  1815,   996,  1816, -1889, -1889, -1889,
   -1889,  1270, -1889,  1817, -1889
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     7,     8,     0,     3,     5,     6,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     2,    11,
      12,    13,    14,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    15,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,     0,    40,    42,
      51,    99,   383,   624,   566,   324,   448,   221,   150,   182,
     244,   476,   531,   549,   602,   492,   639,   657,   714,   798,
     781,   198,   834,   300,   432,    10,     9,     0,    62,    63,
      39,    60,    61,     0,    46,    47,    41,    44,    45,     0,
      55,    56,    50,    53,    54,     0,   103,   104,    98,   101,
     102,     0,   387,   388,   382,   385,   386,     0,   628,   629,
     623,   626,   627,     0,   570,   571,   565,   568,   569,     0,
     328,   329,   323,   326,   327,     0,   452,   453,   447,   450,
     451,     0,   225,   226,   220,   223,   224,     0,   154,   155,
     149,   152,   153,     0,   186,   187,   181,   184,   185,     0,
     248,   249,   243,   246,   247,     0,   480,   481,   475,   478,
     479,     0,   535,   536,   530,   533,   534,     0,   553,   554,
     548,   551,   552,     0,   606,   607,   601,   604,   605,     0,
     496,   497,   491,   494,   495,     0,   643,   644,   638,   641,
     642,     0,   661,   662,   656,   659,   660,     0,   718,   719,
     713,   716,   717,     0,   802,   803,   797,   800,   801,     0,
     785,   786,   780,   783,   784,     0,   202,   203,   197,   200,
     201,     0,   838,   839,   833,   836,   837,     0,   304,   305,
     299,   302,   303,     0,   436,   437,   431,   434,   435,    65,
      66,    67,    68,    69,    73,    70,    71,    74,    75,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    72,
      88,    76,    77,     0,    59,     0,    43,     0,    52,     0,
     100,     0,   384,     0,   625,     0,   567,     0,   325,     0,
     449,     0,   222,     0,   151,     0,   183,     0,   245,     0,
     477,     0,   532,     0,   550,     0,   603,     0,   493,     0,
     640,     0,   658,     0,   715,     0,   799,     0,   782,     0,
     199,     0,   835,     0,   301,     0,   433,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,   116,   117,     0,   108,   109,   110,   111,   112,
     113,   114,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   408,
     409,     0,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,     0,     0,
     636,   637,     0,   633,   634,   635,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   588,   589,
       0,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   353,   354,     0,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,     0,     0,     0,     0,
       0,   463,   464,     0,   457,   458,   459,   460,   461,   462,
       0,     0,   233,   234,     0,   230,   231,   232,     0,     0,
       0,     0,     0,     0,     0,   167,   168,     0,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,   194,   195,
       0,   191,   192,   193,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   271,   272,     0,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,     0,     0,   488,   489,     0,   485,   486,   487,
       0,     0,     0,   544,   545,     0,   540,   541,   542,   543,
       0,     0,   561,   562,     0,   558,   559,   560,     0,     0,
       0,     0,     0,   617,   618,     0,   611,   612,   613,   614,
     615,   616,     0,     0,     0,     0,     0,     0,   508,   509,
       0,   501,   502,   503,   504,   505,   506,   507,     0,     0,
       0,   652,   653,     0,   648,   649,   650,   651,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     689,   690,     0,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
     683,   684,   685,   686,   687,   688,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   752,   753,   736,   737,
     738,   739,   740,   741,   742,   743,     0,   723,   724,   725,
     726,   727,   728,   729,   730,   731,   732,   733,   734,   735,
     745,   746,   747,   748,   749,   750,   751,   744,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   818,   819,   811,
       0,   807,   808,   809,   810,   812,   813,   814,   815,   816,
     817,     0,     0,   793,   794,     0,   790,   791,   792,     0,
       0,     0,     0,   212,   213,     0,   207,   208,   209,   210,
     211,     0,     0,     0,     0,   848,   849,     0,   843,   844,
     845,   846,   847,     0,     0,     0,     0,     0,   315,   316,
       0,   309,   310,   311,   312,   313,   314,     0,     0,   444,
     445,     0,   441,   442,   443,    64,    49,     0,     0,    58,
       0,    89,   106,     0,     0,     0,     0,   141,   881,   881,
       0,   107,     0,   390,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   391,
     631,   863,     0,   632,   573,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   574,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   332,   455,
     885,     0,     0,     0,     0,   456,   228,   881,     0,   229,
     157,     0,     0,     0,     0,     0,     0,     0,   158,   189,
       0,     0,   190,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   252,   483,     0,     0,   484,   538,     0,     0,     0,
     539,   556,     0,     0,   557,   609,     0,     0,     0,     0,
       0,   610,   499,     0,     0,     0,     0,     0,     0,   500,
     646,     0,     0,     0,   647,   664,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   665,   721,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     722,   805,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   806,   788,     0,     0,   789,   205,     0,     0,     0,
       0,   206,   841,     0,     0,     0,     0,   842,   307,     0,
       0,     0,   885,     0,   308,   439,     0,     0,   440,    48,
       0,    57,     0,     0,     0,     0,   142,     0,   882,     0,
       0,   105,     0,   876,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   389,   630,
       0,     0,     0,     0,   873,     0,     0,     0,     0,     0,
       0,     0,     0,   572,     0,     0,     0,     0,     0,   361,
       0,   865,   363,     0,   365,     0,     0,     0,     0,   370,
       0,   372,     0,     0,     0,   377,     0,   379,     0,     0,
     330,   886,     0,     0,     0,     0,   454,     0,   227,     0,
       0,     0,     0,     0,     0,   156,     0,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,   482,     0,   872,     0,
     875,   537,     0,   555,     0,     0,     0,     0,   608,     0,
       0,     0,     0,     0,   498,     0,     0,   645,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   663,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   720,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   804,
       0,   787,     0,     0,     0,   204,     0,     0,     0,   840,
       0,     0,     0,     0,   306,     0,   438,     0,   118,   123,
     877,   119,     0,   143,     0,     0,     0,   410,   411,     0,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   413,
     423,     0,   427,     0,   870,   590,   592,   593,     0,     0,
       0,     0,     0,     0,   591,   600,   355,   356,   357,   358,
     359,   360,     0,   362,   364,   366,   367,   368,   369,   371,
     373,   374,     0,   376,   378,   380,     0,     0,   472,   473,
       0,     0,   169,   173,     0,     0,   171,     0,     0,     0,
     273,   274,   275,     0,     0,   279,     0,   281,   282,     0,
     285,     0,     0,     0,     0,     0,   297,   879,   298,     0,
     546,     0,   547,     0,   564,     0,   619,   620,   621,   622,
       0,     0,     0,     0,     0,   654,     0,   691,   692,   693,
       0,     0,   696,   697,     0,   699,   700,   701,     0,     0,
     704,   705,   706,   707,   708,   709,   710,   711,   712,   754,
     881,   757,   758,   759,   760,   762,   764,   765,   763,   761,
     766,     0,   768,   769,   770,   771,   772,     0,     0,     0,
       0,     0,     0,   823,   824,     0,     0,   828,   830,     0,
       0,     0,   217,     0,   219,     0,   852,   858,     0,     0,
       0,     0,     0,   881,     0,    95,     0,     0,   878,     0,
       0,   144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   876,   864,   867,
     868,   869,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   871,   874,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   882,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   859,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    94,     0,   122,
     877,     0,   145,     0,     0,     0,   412,   424,     0,     0,
     428,     0,     0,   594,   595,   596,     0,     0,     0,     0,
     375,   381,     0,   474,   242,   888,     0,     0,   170,     0,
     180,     0,     0,     0,     0,   283,     0,     0,     0,     0,
       0,     0,   870,   296,     0,   490,   563,     0,     0,   525,
     526,   527,   529,     0,     0,   694,     0,     0,   702,   703,
     755,     0,     0,     0,     0,     0,     0,   832,     0,     0,
       0,   827,     0,     0,   877,   216,   218,   851,   860,     0,
       0,   318,     0,     0,     0,     0,     0,    96,     0,     0,
     146,     0,     0,     0,   862,     0,   426,     0,   430,     0,
       0,     0,   866,     0,     0,     0,     0,     0,     0,     0,
       0,   277,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   861,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
     125,   132,   879,   130,     0,   425,   429,   597,   598,   599,
       0,     0,   887,   174,     0,     0,   172,   196,   276,   280,
       0,   287,     0,   288,     0,   290,   291,   294,   881,   295,
       0,     0,   528,   655,   695,   698,   756,     0,   773,   879,
       0,     0,     0,   831,     0,   826,     0,   829,     0,     0,
     850,     0,   857,   317,     0,     0,     0,   446,   126,   120,
     124,     0,   133,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   884,     0,   882,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   822,     0,     0,     0,     0,
       0,     0,     0,   134,   880,   879,     0,   885,   240,   887,
     887,   175,   177,     0,   284,   286,   289,     0,   293,     0,
       0,     0,     0,   774,     0,   776,   879,   820,     0,   821,
     825,   795,     0,   215,     0,     0,     0,   320,   322,     0,
     135,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     883,     0,     0,   518,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   129,   147,   131,     0,   238,
     887,   887,   887,     0,     0,   292,   512,     0,   520,     0,
       0,     0,   775,   777,   879,   796,   214,     0,     0,   321,
     137,     0,   148,     0,     0,     0,     0,     0,     0,     0,
       0,   514,     0,     0,   519,     0,   521,     0,     0,     0,
       0,     0,     0,   138,   128,   465,   885,   236,     0,     0,
       0,     0,     0,     0,   513,   515,     0,     0,   517,     0,
       0,     0,   778,     0,   856,   858,     0,     0,   139,     0,
       0,     0,     0,     0,     0,   179,   511,     0,   523,     0,
     516,     0,     0,     0,     0,     0,   127,     0,   466,     0,
       0,   470,   235,   237,   239,   241,   176,     0,   510,   524,
       0,     0,   779,   855,   858,     0,   140,     0,     0,   471,
     467,   469,     0,   522,     0,     0,     0,   468,   178,   767,
     854,   860,   319,     0,   853
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1889, -1889, -1889,  1471, -1889, -1889,  1330, -1889, -1889, -1889,
    1340, -1889, -1889, -1889,  1448, -1889,  1024,   -49, -1889,  -358,
   -1889,   967, -1889, -1889, -1889, -1889,  1537, -1889, -1889,   995,
   -1889, -1889, -1889, -1889,  -287, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,  1263,
   -1889, -1889,   944, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889,  1348, -1889, -1889,   927, -1889, -1889, -1889,  1398, -1889,
   -1889,   646, -1889, -1889, -1889, -1889, -1889,  1521, -1889, -1889,
     968, -1889, -1889, -1889,  1409, -1889, -1889,   918, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889,  1246, -1889, -1889,   693,
   -1889, -1889, -1889, -1889, -1889, -1889,  1538, -1889, -1889,  1030,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
    1592, -1889, -1889,  1291, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
    1535, -1889, -1889,   721, -1889, -1889, -1889,  1633, -1889, -1889,
    1086, -1889,  -380, -1888,  -347, -1889, -1889, -1889, -1889,  1695,
   -1889, -1889,   980, -1889, -1889, -1889,  1610, -1889, -1889,   962,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889,  1431, -1889, -1889,
     975, -1889, -1889, -1889, -1889,  1588, -1889, -1889,  1017, -1889,
   -1889, -1889,  1755, -1889, -1889,  1506, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,  1698,
   -1889, -1889,  1019, -1889, -1889, -1889, -1889, -1889, -1889,  1745,
   -1889, -1889,  1307, -1889, -1889,  1652, -1889, -1889,  1097, -1889,
   -1889, -1889, -1889,  1808, -1889, -1889,  1027, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
    -345,  -344,  -318,  -317,  -314,  -310,  -309,  -308, -1889, -1889,
    1707, -1889, -1889,   984, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1889,  1650, -1889, -1889,   976, -1889,
   -1889, -1889,  1606, -1889, -1889,   997, -1889, -1889, -1889, -1889,
   -1889, -1889, -1889, -1889, -1370, -1889, -1889,  1533, -1889, -1889,
     988, -1889, -1889, -1889, -1856,  -202,  -328, -1889,  -859, -1525,
   -1504,  -745, -1320,  -875,  -959,  -854, -1478,  -667,  -848, -1614,
   -1060, -1678, -1889
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,     6,     7,    38,    39,    40,    41,   106,
     107,   108,    42,   112,   113,   114,   100,   101,   102,   283,
     371,   372,   373,  1447,    43,   118,   119,   120,   384,   385,
     386,   387,   388,  1689,  1690,   389,   390,   391,   392,  1751,
    1821,  1871,  1917,  1077,  1452,  1631,  1873,    44,   160,   161,
     162,   537,   538,   539,   540,   541,   542,   543,   544,    45,
     166,   167,   168,   550,   551,   552,    46,   238,   239,   240,
     795,   796,   797,   798,   799,    47,   154,   155,   156,   524,
     525,   526,    48,   172,   173,   174,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,    49,   250,   251,   252,   820,   821,
     822,   823,   824,   825,    50,   142,   143,   144,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,    51,   124,
     125,   126,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,    52,   256,
     257,   258,   831,   832,   833,    53,   148,   149,   150,   513,
     514,   515,  1940,  1941,   516,   517,   518,    54,   178,   179,
     180,   596,   597,   598,    55,   202,   203,   204,   640,   641,
     642,   643,   644,   645,   646,    56,   184,   185,   186,   605,
     606,   607,   608,    57,   190,   191,   192,   614,   615,   616,
      58,   136,   137,   138,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,    59,   196,   197,
     198,   625,   626,   627,   628,   629,   630,    60,   130,   131,
     132,   432,   433,    61,   208,   209,   210,   653,   654,   655,
     656,    62,   214,   215,   216,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   701,   702,   703,   704,    63,   220,
     221,   222,   736,   737,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,    64,   232,   233,   234,   785,   786,   787,
      65,   226,   227,   228,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,  1422,    66,   244,   245,   246,   807,
     808,   809,   810,   811,  1528,  1678,   427,   435,  1120,  1468,
    1469,  1121,  1177,  1178,  1179,  1180,  1449,  1494,  1079,  1764,
    1142,  1758,  1645
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
    1084,  1080,  1263,  1105,  1106,  1107,  1108,  1109,  1110,   838,
    1187,   769,   728,   729,   434,   463,   505,   519,   527,   545,
     553,   591,   599,   609,   617,   631,   647,   657,   705,   757,
     780,   788,   800,   812,   826,   834,  1123,  1125,  1117,   730,
     731,  1130,  1132,   732,  1127,  1136,  1138,   733,   734,   735,
    1517,   284,  1961,  1503,  1656,  1642,  1241,     1,  1144,  1934,
    1100,  1457,  1628,  1242,     8,  1459,  1858,  1859,  1458,  1147,
    1961,   393,  1460,   528,   393,    67,   648,   103,  1100,   393,
       9,   632,  1160,  1161,  1881,  1882,  1164,   529,   530,   531,
     532,   533,   534,  1269,  1270,  1173,  1482,    68,  1965,  1175,
     393,  1686,   600,  1483,   434,  1278,  1279,    69,   393,  1100,
     927,  1826,  1827,  1185,   393,  1119,   618,   393,    70,   658,
     109,    71,   463,  1210,   529,   530,   531,   532,   533,   534,
    1101,  1102,  1103,    97,  1205,  1206,  1677,  1290,  1291,  1111,
    1499,  1292,  1293,  1100,  1114,  1115,  1212,  1500,  1118,  1908,
    1909,  1217,  1237,  1238,  1128,  1321,  1322,   505,   121,  1100,
     633,   634,   635,   636,   637,  1122,  1143,  1231,   393,  1100,
     789,    72,  1876,  1877,  1878,  1124,  1149,  1150,   649,   650,
      73,  1828,  1245,  1246,  1100,   519,   601,   602,  1829,  1250,
    1129,   790,   791,   792,  1163,  1083,   527,  1757,  1839,    74,
    1257,  1100,  1957,     1,  1100,  1843,   393,  1131,   827,   545,
    1135,   393,  1100,   978,   619,   620,   621,   622,  1137,    75,
     127,  1184,   553,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,  1201,   591,    76,  1204,     2,     3,
    1207,  1208,  1209,   115,  1211,    77,  1213,  1214,  1215,  1216,
    1657,   535,   536,    78,   651,   652,   104,   105,   599,   638,
     639,  1226,  1227,   133,   393,  1230,   428,   609,    79,   393,
      80,   464,   393,  1100,   758,   828,   617,    81,   508,  1926,
     603,   604,   633,   634,   635,   636,   637,   631,   535,   536,
     393,   337,   983,  1253,   623,   624,   139,   680,   681,   110,
     111,   393,   647,   970,   393,    82,   506,   284,   145,   507,
     508,   509,   510,    98,    99,   657,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   393,    83,   914,   122,   123,   507,
     508,   509,   510,    84,   705,   393,    85,   436,   793,   794,
     151,  1773,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    86,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     157,   728,   729,    87,     2,     3,   829,   830,   163,  1453,
    1454,   638,   639,    88,   649,   650,  1498,    89,   757,   128,
     129,   619,   620,   621,   622,  1325,  1326,    90,   730,   731,
     169,    91,   732,   769,  1336,  1337,   733,   734,   735,   759,
     760,   761,   762,   763,   764,   765,   766,   393,    92,   813,
     116,   117,   780,   175,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,  1345,  1346,   788,  1471,    93,
     429,    94,   134,   135,   430,   431,    96,   800,   285,   483,
     484,  1475,   767,   768,   181,   287,   393,   289,  1063,   812,
     814,   815,   816,   817,   291,  1481,  1496,   393,   293,  1050,
     651,   652,   826,  1083,  1608,   140,   141,  1348,  1349,   295,
    1495,   623,   624,   834,   511,   512,   297,   146,   147,  1497,
     790,   791,   792,  1502,   187,   299,   393,   301,   546,   814,
     815,   816,   817,   193,  1356,  1357,   393,  1450,   592,  1360,
    1361,   393,   303,   959,   511,   512,  1362,  1363,   547,  1364,
    1365,   338,  1514,  1369,  1363,   448,   449,  1379,  1380,   152,
     153,   305,  1512,  1461,  1462,  1463,  1464,  1465,  1466,   393,
     307,   931,  1399,  1400,   393,  1516,   520,  1470,  1428,  1429,
    1432,  1433,  1521,  1434,  1435,  1436,  1437,  1445,  1446,   158,
     159,   547,  1474,   309,  1529,  1530,  1476,   164,   165,  1477,
     521,   393,   311,   610,   393,  1534,   872,   199,   393,   313,
     907,  1537,  1538,   393,  1486,   801,   593,  1539,  1540,   170,
     171,   393,  1493,   781,   393,   315,   918,   601,   602,   393,
     317,   394,   393,   319,  1007,   321,   205,   818,   819,  1573,
     323,  1505,   176,   177,   325,  1663,  1507,  1547,  1548,  1508,
     521,  1550,  1551,  1509,  1510,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   182,   183,  1609,   818,   819,  1632,   843,
     393,   327,  1056,  1515,   211,  1564,  1565,   793,   794,   611,
     329,  1639,  1640,  1641,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   393,   331,
     954,  1568,  1569,   188,   189,  1471,   548,   549,  1575,  1576,
    1586,  1363,   194,   195,  1734,   333,   594,   595,  1650,   335,
    1652,   603,   604,   339,  1276,  1471,   340,  1824,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   548,
     549,  1670,  1671,   341,   522,   523,  1674,   782,   802,   803,
     804,   393,   342,  1040,  1679,  1680,  1681,   508,   217,  1683,
    1591,  1361,  1471,  1774,   223,  1592,  1593,   229,   593,   343,
     429,   612,   613,   235,   430,   431,   200,   201,   483,   484,
     393,   364,   963,   805,   806,   344,  1629,   241,   393,  1633,
     706,   783,   784,   247,   522,   523,  1617,  1618,   345,   409,
     410,   346,   680,   681,  1470,   206,   207,  1621,  1622,  1755,
     347,  1646,  1647,   348,  1648,   802,   803,   804,   393,   349,
    1044,  1653,   253,    97,  1470,   365,  1919,   350,   367,  1659,
     368,    97,   351,   837,   367,   352,   840,  1471,  1662,  1687,
    1688,  1664,  1665,  1703,  1704,  1711,  1712,  1667,   353,  1669,
     805,   806,   354,   212,   213,   393,   844,   554,  1713,  1714,
    1766,  1715,  1559,   355,   393,   356,  1067,   357,   611,  1716,
    1361,  1470,  1776,  1717,  1718,  1778,   358,  1779,   594,   595,
    1780,  1781,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   759,   760,
     761,   762,   763,   764,   765,   766,  1721,   672,   673,   674,
     675,   676,   677,   678,   679,   707,   708,   709,   710,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   724,   725,  1723,  1363,  1752,   359,  1835,  1728,
    1729,   767,   768,   828,   845,  1756,  1470,   218,   219,  1759,
    1760,  1841,   360,   224,   225,  1761,   230,   231,   393,   846,
     950,   361,   236,   237,   782,  1767,  1735,  1736,  1747,  1559,
     612,   613,  1769,   847,  1770,  1772,   242,   243,   726,   727,
    1749,  1688,   248,   249,   362,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,  1775,  1363,  1891,  1892,  1788,  1789,   363,   783,   784,
     835,   254,   255,    98,    99,  1754,   852,   836,   369,   370,
     839,    98,    99,   842,   369,   370,  1792,  1793,   848,  1918,
     849,  1823,  1796,  1797,  1825,  1805,  1806,  1807,  1808,  1809,
    1363,  1811,  1812,  1813,  1814,   571,   572,   853,   393,  1836,
     868,  1837,  1771,   854,   829,   830,   870,   374,  1818,  1819,
     855,  1842,   375,   376,   377,   378,   379,   380,   381,   856,
     393,   857,   886,  1956,   858,  1959,   850,   859,   393,  1860,
    1029,   375,   376,   377,   378,   379,   380,   381,  1833,  1834,
     860,  1966,   861,  1959,   862,  1875,  1845,  1846,  1879,  1849,
    1850,   863,  1883,  1856,  1857,   864,  1888,  1679,  1822,  1889,
    1865,  1797,   865,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,  1869,  1797,  1838,
    1907,   866,  1910,  1884,  1885,  1886,  1887,  1895,  1896,  1897,
    1898,  1905,  1906,  1920,  1921,  1922,  1923,  1924,   571,   572,
     871,  1927,  1914,  1915,  1929,   867,  1932,   874,  1933,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
    1930,  1931,  1938,  1939,  1946,  1947,  1950,  1953,  1954,  1960,
    1957,  1967,  1957,  1970,  1971,   875,   876,  1890,   877,   878,
     879,   880,   881,   882,   883,   884,  1964,   672,   673,   674,
     675,   676,   677,   678,   679,   707,   708,   709,   710,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   724,   725,   885,  1082,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   409,   410,
     909,   900,   901,   382,   383,   916,   902,   903,   904,   905,
     906,   910,   911,   912,   913,   917,  1072,   920,   921,   922,
     448,   449,   382,   383,   929,   923,   924,   925,   726,   727,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   926,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   930,  1272,   933,   934,   935,   936,   841,   937,
     938,   939,   940,   941,   942,   943,   944,   945,   946,   947,
     948,   949,  1141,   952,   953,  1073,   956,   957,   958,  1152,
     961,   962,   366,   965,   966,   967,   968,   969,    95,   972,
     973,   974,   975,   976,   977,  1074,   980,   981,   982,   851,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1750,  1009,  1010,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,   304,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1154,  1042,  1043,  1273,  1046,  1047,  1048,
    1049,  1051,  1052,  1053,  1054,  1055,   286,  1058,  1059,  1060,
    1061,  1062,  1156,  1065,  1066,  1075,  1069,  1070,  1076,  1071,
    1078,  1083,  1081,  1085,  1086,  1087,  1088,  1089,  1090,  1091,
    1092,  1093,  1094,  1095,  1096,  1097,    37,   932,  1100,  1104,
    1112,   928,  1098,  1099,  1116,  1126,  1133,  1113,  1134,  1139,
    1145,   951,   919,  1140,  1151,  1153,   334,  1146,  1148,  1155,
    1158,  1159,  1157,  1162,  1165,  1166,  1167,  1455,  1168,  1169,
    1170,  1171,  1172,  1064,   306,   908,  1182,  1174,  1186,  1176,
    1181,  1189,  1183,  1188,  1190,  1191,  1192,  1193,  1194,  1195,
    1224,  1196,  1198,  1197,  1199,  1200,  1202,  1203,  1218,  1219,
    1220,  1221,  1222,  1223,  1225,  1228,  1229,  1232,  1233,  1234,
    1235,  1236,  1068,  1240,  1243,  1244,  1247,  1248,  1239,  1958,
     288,  1252,  1254,  1256,  1249,  1251,  1258,  1255,  1260,  1261,
    1259,  1262,  1264,  1265,  1267,  1266,   955,  1268,  1271,  1668,
     960,   308,  1274,  1275,  1277,  1280,  1281,  1282,  1283,  1284,
    1285,  1286,  1287,  1288,  1289,  1294,  1295,  1296,  1297,   915,
    1298,  1299,   979,  1300,  1301,  1302,  1303,  1304,  1305,  1306,
    1307,  1308,  1309,  1310,  1311,   312,  1312,  1313,  1314,  1315,
    1316,  1317,  1318,  1319,  1320,  1323,  1324,  1344,  1327,  1328,
    1329,   964,  1330,  1331,  1332,  1333,   330,  1334,  1335,  1338,
    1339,  1340,  1341,  1342,   971,  1343,  1347,  1350,  1421,  1351,
    1352,  1353,  1354,  1355,  1358,   290,  1359,  1366,  1367,  1368,
    1488,  1370,  1371,  1372,  1373,  1374,  1375,  1491,  1376,  1377,
    1378,  1513,  1381,  1382,  1383,   302,  1384,  1385,  1386,  1387,
     298,  1388,  1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,
    1397,  1398,  1401,  1402,  1403,  1404,  1405,  1406,  1407,  1408,
    1409,  1410,   869,  1411,  1412,  1413,  1414,  1415,  1416,  1008,
    1417,  1418,  1419,  1420,  1423,  1424,   292,  1425,  1426,  1427,
    1030,  1430,  1431,  1438,  1439,  1440,  1441,  1442,  1443,  1444,
    1448,  1451,  1456,  1467,  1472,  1473,  1478,  1479,  1480,   873,
    1485,  1487,  1489,  1490,  1492,  1484,  1501,  1504,  1506,  1511,
     984,  1520,  1518,  1522,  1523,  1524,  1527,  1519,  1525,  1526,
    1531,  1045,  1532,  1533,  1535,  1536,  1541,  1041,  1545,  1973,
    1542,  1549,  1552,  1543,  1544,  1546,  1553,   332,   314,  1554,
    1555,   300,  1556,  1557,  1558,  1559,  1560,  1561,  1649,  1562,
    1563,   336,  1566,  1567,  1570,  1057,  1571,  1572,  1574,  1577,
    1578,  1579,  1580,  1581,  1582,  1583,  1588,  1584,  1585,  1607,
    1587,  1589,   318,  1590,  1654,  1594,  1595,     0,  1596,  1597,
    1598,  1599,  1600,     0,  1601,  1602,  1603,  1604,  1605,  1606,
    1610,  1611,   326,  1612,  1613,  1614,  1615,  1616,  1627,  1619,
    1620,  1623,  1624,  1625,  1626,  1630,  1634,  1635,  1636,  1637,
    1638,  1643,  1644,  1658,  1651,  1655,  1660,  -880,  1666,     0,
     320,  1675,  1661,  1676,  1672,  1682,  1673,  1684,  1685,  1691,
    1733,  1692,     0,   310,  1693,   294,  1694,  1695,  1696,  1697,
    1698,  1699,   328,  1700,  1701,  1702,  1705,  1706,  1707,  1708,
    1709,   296,  1710,  1719,   316,  1720,  1722,  1724,  1725,  1726,
       0,  1727,  1730,  1731,  1732,  1737,  1763,  1738,  1739,  1740,
       0,  1741,  1742,  1743,  1748,  1744,  1745,  1746,  1753,  1762,
    1765,  1777,  1768,  1782,  1783,  1784,     0,   324,  1801,     0,
    1785,  1786,     0,  1787,  1790,  1791,  1794,  1795,  1798,  1820,
    1799,  1800,  1802,  1803,  1830,  1804,  1810,  1831,  1815,  1816,
    1817,  1832,  1844,  1608,  1840,  1847,   887,  1848,     0,  1870,
       0,  1851,  1852,  1853,  1854,  1855,  1874,  1861,  1862,  1863,
    1872,  1864,  1866,     0,  1867,  1868,  1880,     0,  1893,  1894,
    1903,  1899,  1900,  1901,  1902,  1904,  1935,     0,  1911,  1912,
       0,  1913,  1916,  1925,  1928,  1936,     0,  1937,  1942,  1943,
    1944,  1945,  1948,  1949,  1962,  1951,  1952,     0,  1955,  1963,
       0,  1968,  1969,  1972,  1974,     0,     0,     0,     0,     0,
       0,     0,   322
};

static const yytype_int16 yycheck[] =
{
     854,   849,  1062,   878,   879,   880,   881,   882,   883,   367,
     969,   358,   357,   357,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   895,   896,   892,   357,
     357,   900,   901,   357,   898,   904,   905,   357,   357,   357,
    1420,   100,  1940,  1373,  1579,  1559,   191,     3,   912,  1915,
     191,   191,  1540,   198,   196,   191,   197,   198,   198,   917,
    1958,     4,   198,     6,     4,   191,     6,     5,   191,     4,
       0,     6,   936,   937,   197,   198,   940,    20,    21,    22,
      23,    24,    25,   197,   198,   949,   191,   197,  1954,   953,
       4,  1626,     6,   198,   432,   197,   198,   197,     4,   191,
       6,  1789,  1790,   967,     4,   197,     6,     4,   197,     6,
       5,   197,   450,   998,    20,    21,    22,    23,    24,    25,
     875,   876,   877,     4,   993,   994,  1614,   197,   198,   884,
     191,   197,   198,   191,   889,   890,  1000,   198,   893,   197,
     198,  1005,  1027,  1028,   899,   197,   198,   485,     5,   191,
      85,    86,    87,    88,    89,   197,   911,  1021,     4,   191,
       6,   197,  1850,  1851,  1852,   197,   921,   922,   108,   109,
     197,   191,  1036,  1037,   191,   513,    90,    91,   198,  1043,
     197,    27,    28,    29,   939,   191,   524,  1701,  1812,   197,
    1054,   191,   198,     3,   191,  1819,     4,   197,     6,   537,
     197,     4,   191,     6,   104,   105,   106,   107,   197,   197,
       5,   966,   550,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   989,   573,   197,   992,   194,   195,
     995,   996,   997,     7,   999,   197,  1001,  1002,  1003,  1004,
    1580,   194,   195,   197,   194,   195,   194,   195,   596,   194,
     195,  1016,  1017,     5,     4,  1020,     6,   605,   197,     4,
     197,     6,     4,   191,     6,    83,   614,   197,    10,   197,
     194,   195,    85,    86,    87,    88,    89,   625,   194,   195,
       4,   196,     6,  1048,   194,   195,     5,   194,   195,   194,
     195,     4,   640,     6,     4,   197,     6,   366,     5,     9,
      10,    11,    12,   194,   195,   653,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     4,   197,     6,   194,   195,     9,
      10,    11,    12,   197,   682,     4,   197,     6,   194,   195,
       5,  1731,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   197,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       5,   736,   736,   197,   194,   195,   194,   195,     5,  1274,
    1275,   194,   195,   197,   108,   109,  1365,   197,   736,   194,
     195,   104,   105,   106,   107,   197,   198,   197,   736,   736,
       5,   197,   736,   770,   197,   198,   736,   736,   736,   151,
     152,   153,   154,   155,   156,   157,   158,     4,   197,     6,
     194,   195,   770,     5,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   197,   198,   785,  1312,   197,
     190,   197,   194,   195,   194,   195,   197,   795,   191,   194,
     195,  1330,   194,   195,     5,   191,     4,   191,     6,   807,
      47,    48,    49,    50,   191,  1339,  1361,     4,   191,     6,
     194,   195,   820,   191,   192,   194,   195,   197,   198,   191,
    1359,   194,   195,   831,   194,   195,   191,   194,   195,  1363,
      27,    28,    29,  1372,     5,   191,     4,   191,     6,    47,
      48,    49,    50,     5,   197,   198,     4,  1272,     6,   197,
     198,     4,   191,     6,   194,   195,   197,   198,    26,   197,
     198,   197,  1417,   197,   198,   194,   195,   197,   198,   194,
     195,   191,  1400,  1298,  1299,  1300,  1301,  1302,  1303,     4,
     191,     6,   197,   198,     4,  1419,     6,  1312,   197,   198,
     197,   198,  1426,   197,   198,   197,   198,   197,   198,   194,
     195,    26,  1327,   191,  1438,  1439,  1331,   194,   195,  1334,
      30,     4,   191,     6,     4,  1443,     6,     5,     4,   191,
       6,   197,   198,     4,  1349,     6,    84,   197,   198,   194,
     195,     4,  1357,     6,     4,   191,     6,    90,    91,     4,
     191,     6,     4,   191,     6,   191,     5,   194,   195,  1483,
     191,  1376,   194,   195,   191,  1594,  1381,   197,   198,  1384,
      30,   197,   198,  1388,  1389,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   194,   195,  1519,   194,   195,  1543,   196,
       4,   191,     6,  1418,     5,   197,   198,   194,   195,    92,
     191,  1556,  1557,  1558,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,     4,   191,
       6,   197,   198,   194,   195,  1559,   194,   195,   197,   198,
     197,   198,   194,   195,  1673,   191,   194,   195,  1572,   191,
    1574,   194,   195,   197,  1082,  1579,   197,  1787,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   194,
     195,  1605,  1606,   197,   194,   195,  1610,   150,   159,   160,
     161,     4,   197,     6,  1618,  1619,  1620,    10,     5,  1623,
     197,   198,  1626,  1732,     5,   197,   198,     5,    84,   197,
     190,   194,   195,     5,   194,   195,   194,   195,   194,   195,
       4,   191,     6,   194,   195,   197,  1541,     5,     4,  1544,
       6,   194,   195,     5,   194,   195,   197,   198,   197,   194,
     195,   197,   194,   195,  1559,   194,   195,   197,   198,  1694,
     197,  1566,  1567,   197,  1569,   159,   160,   161,     4,   197,
       6,  1576,     5,     4,  1579,     6,  1896,   197,     4,  1584,
       6,     4,   197,     6,     4,   197,     6,  1701,  1593,   197,
     198,  1596,  1597,   197,   198,   197,   198,  1602,   197,  1604,
     194,   195,   197,   194,   195,     4,   196,     6,   197,   198,
    1718,   197,   198,   197,     4,   197,     6,   197,    92,   197,
     198,  1626,  1736,   197,   198,  1739,   197,  1741,   194,   195,
    1744,  1745,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,   151,   152,
     153,   154,   155,   156,   157,   158,  1661,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   197,   198,  1691,   197,  1802,   197,
     198,   194,   195,    83,   196,  1700,  1701,   194,   195,  1704,
    1705,  1815,   197,   194,   195,  1710,   194,   195,     4,   196,
       6,   197,   194,   195,   150,  1720,   197,   198,   197,   198,
     194,   195,  1727,   196,  1729,  1730,   194,   195,   194,   195,
     197,   198,   194,   195,   197,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   197,   198,  1867,  1868,   197,   198,   197,   194,   195,
     197,   194,   195,   194,   195,  1692,   191,   197,   194,   195,
     197,   194,   195,   197,   194,   195,   197,   198,   196,  1893,
     196,  1786,   197,   198,  1789,   197,   198,   197,   198,   197,
     198,   197,   198,   197,   198,   194,   195,   197,     4,  1804,
       6,  1806,  1729,   196,   194,   195,   197,     8,   197,   198,
     196,  1816,    13,    14,    15,    16,    17,    18,    19,   196,
       4,   196,     6,  1937,   196,  1939,     8,   196,     4,  1834,
       6,    13,    14,    15,    16,    17,    18,    19,   197,   198,
     196,  1955,   196,  1957,   196,  1850,   197,   198,  1853,   197,
     198,   196,  1857,   197,   198,   196,  1861,  1971,  1785,  1864,
     197,   198,   196,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,   197,   198,  1806,
    1885,   196,  1887,   197,   198,   197,   198,   197,   198,   197,
     198,   197,   198,  1898,  1899,  1900,  1901,  1902,   194,   195,
     197,  1906,   197,   198,  1909,   196,  1911,   197,  1913,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     197,   198,   197,   198,   197,   198,  1931,   197,   198,   197,
     198,   197,   198,   197,   198,   196,   196,  1864,   196,   196,
     196,   196,   196,   196,   196,   196,  1951,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   196,   198,   197,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   194,   195,
     197,   196,   196,   194,   195,   197,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   191,   197,   196,   196,
     194,   195,   194,   195,   197,   196,   196,   196,   194,   195,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   196,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   196,   198,   197,   196,   196,   196,   371,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   192,   197,   196,   191,   197,   196,   196,   192,
     197,   196,   338,   197,   196,   196,   196,   196,    38,   197,
     196,   196,   196,   196,   196,   191,   197,   196,   196,   384,
     197,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,  1689,   197,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   160,   197,   196,   196,   196,   196,   196,
     196,   196,   196,   192,   197,   196,   198,   197,   196,   196,
     196,   795,   197,   196,   196,   196,   106,   197,   196,   196,
     196,   196,   192,   197,   196,   191,   197,   196,   191,   197,
     191,   191,   197,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,     5,   550,   191,   191,
     191,   537,   197,   197,   191,   191,   191,   197,   191,   191,
     191,   573,   524,   197,   191,   191,   250,   197,   197,   197,
     191,   191,   197,   191,   191,   191,   191,   196,   192,   192,
     192,   192,   191,   820,   166,   485,   192,   197,   191,   197,
     197,   192,   197,   197,   192,   192,   192,   192,   197,   191,
     193,   192,   191,   197,   191,   191,   191,   191,   191,   197,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   831,   191,   191,   191,   191,   191,   197,  1939,
     112,   192,   191,   191,   197,   197,   192,   197,   192,   192,
     197,   192,   197,   191,   191,   197,   596,   197,   197,   193,
     605,   172,   198,   198,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   191,   197,   197,   197,   513,
     198,   198,   640,   198,   198,   198,   198,   197,   197,   197,
     197,   197,   197,   197,   197,   184,   198,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   191,   198,   197,
     197,   614,   198,   198,   197,   197,   238,   198,   198,   198,
     198,   197,   197,   197,   625,   198,   197,   197,   192,   198,
     198,   198,   198,   198,   197,   118,   198,   197,   197,   197,
     192,   198,   198,   198,   198,   198,   197,   192,   198,   197,
     197,   192,   198,   197,   197,   154,   198,   197,   197,   197,
     142,   198,   198,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   411,   198,   197,   197,   197,   197,   197,   682,
     198,   198,   198,   198,   197,   197,   124,   198,   198,   197,
     736,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   432,
     191,   191,   191,   191,   191,   197,   191,   191,   191,   191,
     653,   191,   198,   192,   191,   191,   191,   198,   192,   192,
     191,   785,   192,   192,   191,   191,   198,   770,   191,  1971,
     198,   191,   191,   198,   198,   197,   197,   244,   190,   197,
     197,   148,   198,   198,   198,   198,   197,   197,   192,   198,
     197,   256,   198,   198,   197,   807,   198,   198,   198,   198,
     198,   198,   198,   198,   191,   197,   191,   198,   197,   191,
     198,   197,   202,   197,   192,   198,   197,    -1,   198,   198,
     197,   197,   197,    -1,   198,   198,   198,   198,   198,   198,
     198,   197,   226,   198,   198,   198,   197,   197,   191,   198,
     198,   198,   198,   198,   198,   191,   197,   191,   197,   191,
     197,   191,   191,   191,   197,   192,   191,   198,   191,    -1,
     208,   192,   198,   191,   198,   191,   198,   192,   192,   198,
     191,   198,    -1,   178,   197,   130,   198,   197,   197,   197,
     197,   197,   232,   198,   198,   198,   198,   197,   197,   197,
     197,   136,   198,   197,   196,   198,   197,   197,   197,   197,
      -1,   198,   198,   198,   198,   197,   192,   198,   198,   197,
      -1,   198,   197,   197,   191,   198,   198,   198,   191,   191,
     191,   191,   198,   192,   198,   191,    -1,   220,   191,    -1,
     198,   198,    -1,   198,   198,   197,   197,   197,   197,   191,
     198,   198,   198,   197,   192,   198,   197,   191,   198,   198,
     197,   191,   198,   192,   192,   197,   450,   198,    -1,   192,
      -1,   198,   198,   198,   198,   197,   192,   198,   197,   197,
     191,   198,   197,    -1,   198,   198,   198,    -1,   198,   197,
     191,   198,   198,   198,   198,   197,   191,    -1,   198,   197,
      -1,   198,   198,   197,   197,   197,    -1,   198,   197,   197,
     197,   197,   197,   197,   191,   198,   197,    -1,   198,   197,
      -1,   197,   197,   197,   197,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,   194,   195,   200,   201,   202,   203,   196,     0,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   202,   204,   205,
     206,   207,   211,   223,   246,   258,   265,   274,   281,   303,
     313,   337,   357,   364,   376,   383,   394,   402,   409,   426,
     436,   442,   450,   477,   502,   509,   524,   191,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   205,   197,     4,   194,   195,
     215,   216,   217,     5,   194,   195,   208,   209,   210,     5,
     194,   195,   212,   213,   214,     7,   194,   195,   224,   225,
     226,     5,   194,   195,   338,   339,   340,     5,   194,   195,
     437,   438,   439,     5,   194,   195,   410,   411,   412,     5,
     194,   195,   314,   315,   316,     5,   194,   195,   365,   366,
     367,     5,   194,   195,   275,   276,   277,     5,   194,   195,
     247,   248,   249,     5,   194,   195,   259,   260,   261,     5,
     194,   195,   282,   283,   284,     5,   194,   195,   377,   378,
     379,     5,   194,   195,   395,   396,   397,     5,   194,   195,
     403,   404,   405,     5,   194,   195,   427,   428,   429,     5,
     194,   195,   384,   385,   386,     5,   194,   195,   443,   444,
     445,     5,   194,   195,   451,   452,   453,     5,   194,   195,
     478,   479,   480,     5,   194,   195,   510,   511,   512,     5,
     194,   195,   503,   504,   505,     5,   194,   195,   266,   267,
     268,     5,   194,   195,   525,   526,   527,     5,   194,   195,
     304,   305,   306,     5,   194,   195,   358,   359,   360,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   218,   216,   191,   209,   191,   213,   191,
     225,   191,   339,   191,   438,   191,   411,   191,   315,   191,
     366,   191,   276,   191,   248,   191,   260,   191,   283,   191,
     378,   191,   396,   191,   404,   191,   428,   191,   385,   191,
     444,   191,   452,   191,   479,   191,   511,   191,   504,   191,
     267,   191,   526,   191,   305,   191,   359,   196,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   191,     6,   215,     4,     6,   194,
     195,   219,   220,   221,     8,    13,    14,    15,    16,    17,
      18,    19,   194,   195,   227,   228,   229,   230,   231,   234,
     235,   236,   237,     4,     6,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,   194,
     195,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   535,     6,   190,
     194,   195,   440,   441,   535,   536,     6,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   194,   195,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   535,     6,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   194,   195,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   535,     6,     9,    10,    11,
      12,   194,   195,   368,   369,   370,   373,   374,   375,   535,
       6,    30,   194,   195,   278,   279,   280,   535,     6,    20,
      21,    22,    23,    24,    25,   194,   195,   250,   251,   252,
     253,   254,   255,   256,   257,   535,     6,    26,   194,   195,
     262,   263,   264,   535,     6,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   194,   195,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   535,     6,    84,   194,   195,   380,   381,   382,   535,
       6,    90,    91,   194,   195,   398,   399,   400,   401,   535,
       6,    92,   194,   195,   406,   407,   408,   535,     6,   104,
     105,   106,   107,   194,   195,   430,   431,   432,   433,   434,
     435,   535,     6,    85,    86,    87,    88,    89,   194,   195,
     387,   388,   389,   390,   391,   392,   393,   535,     6,   108,
     109,   194,   195,   446,   447,   448,   449,   535,     6,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     194,   195,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   535,     6,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   194,   195,   469,   470,
     471,   472,   473,   474,   475,   476,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   535,     6,   151,
     152,   153,   154,   155,   156,   157,   158,   194,   195,   373,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     535,     6,   150,   194,   195,   506,   507,   508,   535,     6,
      27,    28,    29,   194,   195,   269,   270,   271,   272,   273,
     535,     6,   159,   160,   161,   194,   195,   528,   529,   530,
     531,   532,   535,     6,    47,    48,    49,    50,   194,   195,
     307,   308,   309,   310,   311,   312,   535,     6,    83,   194,
     195,   361,   362,   363,   535,   197,   197,     6,   218,   197,
       6,   220,   197,   196,   196,   196,   196,   196,   196,   196,
       8,   228,   191,   197,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,     6,   342,
     197,   197,     6,   441,   197,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,     6,   414,   197,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,     6,   318,   197,
     196,   196,   196,   196,     6,   369,   197,   196,     6,   279,
     197,   196,   196,   196,   196,   196,   196,     6,   251,   197,
     196,     6,   263,   197,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
       6,   286,   197,   196,     6,   381,   197,   196,   196,     6,
     399,   197,   196,     6,   407,   197,   196,   196,   196,   196,
       6,   431,   197,   196,   196,   196,   196,   196,     6,   388,
     197,   196,   196,     6,   447,   197,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,     6,   455,   197,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,     6,
     482,   197,   196,   196,   196,   196,   196,   196,   196,   196,
       6,   514,   197,   196,     6,   507,   197,   196,   196,   196,
       6,   270,   197,   196,   196,   196,     6,   529,   197,   196,
     196,   196,   196,     6,   308,   197,   196,     6,   362,   197,
     196,   197,   191,   191,   191,   191,   191,   242,   191,   547,
     547,   197,   198,   191,   544,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   197,   197,
     191,   540,   540,   540,   191,   542,   542,   542,   542,   542,
     542,   540,   191,   197,   540,   540,   191,   544,   540,   197,
     537,   540,   197,   537,   197,   537,   191,   544,   540,   197,
     537,   197,   537,   191,   191,   197,   537,   197,   537,   191,
     197,   192,   549,   540,   544,   191,   197,   547,   197,   540,
     540,   191,   192,   191,   192,   197,   192,   197,   191,   191,
     544,   544,   191,   540,   544,   191,   191,   191,   192,   192,
     192,   192,   191,   544,   197,   544,   197,   541,   542,   543,
     544,   197,   192,   197,   540,   544,   191,   543,   197,   192,
     192,   192,   192,   192,   197,   191,   192,   197,   191,   191,
     191,   540,   191,   191,   540,   537,   537,   540,   540,   540,
     542,   540,   544,   540,   540,   540,   540,   544,   191,   197,
     191,   191,   191,   191,   193,   191,   540,   540,   191,   191,
     540,   544,   191,   191,   191,   191,   191,   542,   542,   197,
     191,   191,   198,   191,   191,   544,   544,   191,   191,   197,
     544,   197,   192,   540,   191,   197,   191,   544,   192,   197,
     192,   192,   192,   549,   197,   191,   197,   191,   197,   197,
     198,   197,   198,   198,   198,   198,   218,   197,   197,   198,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   197,   198,   191,   197,   197,   197,   198,   198,
     198,   198,   198,   198,   197,   197,   197,   197,   197,   197,
     197,   197,   198,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   198,   197,   197,   197,   198,   198,   197,   197,
     198,   198,   197,   197,   198,   198,   197,   198,   198,   198,
     197,   197,   197,   198,   191,   197,   198,   197,   197,   198,
     197,   198,   198,   198,   198,   198,   197,   198,   197,   198,
     197,   198,   197,   198,   197,   198,   197,   197,   197,   197,
     198,   198,   198,   198,   198,   197,   198,   197,   197,   197,
     198,   198,   197,   197,   198,   197,   197,   197,   198,   198,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     198,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   197,   197,   197,   197,   197,   198,   198,   198,
     198,   192,   523,   197,   197,   198,   198,   197,   197,   198,
     198,   198,   197,   198,   197,   198,   197,   198,   198,   198,
     198,   198,   198,   198,   198,   197,   198,   222,   191,   545,
     540,   191,   243,   542,   542,   196,   191,   191,   198,   191,
     198,   540,   540,   540,   540,   540,   540,   191,   538,   539,
     540,   544,   191,   191,   540,   537,   540,   540,   191,   191,
     191,   544,   191,   198,   197,   191,   540,   191,   192,   191,
     191,   192,   191,   540,   546,   537,   542,   544,   543,   191,
     198,   191,   537,   541,   191,   540,   191,   540,   540,   540,
     540,   191,   547,   192,   542,   540,   544,   523,   198,   198,
     191,   544,   192,   191,   191,   192,   192,   191,   533,   544,
     544,   191,   192,   192,   547,   191,   191,   197,   198,   197,
     198,   198,   198,   198,   198,   191,   197,   197,   198,   191,
     197,   198,   191,   197,   197,   197,   198,   198,   198,   198,
     197,   197,   198,   197,   197,   198,   198,   198,   197,   198,
     197,   198,   198,   544,   198,   197,   198,   198,   198,   198,
     198,   198,   191,   197,   198,   197,   197,   198,   191,   197,
     197,   197,   197,   198,   198,   197,   198,   198,   197,   197,
     197,   198,   198,   198,   198,   198,   198,   191,   192,   544,
     198,   197,   198,   198,   198,   197,   197,   197,   198,   198,
     198,   197,   198,   198,   198,   198,   198,   191,   545,   540,
     191,   244,   542,   540,   197,   191,   197,   191,   197,   542,
     542,   542,   539,   191,   191,   551,   540,   540,   540,   192,
     544,   197,   544,   540,   192,   192,   538,   541,   191,   540,
     191,   198,   540,   543,   540,   540,   191,   540,   193,   540,
     544,   544,   198,   198,   544,   192,   191,   545,   534,   544,
     544,   544,   191,   544,   192,   192,   538,   197,   198,   232,
     233,   198,   198,   197,   198,   197,   197,   197,   197,   197,
     198,   198,   198,   197,   198,   198,   197,   197,   197,   197,
     198,   197,   198,   197,   198,   197,   197,   197,   198,   197,
     198,   540,   197,   197,   197,   197,   197,   198,   197,   198,
     198,   198,   198,   191,   543,   197,   198,   197,   198,   198,
     197,   198,   197,   197,   198,   198,   198,   197,   191,   197,
     233,   238,   540,   191,   546,   542,   540,   539,   550,   540,
     540,   540,   191,   192,   548,   191,   547,   540,   198,   540,
     540,   546,   540,   523,   543,   197,   544,   191,   544,   544,
     544,   544,   192,   198,   191,   198,   198,   198,   197,   198,
     198,   197,   197,   198,   197,   197,   197,   198,   197,   198,
     198,   191,   198,   197,   198,   197,   198,   197,   198,   197,
     197,   197,   198,   197,   198,   198,   198,   197,   197,   198,
     191,   239,   546,   540,   549,   540,   550,   550,   191,   198,
     192,   191,   191,   197,   198,   544,   540,   540,   546,   548,
     192,   544,   540,   548,   198,   197,   198,   197,   198,   197,
     198,   198,   198,   198,   198,   197,   197,   198,   197,   198,
     540,   198,   197,   197,   198,   197,   197,   198,   198,   197,
     192,   240,   191,   245,   192,   540,   550,   550,   550,   540,
     198,   197,   198,   540,   197,   198,   197,   198,   540,   540,
     546,   544,   544,   198,   197,   197,   198,   197,   198,   198,
     198,   198,   198,   191,   197,   197,   198,   540,   197,   198,
     540,   198,   197,   198,   197,   198,   198,   241,   544,   549,
     540,   540,   540,   540,   540,   197,   197,   540,   197,   540,
     197,   198,   540,   540,   533,   191,   197,   198,   197,   198,
     371,   372,   197,   197,   197,   197,   197,   198,   197,   197,
     540,   198,   197,   197,   198,   198,   544,   198,   371,   544,
     197,   372,   191,   197,   540,   533,   544,   197,   197,   197,
     197,   198,   197,   534,   197
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   199,   200,   200,   201,   201,   202,   202,   202,   203,
     204,   204,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   206,
     206,   207,   207,   208,   208,   209,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   213,   213,   214,   214,   215,
     215,   216,   216,   216,   217,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   219,
     219,   220,   220,   220,   221,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   225,   226,   226,   227,   227,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   229,   230,
     231,   231,   231,   231,   232,   232,   233,   234,   235,   235,
     236,   237,   238,   238,   239,   239,   240,   240,   241,   241,
     241,   242,   242,   243,   243,   244,   244,   245,   245,   246,
     246,   247,   247,   248,   248,   248,   249,   249,   250,   250,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   252,
     253,   253,   253,   254,   255,   255,   256,   256,   256,   256,
     257,   258,   258,   259,   259,   260,   260,   260,   261,   261,
     262,   262,   263,   263,   263,   263,   264,   265,   265,   266,
     266,   267,   267,   267,   268,   268,   269,   269,   270,   270,
     270,   270,   270,   270,   271,   271,   272,   272,   273,   273,
     274,   274,   275,   275,   276,   276,   276,   277,   277,   278,
     278,   279,   279,   279,   279,   280,   280,   280,   280,   280,
     280,   280,   280,   281,   281,   282,   282,   283,   283,   283,
     284,   284,   285,   285,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   287,   288,   289,   290,   290,   291,   292,
     292,   293,   294,   294,   294,   295,   296,   296,   297,   297,
     298,   299,   300,   300,   300,   301,   301,   301,   302,   303,
     303,   304,   304,   305,   305,   305,   306,   306,   307,   307,
     308,   308,   308,   308,   308,   308,   308,   309,   309,   310,
     311,   312,   312,   313,   313,   314,   314,   315,   315,   315,
     316,   316,   317,   317,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   319,   320,   321,   322,   323,
     324,   324,   325,   325,   326,   326,   327,   328,   329,   330,
     330,   331,   331,   332,   333,   333,   334,   334,   335,   335,
     336,   336,   337,   337,   338,   338,   339,   339,   339,   340,
     340,   341,   341,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     343,   344,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   355,   355,   355,   356,   356,   356,
     356,   357,   357,   358,   358,   359,   359,   359,   360,   360,
     361,   361,   362,   362,   362,   362,   363,   364,   364,   365,
     365,   366,   366,   366,   367,   367,   368,   368,   369,   369,
     369,   369,   369,   369,   369,   370,   370,   370,   370,   371,
     371,   372,   373,   374,   375,   376,   376,   377,   377,   378,
     378,   378,   379,   379,   380,   380,   381,   381,   381,   381,
     382,   383,   383,   384,   384,   385,   385,   385,   386,   386,
     387,   387,   388,   388,   388,   388,   388,   388,   388,   388,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   390,   391,   392,   393,   393,
     394,   394,   395,   395,   396,   396,   396,   397,   397,   398,
     398,   399,   399,   399,   399,   399,   400,   401,   402,   402,
     403,   403,   404,   404,   404,   405,   405,   406,   406,   407,
     407,   407,   407,   408,   408,   409,   409,   410,   410,   411,
     411,   411,   412,   412,   413,   413,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   426,   427,   427,   428,   428,   428,   429,   429,
     430,   430,   431,   431,   431,   431,   431,   431,   431,   432,
     433,   434,   435,   436,   436,   437,   437,   438,   438,   438,
     439,   439,   440,   440,   441,   441,   441,   441,   442,   442,
     443,   443,   444,   444,   444,   445,   445,   446,   446,   447,
     447,   447,   447,   447,   448,   449,   450,   450,   451,   451,
     452,   452,   452,   453,   453,   454,   454,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   456,   457,   458,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   477,   478,   478,   479,   479,   479,
     480,   480,   481,   481,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   483,   483,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   500,   500,   501,   501,   501,   501,
     502,   502,   503,   503,   504,   504,   504,   505,   505,   506,
     506,   507,   507,   507,   507,   508,   508,   509,   509,   510,
     510,   511,   511,   511,   512,   512,   513,   513,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     515,   516,   516,   517,   518,   519,   519,   520,   521,   522,
     522,   523,   523,   524,   524,   525,   525,   526,   526,   526,
     527,   527,   528,   528,   529,   529,   529,   529,   529,   529,
     530,   530,   530,   531,   531,   531,   531,   532,   533,   533,
     534,   534,   535,   536,   537,   537,   538,   538,   539,   539,
     540,   541,   541,   542,   543,   543,   544,   545,   545,   546,
     546,   547,   547,   548,   548,   549,   549,   550,   551
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     1,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     2,     2,     1,     1,     1,     1,     6,     5,
       3,     2,     2,     1,     1,     1,     1,     6,     5,     2,
       1,     1,     1,     1,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     6,     5,     3,     2,     3,     2,
       2,     1,     1,     1,     1,     6,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       9,     8,     6,     4,     2,     1,     2,    16,    14,    12,
       8,    12,     0,     1,     0,     1,     0,     1,     0,     1,
       3,     0,     1,     0,     1,     0,     1,     0,     1,     3,
       2,     2,     1,     1,     1,     1,     6,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       6,     4,     8,     4,     8,    10,    16,    10,    18,    15,
       6,     3,     2,     2,     1,     1,     1,     1,     6,     5,
       2,     1,     1,     1,     1,     1,     8,     3,     2,     2,
       1,     1,     1,     1,     6,     5,     2,     1,     1,     1,
       1,     1,     1,     1,    12,    10,     6,     4,     6,     4,
       3,     2,     2,     1,     1,     1,     1,     6,     5,     2,
       1,     1,     1,     1,     1,    16,    14,    16,    12,    16,
      10,    16,     6,     3,     2,     2,     1,     1,     1,     1,
       6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     8,     7,     5,     4,
       8,     4,     4,     6,    10,     4,    10,     8,     8,    10,
       8,     8,    12,    10,     8,     8,     6,     4,     4,     3,
       2,     2,     1,     1,     1,     1,     6,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     8,     6,    18,
      10,    12,    10,     3,     2,     2,     1,     1,     1,     1,
       6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     3,     4,     3,     4,     3,     4,     4,     4,     4,
       3,     4,     3,     4,     4,     6,     4,     3,     4,     3,
       4,     6,     3,     2,     2,     1,     1,     1,     1,     6,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     6,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     8,     7,     4,     6,     8,
       7,     3,     2,     2,     1,     1,     1,     1,     6,     5,
       2,     1,     1,     1,     1,     1,     8,     3,     2,     2,
       1,     1,     1,     1,     6,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,    14,    16,    17,    18,     2,
       1,     2,     4,     4,     6,     3,     2,     2,     1,     1,
       1,     1,     6,     5,     2,     1,     1,     1,     1,     1,
       6,     3,     2,     2,     1,     1,     1,     1,     6,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
      16,    15,    12,    14,    13,    14,    15,    14,    11,    13,
      12,    13,    17,    15,    16,     6,     6,     6,     8,     6,
       3,     2,     2,     1,     1,     1,     1,     6,     5,     2,
       1,     1,     1,     1,     1,     1,     4,     4,     3,     2,
       2,     1,     1,     1,     1,     6,     5,     2,     1,     1,
       1,     1,     1,     6,     4,     3,     2,     2,     1,     1,
       1,     1,     6,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     6,     6,     6,     8,     8,     8,
       4,     3,     2,     2,     1,     1,     1,     1,     6,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     3,     2,     2,     1,     1,     1,     1,
       6,     5,     2,     1,     1,     1,     1,     1,     3,     2,
       2,     1,     1,     1,     1,     6,     5,     2,     1,     1,
       1,     1,     1,     1,     4,     8,     3,     2,     2,     1,
       1,     1,     1,     6,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     6,     8,     4,     4,     8,     4,
       4,     4,     6,     6,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     2,     2,     1,     1,     1,     1,
       6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     8,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,    18,     4,     4,
       4,     4,     4,     8,    10,    12,    10,    12,    14,    16,
       3,     2,     2,     1,     1,     1,     1,     6,     5,     2,
       1,     1,     1,     1,     1,    10,    12,     3,     2,     2,
       1,     1,     1,     1,     6,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
      10,    10,     9,     4,     4,    10,     8,     6,     4,     8,
       4,     5,     3,     3,     2,     2,     1,     1,     1,     1,
       6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       8,     6,     4,    20,    18,    16,    14,     8,     0,     1,
       0,     1,     7,     2,     3,     1,     3,     1,     1,     1,
       2,     3,     1,     1,     3,     1,     1,     0,     1,     0,
       2,     0,     1,     3,     1,     0,     1,     0,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* vex: version_lowls blocks  */
#line 480 "./vex_parse.y"
                                        {vex_ptr=make_vex((yyvsp[-1].llptr),(yyvsp[0].llptr));}
#line 3114 "vex_parse.tab.c"
    break;

  case 3: /* vex: version_lowls  */
#line 481 "./vex_parse.y"
                                        {vex_ptr=make_vex((yyvsp[0].llptr),NULL);}
#line 3120 "vex_parse.tab.c"
    break;

  case 4: /* version_lowls: version_lowls version_lowl  */
#line 483 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 3126 "vex_parse.tab.c"
    break;

  case 5: /* version_lowls: version_lowl  */
#line 484 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 3132 "vex_parse.tab.c"
    break;

  case 6: /* version_lowl: version  */
#line 486 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_VEX_REV,(yyvsp[0].sval));}
#line 3138 "vex_parse.tab.c"
    break;

  case 7: /* version_lowl: T_COMMENT  */
#line 487 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 3144 "vex_parse.tab.c"
    break;

  case 8: /* version_lowl: T_COMMENT_TRAILING  */
#line 488 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 3150 "vex_parse.tab.c"
    break;

  case 9: /* version: T_VEX_REV '=' T_NAME ';'  */
#line 492 "./vex_parse.y"
                                                {(yyval.sval)=make_version((yyvsp[-1].sval));}
#line 3156 "vex_parse.tab.c"
    break;

  case 10: /* blocks: blocks block  */
#line 497 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].blptr));}
#line 3162 "vex_parse.tab.c"
    break;

  case 11: /* blocks: block  */
#line 498 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].blptr));}
#line 3168 "vex_parse.tab.c"
    break;

  case 12: /* block: global_block  */
#line 500 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_GLOBAL,(yyvsp[0].llptr));}
#line 3174 "vex_parse.tab.c"
    break;

  case 13: /* block: station_block  */
#line 501 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_STATION,(yyvsp[0].llptr));}
#line 3180 "vex_parse.tab.c"
    break;

  case 14: /* block: mode_block  */
#line 502 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_MODE,(yyvsp[0].llptr));}
#line 3186 "vex_parse.tab.c"
    break;

  case 15: /* block: freq_block  */
#line 503 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_FREQ,(yyvsp[0].llptr));}
#line 3192 "vex_parse.tab.c"
    break;

  case 16: /* block: sched_block  */
#line 504 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_SCHED,(yyvsp[0].llptr));}
#line 3198 "vex_parse.tab.c"
    break;

  case 17: /* block: antenna_block  */
#line 505 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_ANTENNA,(yyvsp[0].llptr));}
#line 3204 "vex_parse.tab.c"
    break;

  case 18: /* block: bbc_block  */
#line 506 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_BBC,(yyvsp[0].llptr));}
#line 3210 "vex_parse.tab.c"
    break;

  case 19: /* block: bitstreams_block  */
#line 507 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_BITSTREAMS,(yyvsp[0].llptr));}
#line 3216 "vex_parse.tab.c"
    break;

  case 20: /* block: clock_block  */
#line 508 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_CLOCK,(yyvsp[0].llptr));}
#line 3222 "vex_parse.tab.c"
    break;

  case 21: /* block: das_block  */
#line 509 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_DAS,(yyvsp[0].llptr));}
#line 3228 "vex_parse.tab.c"
    break;

  case 22: /* block: datastreams_block  */
#line 510 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_DATASTREAMS,(yyvsp[0].llptr));}
#line 3234 "vex_parse.tab.c"
    break;

  case 23: /* block: eop_block  */
#line 511 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_EOP,(yyvsp[0].llptr));}
#line 3240 "vex_parse.tab.c"
    break;

  case 24: /* block: exper_block  */
#line 512 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_EXPER,(yyvsp[0].llptr));}
#line 3246 "vex_parse.tab.c"
    break;

  case 25: /* block: extensions_block  */
#line 513 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_EXTENSIONS,(yyvsp[0].llptr));}
#line 3252 "vex_parse.tab.c"
    break;

  case 26: /* block: head_pos_block  */
#line 514 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_HEAD_POS,(yyvsp[0].llptr));}
#line 3258 "vex_parse.tab.c"
    break;

  case 27: /* block: if_block  */
#line 515 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_IF,(yyvsp[0].llptr));}
#line 3264 "vex_parse.tab.c"
    break;

  case 28: /* block: pass_order_block  */
#line 516 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_PASS_ORDER,(yyvsp[0].llptr));}
#line 3270 "vex_parse.tab.c"
    break;

  case 29: /* block: phase_cal_detect_block  */
#line 517 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_PHASE_CAL_DETECT,(yyvsp[0].llptr));}
#line 3276 "vex_parse.tab.c"
    break;

  case 30: /* block: procedures_block  */
#line 518 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_PROCEDURES,(yyvsp[0].llptr));}
#line 3282 "vex_parse.tab.c"
    break;

  case 31: /* block: roll_block  */
#line 519 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_ROLL,(yyvsp[0].llptr));}
#line 3288 "vex_parse.tab.c"
    break;

  case 32: /* block: scheduling_params_block  */
#line 521 "./vex_parse.y"
                                {(yyval.blptr)=make_block(B_SCHEDULING_PARAMS,(yyvsp[0].llptr));}
#line 3294 "vex_parse.tab.c"
    break;

  case 33: /* block: sefd_block  */
#line 522 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_SEFD,(yyvsp[0].llptr));}
#line 3300 "vex_parse.tab.c"
    break;

  case 34: /* block: site_block  */
#line 523 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_SITE,(yyvsp[0].llptr));}
#line 3306 "vex_parse.tab.c"
    break;

  case 35: /* block: source_block  */
#line 524 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_SOURCE,(yyvsp[0].llptr));}
#line 3312 "vex_parse.tab.c"
    break;

  case 36: /* block: tapelog_obs_block  */
#line 525 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_TAPELOG_OBS,(yyvsp[0].llptr));}
#line 3318 "vex_parse.tab.c"
    break;

  case 37: /* block: tracks_block  */
#line 526 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_TRACKS,(yyvsp[0].llptr));}
#line 3324 "vex_parse.tab.c"
    break;

  case 38: /* block: threads_block  */
#line 527 "./vex_parse.y"
                                        {(yyval.blptr)=make_block(B_THREADS,(yyvsp[0].llptr));}
#line 3330 "vex_parse.tab.c"
    break;

  case 39: /* global_block: B_GLOBAL ';' refs  */
#line 531 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 3336 "vex_parse.tab.c"
    break;

  case 40: /* global_block: B_GLOBAL ';'  */
#line 532 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 3342 "vex_parse.tab.c"
    break;

  case 41: /* station_block: B_STATION ';' station_defs  */
#line 536 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 3348 "vex_parse.tab.c"
    break;

  case 42: /* station_block: B_STATION ';'  */
#line 537 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 3354 "vex_parse.tab.c"
    break;

  case 43: /* station_defs: station_defs station_defx  */
#line 539 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 3360 "vex_parse.tab.c"
    break;

  case 44: /* station_defs: station_defx  */
#line 540 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 3366 "vex_parse.tab.c"
    break;

  case 45: /* station_defx: station_def  */
#line 542 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 3372 "vex_parse.tab.c"
    break;

  case 46: /* station_defx: T_COMMENT  */
#line 543 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 3378 "vex_parse.tab.c"
    break;

  case 47: /* station_defx: T_COMMENT_TRAILING  */
#line 544 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 3384 "vex_parse.tab.c"
    break;

  case 48: /* station_def: T_DEF T_NAME ';' refs T_ENDDEF ';'  */
#line 546 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 3390 "vex_parse.tab.c"
    break;

  case 49: /* station_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 547 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 3396 "vex_parse.tab.c"
    break;

  case 50: /* mode_block: B_MODE ';' mode_defs  */
#line 551 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 3402 "vex_parse.tab.c"
    break;

  case 51: /* mode_block: B_MODE ';'  */
#line 552 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 3408 "vex_parse.tab.c"
    break;

  case 52: /* mode_defs: mode_defs mode_defx  */
#line 554 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 3414 "vex_parse.tab.c"
    break;

  case 53: /* mode_defs: mode_defx  */
#line 555 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 3420 "vex_parse.tab.c"
    break;

  case 54: /* mode_defx: mode_def  */
#line 557 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 3426 "vex_parse.tab.c"
    break;

  case 55: /* mode_defx: T_COMMENT  */
#line 558 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 3432 "vex_parse.tab.c"
    break;

  case 56: /* mode_defx: T_COMMENT_TRAILING  */
#line 559 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 3438 "vex_parse.tab.c"
    break;

  case 57: /* mode_def: T_DEF T_NAME ';' qrefs T_ENDDEF ';'  */
#line 561 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 3444 "vex_parse.tab.c"
    break;

  case 58: /* mode_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 563 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 3450 "vex_parse.tab.c"
    break;

  case 59: /* refs: refs refx  */
#line 567 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 3456 "vex_parse.tab.c"
    break;

  case 60: /* refs: refx  */
#line 568 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 3462 "vex_parse.tab.c"
    break;

  case 61: /* refx: ref  */
#line 570 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].qrptr));}
#line 3468 "vex_parse.tab.c"
    break;

  case 62: /* refx: T_COMMENT  */
#line 571 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 3474 "vex_parse.tab.c"
    break;

  case 63: /* refx: T_COMMENT_TRAILING  */
#line 572 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 3480 "vex_parse.tab.c"
    break;

  case 64: /* ref: T_REF primitive '=' T_NAME ';'  */
#line 574 "./vex_parse.y"
                                        {(yyval.qrptr)=make_qref((yyvsp[-3].ival),(yyvsp[-1].sval),NULL);}
#line 3486 "vex_parse.tab.c"
    break;

  case 65: /* primitive: B_EXPER  */
#line 576 "./vex_parse.y"
                                        {(yyval.ival)=B_EXPER;}
#line 3492 "vex_parse.tab.c"
    break;

  case 66: /* primitive: B_SCHEDULING_PARAMS  */
#line 577 "./vex_parse.y"
                                        {(yyval.ival)=B_SCHEDULING_PARAMS;}
#line 3498 "vex_parse.tab.c"
    break;

  case 67: /* primitive: B_PROCEDURES  */
#line 578 "./vex_parse.y"
                                        {(yyval.ival)=B_PROCEDURES;}
#line 3504 "vex_parse.tab.c"
    break;

  case 68: /* primitive: B_EOP  */
#line 579 "./vex_parse.y"
                                        {(yyval.ival)=B_EOP;}
#line 3510 "vex_parse.tab.c"
    break;

  case 69: /* primitive: B_FREQ  */
#line 580 "./vex_parse.y"
                                        {(yyval.ival)=B_FREQ;}
#line 3516 "vex_parse.tab.c"
    break;

  case 70: /* primitive: B_ANTENNA  */
#line 581 "./vex_parse.y"
                                        {(yyval.ival)=B_ANTENNA;}
#line 3522 "vex_parse.tab.c"
    break;

  case 71: /* primitive: B_BBC  */
#line 582 "./vex_parse.y"
                                        {(yyval.ival)=B_BBC;}
#line 3528 "vex_parse.tab.c"
    break;

  case 72: /* primitive: B_BITSTREAMS  */
#line 583 "./vex_parse.y"
                                        {(yyval.ival)=B_BITSTREAMS;}
#line 3534 "vex_parse.tab.c"
    break;

  case 73: /* primitive: B_CLOCK  */
#line 584 "./vex_parse.y"
                                        {(yyval.ival)=B_CLOCK;}
#line 3540 "vex_parse.tab.c"
    break;

  case 74: /* primitive: B_CORR  */
#line 585 "./vex_parse.y"
                                        {(yyval.ival)=B_CORR;}
#line 3546 "vex_parse.tab.c"
    break;

  case 75: /* primitive: B_DAS  */
#line 586 "./vex_parse.y"
                                        {(yyval.ival)=B_DAS;}
#line 3552 "vex_parse.tab.c"
    break;

  case 76: /* primitive: B_DATASTREAMS  */
#line 587 "./vex_parse.y"
                                        {(yyval.ival)=B_DATASTREAMS;}
#line 3558 "vex_parse.tab.c"
    break;

  case 77: /* primitive: B_EXTENSIONS  */
#line 588 "./vex_parse.y"
                                        {(yyval.ival)=B_EXTENSIONS;}
#line 3564 "vex_parse.tab.c"
    break;

  case 78: /* primitive: B_HEAD_POS  */
#line 589 "./vex_parse.y"
                                        {(yyval.ival)=B_HEAD_POS;}
#line 3570 "vex_parse.tab.c"
    break;

  case 79: /* primitive: B_PASS_ORDER  */
#line 590 "./vex_parse.y"
                                        {(yyval.ival)=B_PASS_ORDER;}
#line 3576 "vex_parse.tab.c"
    break;

  case 80: /* primitive: B_PHASE_CAL_DETECT  */
#line 591 "./vex_parse.y"
                                        {(yyval.ival)=B_PHASE_CAL_DETECT;}
#line 3582 "vex_parse.tab.c"
    break;

  case 81: /* primitive: B_ROLL  */
#line 592 "./vex_parse.y"
                                        {(yyval.ival)=B_ROLL;}
#line 3588 "vex_parse.tab.c"
    break;

  case 82: /* primitive: B_IF  */
#line 593 "./vex_parse.y"
                                        {(yyval.ival)=B_IF;}
#line 3594 "vex_parse.tab.c"
    break;

  case 83: /* primitive: B_SEFD  */
#line 594 "./vex_parse.y"
                                        {(yyval.ival)=B_SEFD;}
#line 3600 "vex_parse.tab.c"
    break;

  case 84: /* primitive: B_SITE  */
#line 595 "./vex_parse.y"
                                        {(yyval.ival)=B_SITE;}
#line 3606 "vex_parse.tab.c"
    break;

  case 85: /* primitive: B_SOURCE  */
#line 596 "./vex_parse.y"
                                        {(yyval.ival)=B_SOURCE;}
#line 3612 "vex_parse.tab.c"
    break;

  case 86: /* primitive: B_TRACKS  */
#line 597 "./vex_parse.y"
                                        {(yyval.ival)=B_TRACKS;}
#line 3618 "vex_parse.tab.c"
    break;

  case 87: /* primitive: B_TAPELOG_OBS  */
#line 598 "./vex_parse.y"
                                        {(yyval.ival)=B_TAPELOG_OBS;}
#line 3624 "vex_parse.tab.c"
    break;

  case 88: /* primitive: B_THREADS  */
#line 599 "./vex_parse.y"
                      {(yyval.ival)=B_THREADS;}
#line 3630 "vex_parse.tab.c"
    break;

  case 89: /* qrefs: qrefs qrefx  */
#line 601 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 3636 "vex_parse.tab.c"
    break;

  case 90: /* qrefs: qrefx  */
#line 602 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 3642 "vex_parse.tab.c"
    break;

  case 91: /* qrefx: qref  */
#line 604 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].qrptr));}
#line 3648 "vex_parse.tab.c"
    break;

  case 92: /* qrefx: T_COMMENT  */
#line 605 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 3654 "vex_parse.tab.c"
    break;

  case 93: /* qrefx: T_COMMENT_TRAILING  */
#line 606 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 3660 "vex_parse.tab.c"
    break;

  case 94: /* qref: T_REF primitive '=' T_NAME qualifiers ';'  */
#line 608 "./vex_parse.y"
                                                  {(yyval.qrptr)=make_qref((yyvsp[-4].ival),(yyvsp[-2].sval),(yyvsp[-1].llptr));}
#line 3666 "vex_parse.tab.c"
    break;

  case 95: /* qref: T_REF primitive '=' T_NAME ';'  */
#line 609 "./vex_parse.y"
                                                {(yyval.qrptr)=make_qref((yyvsp[-3].ival),(yyvsp[-1].sval),NULL);}
#line 3672 "vex_parse.tab.c"
    break;

  case 96: /* qualifiers: qualifiers ':' T_NAME  */
#line 611 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-2].llptr),(yyvsp[0].sval));}
#line 3678 "vex_parse.tab.c"
    break;

  case 97: /* qualifiers: ':' T_NAME  */
#line 612 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].sval));}
#line 3684 "vex_parse.tab.c"
    break;

  case 98: /* sched_block: B_SCHED ';' sched_defs  */
#line 616 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 3690 "vex_parse.tab.c"
    break;

  case 99: /* sched_block: B_SCHED ';'  */
#line 617 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 3696 "vex_parse.tab.c"
    break;

  case 100: /* sched_defs: sched_defs sched_defx  */
#line 619 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 3702 "vex_parse.tab.c"
    break;

  case 101: /* sched_defs: sched_defx  */
#line 620 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 3708 "vex_parse.tab.c"
    break;

  case 102: /* sched_defx: sched_def  */
#line 622 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SCAN,(yyvsp[0].dfptr));}
#line 3714 "vex_parse.tab.c"
    break;

  case 103: /* sched_defx: T_COMMENT  */
#line 623 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 3720 "vex_parse.tab.c"
    break;

  case 104: /* sched_defx: T_COMMENT_TRAILING  */
#line 624 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 3726 "vex_parse.tab.c"
    break;

  case 105: /* sched_def: T_SCAN T_NAME ';' sched_lowls T_ENDSCAN ';'  */
#line 627 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 3732 "vex_parse.tab.c"
    break;

  case 106: /* sched_def: T_SCAN T_NAME ';' T_ENDSCAN ';'  */
#line 628 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 3738 "vex_parse.tab.c"
    break;

  case 107: /* sched_lowls: sched_lowls sched_lowl  */
#line 630 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 3744 "vex_parse.tab.c"
    break;

  case 108: /* sched_lowls: sched_lowl  */
#line 631 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 3750 "vex_parse.tab.c"
    break;

  case 109: /* sched_lowl: start  */
#line 633 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_START,(yyvsp[0].sval));}
#line 3756 "vex_parse.tab.c"
    break;

  case 110: /* sched_lowl: mode  */
#line 634 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_MODE,(yyvsp[0].sval));}
#line 3762 "vex_parse.tab.c"
    break;

  case 111: /* sched_lowl: source  */
#line 635 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SOURCE,(yyvsp[0].soptr));}
#line 3768 "vex_parse.tab.c"
    break;

  case 112: /* sched_lowl: station  */
#line 636 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_STATION,(yyvsp[0].snptr));}
#line 3774 "vex_parse.tab.c"
    break;

  case 113: /* sched_lowl: data_transfer  */
#line 637 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DATA_TRANSFER,(yyvsp[0].dtptr));}
#line 3780 "vex_parse.tab.c"
    break;

  case 114: /* sched_lowl: intent  */
#line 638 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_INTENT,(yyvsp[0].inptr));}
#line 3786 "vex_parse.tab.c"
    break;

  case 115: /* sched_lowl: pointing_offset  */
#line 639 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_POINTING_OFFSET,(yyvsp[0].ptptr));}
#line 3792 "vex_parse.tab.c"
    break;

  case 116: /* sched_lowl: T_COMMENT  */
#line 640 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 3798 "vex_parse.tab.c"
    break;

  case 117: /* sched_lowl: T_COMMENT_TRAILING  */
#line 641 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 3804 "vex_parse.tab.c"
    break;

  case 118: /* start: T_START '=' T_NAME ';'  */
#line 643 "./vex_parse.y"
                                        {(yyval.sval)=(yyvsp[-1].sval);}
#line 3810 "vex_parse.tab.c"
    break;

  case 119: /* mode: T_MODE '=' T_NAME ';'  */
#line 645 "./vex_parse.y"
                                        {(yyval.sval)=(yyvsp[-1].sval);}
#line 3816 "vex_parse.tab.c"
    break;

  case 120: /* source: T_SOURCE '=' T_NAME ':' value2 ':' value2 source_stations ';'  */
#line 648 "./vex_parse.y"
                {(yyval.soptr)=make_source((yyvsp[-6].sval),(yyvsp[-4].dvptr),(yyvsp[-2].dvptr),(yyvsp[-1].llptr));}
#line 3822 "vex_parse.tab.c"
    break;

  case 121: /* source: T_SOURCE '=' T_NAME ':' value2 ':' value2 ';'  */
#line 650 "./vex_parse.y"
                {(yyval.soptr)=make_source((yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL);}
#line 3828 "vex_parse.tab.c"
    break;

  case 122: /* source: T_SOURCE '=' T_NAME ':' value2 ';'  */
#line 652 "./vex_parse.y"
                {(yyval.soptr)=make_source((yyvsp[-3].sval),(yyvsp[-1].dvptr),NULL,NULL);}
#line 3834 "vex_parse.tab.c"
    break;

  case 123: /* source: T_SOURCE '=' T_NAME ';'  */
#line 654 "./vex_parse.y"
                {(yyval.soptr)=make_source((yyvsp[-1].sval),NULL,NULL,NULL);}
#line 3840 "vex_parse.tab.c"
    break;

  case 124: /* source_stations: source_stations source_station  */
#line 656 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].sval));}
#line 3846 "vex_parse.tab.c"
    break;

  case 125: /* source_stations: source_station  */
#line 657 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].sval));}
#line 3852 "vex_parse.tab.c"
    break;

  case 126: /* source_station: ':' T_NAME  */
#line 659 "./vex_parse.y"
                                        {(yyval.sval)=(yyvsp[0].sval);}
#line 3858 "vex_parse.tab.c"
    break;

  case 127: /* station: T_STATION '=' T_NAME ':' unit_value ':' unit_value ':' start_position ':' pass ':' sector ':' drives ';'  */
#line 668 "./vex_parse.y"
                {(yyval.snptr)=make_station((yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].dvptr),(yyvsp[-7].dvptr),(yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].llptr));}
#line 3864 "vex_parse.tab.c"
    break;

  case 128: /* data_transfer: T_DATA_TRANSFER '=' scan_id ':' method ':' destination ':' unit_value2 ':' unit_value2 ':' options ';'  */
#line 676 "./vex_parse.y"
                {(yyval.dtptr)=make_data_transfer((yyvsp[-11].sval),(yyvsp[-9].sval),(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].sval));}
#line 3870 "vex_parse.tab.c"
    break;

  case 129: /* data_transfer: T_DATA_TRANSFER '=' scan_id ':' method ':' destination ':' unit_value2 ':' unit_value2 ';'  */
#line 682 "./vex_parse.y"
                {(yyval.dtptr)=make_data_transfer((yyvsp[-9].sval),(yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL);}
#line 3876 "vex_parse.tab.c"
    break;

  case 130: /* intent: T_INTENT '=' name_or_not ':' name_value ':' name_value ';'  */
#line 685 "./vex_parse.y"
                {(yyval.inptr)=make_intent((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 3882 "vex_parse.tab.c"
    break;

  case 131: /* pointing_offset: T_POINTING_OFFSET '=' name_or_not ':' name_value ':' unit_value ':' name_value ':' unit_value ';'  */
#line 692 "./vex_parse.y"
                {(yyval.ptptr)=make_pointing_offset((yyvsp[-9].sval),(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 3888 "vex_parse.tab.c"
    break;

  case 132: /* start_position: %empty  */
#line 694 "./vex_parse.y"
                                                {(yyval.dvptr)=NULL;}
#line 3894 "vex_parse.tab.c"
    break;

  case 133: /* start_position: unit_value  */
#line 695 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[0].dvptr);}
#line 3900 "vex_parse.tab.c"
    break;

  case 134: /* pass: %empty  */
#line 697 "./vex_parse.y"
                                                {(yyval.sval)=NULL;}
#line 3906 "vex_parse.tab.c"
    break;

  case 135: /* pass: T_NAME  */
#line 698 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[0].sval);}
#line 3912 "vex_parse.tab.c"
    break;

  case 136: /* sector: %empty  */
#line 700 "./vex_parse.y"
                                                {(yyval.sval)=NULL;}
#line 3918 "vex_parse.tab.c"
    break;

  case 137: /* sector: T_LINK  */
#line 701 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[0].sval);}
#line 3924 "vex_parse.tab.c"
    break;

  case 138: /* drives: %empty  */
#line 703 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 3930 "vex_parse.tab.c"
    break;

  case 139: /* drives: value  */
#line 704 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].dvptr));}
#line 3936 "vex_parse.tab.c"
    break;

  case 140: /* drives: value ':' value  */
#line 705 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(add_list(NULL,(yyvsp[-2].dvptr)),(yyvsp[0].dvptr));}
#line 3942 "vex_parse.tab.c"
    break;

  case 141: /* scan_id: %empty  */
#line 707 "./vex_parse.y"
                                                {(yyval.sval)=NULL;}
#line 3948 "vex_parse.tab.c"
    break;

  case 142: /* scan_id: T_NAME  */
#line 708 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[0].sval);}
#line 3954 "vex_parse.tab.c"
    break;

  case 143: /* method: %empty  */
#line 710 "./vex_parse.y"
                                                {(yyval.sval)=NULL;}
#line 3960 "vex_parse.tab.c"
    break;

  case 144: /* method: T_NAME  */
#line 711 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[0].sval);}
#line 3966 "vex_parse.tab.c"
    break;

  case 145: /* destination: %empty  */
#line 713 "./vex_parse.y"
                                                {(yyval.sval)=NULL;}
#line 3972 "vex_parse.tab.c"
    break;

  case 146: /* destination: T_NAME  */
#line 714 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[0].sval);}
#line 3978 "vex_parse.tab.c"
    break;

  case 147: /* options: %empty  */
#line 716 "./vex_parse.y"
                                                {(yyval.sval)=NULL;}
#line 3984 "vex_parse.tab.c"
    break;

  case 148: /* options: T_NAME  */
#line 717 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[0].sval);}
#line 3990 "vex_parse.tab.c"
    break;

  case 149: /* antenna_block: B_ANTENNA ';' antenna_defs  */
#line 722 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 3996 "vex_parse.tab.c"
    break;

  case 150: /* antenna_block: B_ANTENNA ';'  */
#line 723 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 4002 "vex_parse.tab.c"
    break;

  case 151: /* antenna_defs: antenna_defs antenna_defx  */
#line 725 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4008 "vex_parse.tab.c"
    break;

  case 152: /* antenna_defs: antenna_defx  */
#line 726 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4014 "vex_parse.tab.c"
    break;

  case 153: /* antenna_defx: antenna_def  */
#line 728 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 4020 "vex_parse.tab.c"
    break;

  case 154: /* antenna_defx: T_COMMENT  */
#line 729 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4026 "vex_parse.tab.c"
    break;

  case 155: /* antenna_defx: T_COMMENT_TRAILING  */
#line 730 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4032 "vex_parse.tab.c"
    break;

  case 156: /* antenna_def: T_DEF T_NAME ';' antenna_lowls T_ENDDEF ';'  */
#line 733 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 4038 "vex_parse.tab.c"
    break;

  case 157: /* antenna_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 734 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 4044 "vex_parse.tab.c"
    break;

  case 158: /* antenna_lowls: antenna_lowls antenna_lowl  */
#line 736 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4050 "vex_parse.tab.c"
    break;

  case 159: /* antenna_lowls: antenna_lowl  */
#line 737 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4056 "vex_parse.tab.c"
    break;

  case 160: /* antenna_lowl: antenna_diam  */
#line 739 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ANTENNA_DIAM,(yyvsp[0].dvptr));}
#line 4062 "vex_parse.tab.c"
    break;

  case 161: /* antenna_lowl: axis_type  */
#line 740 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_AXIS_TYPE,(yyvsp[0].atptr));}
#line 4068 "vex_parse.tab.c"
    break;

  case 162: /* antenna_lowl: axis_offset  */
#line 741 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_AXIS_OFFSET,(yyvsp[0].dvptr));}
#line 4074 "vex_parse.tab.c"
    break;

  case 163: /* antenna_lowl: antenna_motion  */
#line 742 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ANTENNA_MOTION,(yyvsp[0].amptr));}
#line 4080 "vex_parse.tab.c"
    break;

  case 164: /* antenna_lowl: pointing_sector  */
#line 743 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_POINTING_SECTOR,(yyvsp[0].psptr));}
#line 4086 "vex_parse.tab.c"
    break;

  case 165: /* antenna_lowl: nasmyth  */
#line 744 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_NASMYTH,(yyvsp[0].nsptr));}
#line 4092 "vex_parse.tab.c"
    break;

  case 166: /* antenna_lowl: external_ref  */
#line 745 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 4098 "vex_parse.tab.c"
    break;

  case 167: /* antenna_lowl: T_COMMENT  */
#line 746 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4104 "vex_parse.tab.c"
    break;

  case 168: /* antenna_lowl: T_COMMENT_TRAILING  */
#line 747 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4110 "vex_parse.tab.c"
    break;

  case 169: /* antenna_diam: T_ANTENNA_DIAM '=' unit_value ';'  */
#line 749 "./vex_parse.y"
                                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 4116 "vex_parse.tab.c"
    break;

  case 170: /* axis_type: T_AXIS_TYPE '=' T_NAME ':' T_NAME ';'  */
#line 752 "./vex_parse.y"
                {(yyval.atptr)=make_axis_type((yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 4122 "vex_parse.tab.c"
    break;

  case 171: /* axis_type: T_AXIS_TYPE '=' T_NAME ';'  */
#line 754 "./vex_parse.y"
                {(yyval.atptr)=make_axis_type((yyvsp[-1].sval),NULL,NULL);}
#line 4128 "vex_parse.tab.c"
    break;

  case 172: /* axis_type: T_AXIS_TYPE '=' T_NAME ':' T_NAME ':' unit_value ';'  */
#line 756 "./vex_parse.y"
                {(yyval.atptr)=make_axis_type((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 4134 "vex_parse.tab.c"
    break;

  case 173: /* axis_offset: T_AXIS_OFFSET '=' unit_value ';'  */
#line 758 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 4140 "vex_parse.tab.c"
    break;

  case 174: /* antenna_motion: T_ANTENNA_MOTION '=' T_NAME ':' unit_value ':' unit_value ';'  */
#line 763 "./vex_parse.y"
                {(yyval.amptr)=make_antenna_motion((yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL);}
#line 4146 "vex_parse.tab.c"
    break;

  case 175: /* antenna_motion: T_ANTENNA_MOTION '=' T_NAME ':' unit_value ':' unit_value ':' unit_value ';'  */
#line 768 "./vex_parse.y"
                {(yyval.amptr)=make_antenna_motion((yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 4152 "vex_parse.tab.c"
    break;

  case 176: /* pointing_sector: T_POINTING_SECTOR '=' T_LINK ':' T_NAME ':' unit_value ':' unit_value ':' T_NAME ':' unit_value ':' unit_value ';'  */
#line 777 "./vex_parse.y"
                      {(yyval.psptr)=make_pointing_sector((yyvsp[-13].sval),(yyvsp[-11].sval),(yyvsp[-9].dvptr),(yyvsp[-7].dvptr),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL);}
#line 4158 "vex_parse.tab.c"
    break;

  case 177: /* pointing_sector: T_POINTING_SECTOR '=' T_LINK ':' T_NAME ':' unit_value ':' unit_value ';'  */
#line 782 "./vex_parse.y"
                      {(yyval.psptr)=make_pointing_sector((yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL,NULL,NULL,NULL);}
#line 4164 "vex_parse.tab.c"
    break;

  case 178: /* pointing_sector: T_POINTING_SECTOR '=' T_LINK ':' T_NAME ':' unit_value ':' unit_value ':' T_NAME ':' unit_value ':' unit_value ':' T_NAME ';'  */
#line 791 "./vex_parse.y"
                      {(yyval.psptr)=make_pointing_sector((yyvsp[-15].sval),(yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].dvptr),(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].sval));}
#line 4170 "vex_parse.tab.c"
    break;

  case 179: /* pointing_sector: T_POINTING_SECTOR '=' T_LINK ':' T_NAME ':' unit_value ':' unit_value ':' ':' ':' ':' T_NAME ';'  */
#line 800 "./vex_parse.y"
                      {(yyval.psptr)=make_pointing_sector((yyvsp[-12].sval),(yyvsp[-10].sval),(yyvsp[-8].dvptr),(yyvsp[-6].dvptr),NULL,NULL,NULL,(yyvsp[-1].sval));}
#line 4176 "vex_parse.tab.c"
    break;

  case 180: /* nasmyth: T_NASMYTH '=' T_LINK ':' T_NAME ';'  */
#line 803 "./vex_parse.y"
                      {(yyval.nsptr)=make_nasmyth((yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 4182 "vex_parse.tab.c"
    break;

  case 181: /* bbc_block: B_BBC ';' bbc_defs  */
#line 807 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 4188 "vex_parse.tab.c"
    break;

  case 182: /* bbc_block: B_BBC ';'  */
#line 808 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 4194 "vex_parse.tab.c"
    break;

  case 183: /* bbc_defs: bbc_defs bbc_defx  */
#line 810 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4200 "vex_parse.tab.c"
    break;

  case 184: /* bbc_defs: bbc_defx  */
#line 811 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4206 "vex_parse.tab.c"
    break;

  case 185: /* bbc_defx: bbc_def  */
#line 813 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 4212 "vex_parse.tab.c"
    break;

  case 186: /* bbc_defx: T_COMMENT  */
#line 814 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4218 "vex_parse.tab.c"
    break;

  case 187: /* bbc_defx: T_COMMENT_TRAILING  */
#line 815 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4224 "vex_parse.tab.c"
    break;

  case 188: /* bbc_def: T_DEF T_NAME ';' bbc_lowls T_ENDDEF ';'  */
#line 817 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 4230 "vex_parse.tab.c"
    break;

  case 189: /* bbc_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 819 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 4236 "vex_parse.tab.c"
    break;

  case 190: /* bbc_lowls: bbc_lowls bbc_lowl  */
#line 821 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4242 "vex_parse.tab.c"
    break;

  case 191: /* bbc_lowls: bbc_lowl  */
#line 822 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4248 "vex_parse.tab.c"
    break;

  case 192: /* bbc_lowl: bbc_assign  */
#line 824 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_BBC_ASSIGN,(yyvsp[0].baptr));}
#line 4254 "vex_parse.tab.c"
    break;

  case 193: /* bbc_lowl: external_ref  */
#line 825 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 4260 "vex_parse.tab.c"
    break;

  case 194: /* bbc_lowl: T_COMMENT  */
#line 826 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4266 "vex_parse.tab.c"
    break;

  case 195: /* bbc_lowl: T_COMMENT_TRAILING  */
#line 827 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4272 "vex_parse.tab.c"
    break;

  case 196: /* bbc_assign: T_BBC_ASSIGN '=' T_LINK ':' value ':' T_LINK ';'  */
#line 830 "./vex_parse.y"
                {(yyval.baptr)=make_bbc_assign((yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].sval));}
#line 4278 "vex_parse.tab.c"
    break;

  case 197: /* bitstreams_block: B_BITSTREAMS ';' bitstreams_defs  */
#line 834 "./vex_parse.y"
                                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 4284 "vex_parse.tab.c"
    break;

  case 198: /* bitstreams_block: B_BITSTREAMS ';'  */
#line 835 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 4290 "vex_parse.tab.c"
    break;

  case 199: /* bitstreams_defs: bitstreams_defs bitstreams_defx  */
#line 837 "./vex_parse.y"
                                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4296 "vex_parse.tab.c"
    break;

  case 200: /* bitstreams_defs: bitstreams_defx  */
#line 838 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4302 "vex_parse.tab.c"
    break;

  case 201: /* bitstreams_defx: bitstreams_def  */
#line 840 "./vex_parse.y"
                                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 4308 "vex_parse.tab.c"
    break;

  case 202: /* bitstreams_defx: T_COMMENT  */
#line 841 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4314 "vex_parse.tab.c"
    break;

  case 203: /* bitstreams_defx: T_COMMENT_TRAILING  */
#line 842 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4320 "vex_parse.tab.c"
    break;

  case 204: /* bitstreams_def: T_DEF T_NAME ';' bitstreams_lowls T_ENDDEF ';'  */
#line 844 "./vex_parse.y"
                                                               {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 4326 "vex_parse.tab.c"
    break;

  case 205: /* bitstreams_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 846 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 4332 "vex_parse.tab.c"
    break;

  case 206: /* bitstreams_lowls: bitstreams_lowls bitstreams_lowl  */
#line 848 "./vex_parse.y"
                                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4338 "vex_parse.tab.c"
    break;

  case 207: /* bitstreams_lowls: bitstreams_lowl  */
#line 849 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4344 "vex_parse.tab.c"
    break;

  case 208: /* bitstreams_lowl: stream_def  */
#line 851 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_STREAM_DEF,(yyvsp[0].sdptr));}
#line 4350 "vex_parse.tab.c"
    break;

  case 209: /* bitstreams_lowl: stream_sample_rate  */
#line 852 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_STREAM_SAMPLE_RATE,(yyvsp[0].ssptr));}
#line 4356 "vex_parse.tab.c"
    break;

  case 210: /* bitstreams_lowl: stream_label  */
#line 853 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_STREAM_LABEL,(yyvsp[0].slptr));}
#line 4362 "vex_parse.tab.c"
    break;

  case 211: /* bitstreams_lowl: external_ref  */
#line 854 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 4368 "vex_parse.tab.c"
    break;

  case 212: /* bitstreams_lowl: T_COMMENT  */
#line 855 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4374 "vex_parse.tab.c"
    break;

  case 213: /* bitstreams_lowl: T_COMMENT_TRAILING  */
#line 856 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4380 "vex_parse.tab.c"
    break;

  case 214: /* stream_def: T_STREAM_DEF '=' T_LINK ':' T_NAME ':' value2 ':' value ':' T_LINK ';'  */
#line 859 "./vex_parse.y"
                {(yyval.sdptr)=make_stream_def((yyvsp[-9].sval),(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].sval));}
#line 4386 "vex_parse.tab.c"
    break;

  case 215: /* stream_def: T_STREAM_DEF '=' T_LINK ':' T_NAME ':' value2 ':' value ';'  */
#line 861 "./vex_parse.y"
                {(yyval.sdptr)=make_stream_def((yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL);}
#line 4392 "vex_parse.tab.c"
    break;

  case 216: /* stream_sample_rate: T_STREAM_SAMPLE_RATE '=' unit_value ':' T_LINK ';'  */
#line 864 "./vex_parse.y"
                    {(yyval.ssptr)=make_stream_sample_rate((yyvsp[-3].dvptr),(yyvsp[-1].sval));}
#line 4398 "vex_parse.tab.c"
    break;

  case 217: /* stream_sample_rate: T_STREAM_SAMPLE_RATE '=' unit_value ';'  */
#line 866 "./vex_parse.y"
                    {(yyval.ssptr)=make_stream_sample_rate((yyvsp[-1].dvptr),NULL);}
#line 4404 "vex_parse.tab.c"
    break;

  case 218: /* stream_label: T_STREAM_LABEL '=' T_NAME ':' T_LINK ';'  */
#line 869 "./vex_parse.y"
                    {(yyval.slptr)=make_stream_label((yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 4410 "vex_parse.tab.c"
    break;

  case 219: /* stream_label: T_STREAM_LABEL '=' T_NAME ';'  */
#line 871 "./vex_parse.y"
                    {(yyval.slptr)=make_stream_label((yyvsp[-1].sval),NULL);}
#line 4416 "vex_parse.tab.c"
    break;

  case 220: /* clock_block: B_CLOCK ';' clock_defs  */
#line 875 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 4422 "vex_parse.tab.c"
    break;

  case 221: /* clock_block: B_CLOCK ';'  */
#line 876 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 4428 "vex_parse.tab.c"
    break;

  case 222: /* clock_defs: clock_defs clock_defx  */
#line 878 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4434 "vex_parse.tab.c"
    break;

  case 223: /* clock_defs: clock_defx  */
#line 879 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4440 "vex_parse.tab.c"
    break;

  case 224: /* clock_defx: clock_def  */
#line 881 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 4446 "vex_parse.tab.c"
    break;

  case 225: /* clock_defx: T_COMMENT  */
#line 882 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4452 "vex_parse.tab.c"
    break;

  case 226: /* clock_defx: T_COMMENT_TRAILING  */
#line 883 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4458 "vex_parse.tab.c"
    break;

  case 227: /* clock_def: T_DEF T_NAME ';' clock_lowls T_ENDDEF ';'  */
#line 886 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 4464 "vex_parse.tab.c"
    break;

  case 228: /* clock_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 888 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 4470 "vex_parse.tab.c"
    break;

  case 229: /* clock_lowls: clock_lowls clock_lowl  */
#line 890 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4476 "vex_parse.tab.c"
    break;

  case 230: /* clock_lowls: clock_lowl  */
#line 891 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4482 "vex_parse.tab.c"
    break;

  case 231: /* clock_lowl: clock_early  */
#line 893 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_CLOCK_EARLY,(yyvsp[0].ceptr));}
#line 4488 "vex_parse.tab.c"
    break;

  case 232: /* clock_lowl: external_ref  */
#line 894 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 4494 "vex_parse.tab.c"
    break;

  case 233: /* clock_lowl: T_COMMENT  */
#line 895 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4500 "vex_parse.tab.c"
    break;

  case 234: /* clock_lowl: T_COMMENT_TRAILING  */
#line 896 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4506 "vex_parse.tab.c"
    break;

  case 235: /* clock_early: T_CLOCK_EARLY '=' name_or_not ':' unit_value ':' T_NAME ':' unit_option ':' unit_value ':' unit_value ':' unit_value ';'  */
#line 899 "./vex_parse.y"
                {(yyval.ceptr)=make_clock_early((yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 4512 "vex_parse.tab.c"
    break;

  case 236: /* clock_early: T_CLOCK_EARLY '=' name_or_not ':' unit_value ':' T_NAME ':' unit_option ':' unit_value ':' unit_value ';'  */
#line 901 "./vex_parse.y"
                {(yyval.ceptr)=make_clock_early((yyvsp[-11].sval),(yyvsp[-9].dvptr),(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL);}
#line 4518 "vex_parse.tab.c"
    break;

  case 237: /* clock_early: T_CLOCK_EARLY '=' name_or_not ':' unit_value ':' T_NAME ':' unit_option ':' unit_value ':' empty_value ':' unit_value ';'  */
#line 903 "./vex_parse.y"
                {(yyval.ceptr)=make_clock_early((yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 4524 "vex_parse.tab.c"
    break;

  case 238: /* clock_early: T_CLOCK_EARLY '=' name_or_not ':' unit_value ':' T_NAME ':' unit_option ':' unit_value ';'  */
#line 905 "./vex_parse.y"
                {(yyval.ceptr)=make_clock_early((yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL,NULL);}
#line 4530 "vex_parse.tab.c"
    break;

  case 239: /* clock_early: T_CLOCK_EARLY '=' name_or_not ':' unit_value ':' T_NAME ':' unit_option ':' empty_value ':' empty_value ':' unit_value ';'  */
#line 907 "./vex_parse.y"
                {(yyval.ceptr)=make_clock_early((yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 4536 "vex_parse.tab.c"
    break;

  case 240: /* clock_early: T_CLOCK_EARLY '=' name_or_not ':' unit_value ':' T_NAME ':' unit_option ';'  */
#line 909 "./vex_parse.y"
                {(yyval.ceptr)=make_clock_early((yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].sval),(yyvsp[-1].dvptr),NULL,NULL,NULL);}
#line 4542 "vex_parse.tab.c"
    break;

  case 241: /* clock_early: T_CLOCK_EARLY '=' name_or_not ':' unit_value ':' empty_name ':' empty_value ':' empty_value ':' empty_value ':' unit_value ';'  */
#line 911 "./vex_parse.y"
                {(yyval.ceptr)=make_clock_early((yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 4548 "vex_parse.tab.c"
    break;

  case 242: /* clock_early: T_CLOCK_EARLY '=' name_or_not ':' unit_value ';'  */
#line 913 "./vex_parse.y"
                {(yyval.ceptr)=make_clock_early((yyvsp[-3].sval),(yyvsp[-1].dvptr),NULL,NULL,NULL,NULL,NULL);}
#line 4554 "vex_parse.tab.c"
    break;

  case 243: /* das_block: B_DAS ';' das_defs  */
#line 917 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 4560 "vex_parse.tab.c"
    break;

  case 244: /* das_block: B_DAS ';'  */
#line 918 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 4566 "vex_parse.tab.c"
    break;

  case 245: /* das_defs: das_defs das_defx  */
#line 920 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4572 "vex_parse.tab.c"
    break;

  case 246: /* das_defs: das_defx  */
#line 921 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4578 "vex_parse.tab.c"
    break;

  case 247: /* das_defx: das_def  */
#line 923 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 4584 "vex_parse.tab.c"
    break;

  case 248: /* das_defx: T_COMMENT  */
#line 924 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4590 "vex_parse.tab.c"
    break;

  case 249: /* das_defx: T_COMMENT_TRAILING  */
#line 925 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4596 "vex_parse.tab.c"
    break;

  case 250: /* das_def: T_DEF T_NAME ';' das_lowls T_ENDDEF ';'  */
#line 927 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 4602 "vex_parse.tab.c"
    break;

  case 251: /* das_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 929 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 4608 "vex_parse.tab.c"
    break;

  case 252: /* das_lowls: das_lowls das_lowl  */
#line 931 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4614 "vex_parse.tab.c"
    break;

  case 253: /* das_lowls: das_lowl  */
#line 932 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4620 "vex_parse.tab.c"
    break;

  case 254: /* das_lowl: record_transport_type  */
#line 934 "./vex_parse.y"
                                      {(yyval.lwptr)=make_lowl(T_RECORD_TRANSPORT_TYPE,(yyvsp[0].sval));}
#line 4626 "vex_parse.tab.c"
    break;

  case 255: /* das_lowl: electronics_rack_type  */
#line 935 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ELECTRONICS_RACK_TYPE,(yyvsp[0].sval));}
#line 4632 "vex_parse.tab.c"
    break;

  case 256: /* das_lowl: number_drives  */
#line 936 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_NUMBER_DRIVES,(yyvsp[0].dvptr));}
#line 4638 "vex_parse.tab.c"
    break;

  case 257: /* das_lowl: headstack  */
#line 937 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_HEADSTACK,(yyvsp[0].hsptr));}
#line 4644 "vex_parse.tab.c"
    break;

  case 258: /* das_lowl: record_density  */
#line 938 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_RECORD_DENSITY,(yyvsp[0].dvptr));}
#line 4650 "vex_parse.tab.c"
    break;

  case 259: /* das_lowl: tape_length  */
#line 939 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_TAPE_LENGTH,(yyvsp[0].tlptr));}
#line 4656 "vex_parse.tab.c"
    break;

  case 260: /* das_lowl: recording_system_id  */
#line 941 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_RECORDING_SYSTEM_ID,(yyvsp[0].dvptr));}
#line 4662 "vex_parse.tab.c"
    break;

  case 261: /* das_lowl: tape_motion  */
#line 942 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_TAPE_MOTION,(yyvsp[0].tmptr));}
#line 4668 "vex_parse.tab.c"
    break;

  case 262: /* das_lowl: tape_control  */
#line 943 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_TAPE_CONTROL,(yyvsp[0].sval));}
#line 4674 "vex_parse.tab.c"
    break;

  case 263: /* das_lowl: equip  */
#line 944 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_EQUIP,(yyvsp[0].eqptr));}
#line 4680 "vex_parse.tab.c"
    break;

  case 264: /* das_lowl: composite_equip  */
#line 945 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMPOSITE_EQUIP,(yyvsp[0].cqptr));}
#line 4686 "vex_parse.tab.c"
    break;

  case 265: /* das_lowl: equip_set  */
#line 946 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_EQUIP_SET,(yyvsp[0].esptr));}
#line 4692 "vex_parse.tab.c"
    break;

  case 266: /* das_lowl: equip_info  */
#line 947 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_EQUIP_INFO,(yyvsp[0].eiptr));}
#line 4698 "vex_parse.tab.c"
    break;

  case 267: /* das_lowl: connection  */
#line 948 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_CONNECTION,(yyvsp[0].coptr));}
#line 4704 "vex_parse.tab.c"
    break;

  case 268: /* das_lowl: record_method  */
#line 949 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_RECORD_METHOD,(yyvsp[0].rmptr));}
#line 4710 "vex_parse.tab.c"
    break;

  case 269: /* das_lowl: record_control  */
#line 950 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_RECORD_CONTROL,(yyvsp[0].dvptr));}
#line 4716 "vex_parse.tab.c"
    break;

  case 270: /* das_lowl: external_ref  */
#line 951 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 4722 "vex_parse.tab.c"
    break;

  case 271: /* das_lowl: T_COMMENT  */
#line 952 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4728 "vex_parse.tab.c"
    break;

  case 272: /* das_lowl: T_COMMENT_TRAILING  */
#line 953 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4734 "vex_parse.tab.c"
    break;

  case 273: /* record_transport_type: T_RECORD_TRANSPORT_TYPE '=' T_NAME ';'  */
#line 955 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 4740 "vex_parse.tab.c"
    break;

  case 274: /* electronics_rack_type: T_ELECTRONICS_RACK_TYPE '=' T_NAME ';'  */
#line 957 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 4746 "vex_parse.tab.c"
    break;

  case 275: /* number_drives: T_NUMBER_DRIVES '=' value ';'  */
#line 959 "./vex_parse.y"
                                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 4752 "vex_parse.tab.c"
    break;

  case 276: /* headstack: T_HEADSTACK '=' value ':' T_NAME ':' value ';'  */
#line 962 "./vex_parse.y"
                                        {(yyval.hsptr)=make_headstack((yyvsp[-5].dvptr),(yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 4758 "vex_parse.tab.c"
    break;

  case 277: /* headstack: T_HEADSTACK '=' value ':' ':' value ';'  */
#line 964 "./vex_parse.y"
                                        {(yyval.hsptr)=make_headstack((yyvsp[-4].dvptr),NULL,(yyvsp[-1].dvptr));}
#line 4764 "vex_parse.tab.c"
    break;

  case 278: /* record_density: T_RECORD_DENSITY '=' T_NAME T_NAME ';'  */
#line 967 "./vex_parse.y"
                                                {(yyval.dvptr)=make_dvalue((yyvsp[-2].sval),(yyvsp[-1].sval));}
#line 4770 "vex_parse.tab.c"
    break;

  case 279: /* tape_length: T_TAPE_LENGTH '=' unit_value ';'  */
#line 970 "./vex_parse.y"
                                {(yyval.tlptr)=make_tape_length((yyvsp[-1].dvptr),NULL,NULL);}
#line 4776 "vex_parse.tab.c"
    break;

  case 280: /* tape_length: T_TAPE_LENGTH '=' unit_value ':' T_NAME ':' value ';'  */
#line 972 "./vex_parse.y"
                                {(yyval.tlptr)=make_tape_length((yyvsp[-5].dvptr),(yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 4782 "vex_parse.tab.c"
    break;

  case 281: /* recording_system_id: T_RECORDING_SYSTEM_ID '=' value ';'  */
#line 974 "./vex_parse.y"
                                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 4788 "vex_parse.tab.c"
    break;

  case 282: /* tape_motion: T_TAPE_MOTION '=' T_NAME ';'  */
#line 977 "./vex_parse.y"
                                {(yyval.tmptr)=make_tape_motion((yyvsp[-1].sval),NULL,NULL,NULL);}
#line 4794 "vex_parse.tab.c"
    break;

  case 283: /* tape_motion: T_TAPE_MOTION '=' T_NAME ':' unit_value ';'  */
#line 979 "./vex_parse.y"
                                {(yyval.tmptr)=make_tape_motion((yyvsp[-3].sval),(yyvsp[-1].dvptr),NULL,NULL);}
#line 4800 "vex_parse.tab.c"
    break;

  case 284: /* tape_motion: T_TAPE_MOTION '=' T_NAME ':' unit_value ':' unit_value ':' unit_value ';'  */
#line 982 "./vex_parse.y"
                                {(yyval.tmptr)=make_tape_motion((yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 4806 "vex_parse.tab.c"
    break;

  case 285: /* tape_control: T_TAPE_CONTROL '=' T_NAME ';'  */
#line 984 "./vex_parse.y"
                                              {(yyval.sval)=(yyvsp[-1].sval);}
#line 4812 "vex_parse.tab.c"
    break;

  case 286: /* equip: T_EQUIP '=' T_NAME ':' T_NAME ':' T_LINK ':' T_NAME ';'  */
#line 987 "./vex_parse.y"
                {(yyval.eqptr)=make_equip((yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 4818 "vex_parse.tab.c"
    break;

  case 287: /* equip: T_EQUIP '=' T_NAME ':' T_NAME ':' T_LINK ';'  */
#line 989 "./vex_parse.y"
                {(yyval.eqptr)=make_equip((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 4824 "vex_parse.tab.c"
    break;

  case 288: /* composite_equip: T_COMPOSITE_EQUIP '=' T_LINK ':' T_LINK ':' T_LINK ';'  */
#line 992 "./vex_parse.y"
                 {(yyval.cqptr)=make_composite_equip((yyvsp[-5].sval),ins_list((yyvsp[-3].sval),add_list(NULL,(yyvsp[-1].sval))));}
#line 4830 "vex_parse.tab.c"
    break;

  case 289: /* composite_equip: T_COMPOSITE_EQUIP '=' T_LINK ':' T_LINK ':' T_LINK ':' link_list ';'  */
#line 994 "./vex_parse.y"
                 {(yyval.cqptr)=make_composite_equip((yyvsp[-7].sval),ins_list((yyvsp[-5].sval),ins_list((yyvsp[-3].sval),(yyvsp[-1].llptr))));}
#line 4836 "vex_parse.tab.c"
    break;

  case 290: /* equip_set: T_EQUIP_SET '=' T_LINK ':' T_NAME ':' unit_more ';'  */
#line 997 "./vex_parse.y"
                {(yyval.esptr)=make_equip_set((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].llptr));}
#line 4842 "vex_parse.tab.c"
    break;

  case 291: /* equip_info: T_EQUIP_INFO '=' T_LINK ':' T_NAME ':' name_list ';'  */
#line 1000 "./vex_parse.y"
                {(yyval.eiptr)=make_equip_info((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].llptr));}
#line 4848 "vex_parse.tab.c"
    break;

  case 292: /* connection: T_CONNECTION '=' T_LINK ':' T_LINK ':' T_NAME ':' name_or_not ':' T_NAME ';'  */
#line 1003 "./vex_parse.y"
                {(yyval.coptr)=make_connection((yyvsp[-9].sval),(yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 4854 "vex_parse.tab.c"
    break;

  case 293: /* connection: T_CONNECTION '=' T_LINK ':' T_LINK ':' T_NAME ':' T_NAME ';'  */
#line 1005 "./vex_parse.y"
                {(yyval.coptr)=make_connection((yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 4860 "vex_parse.tab.c"
    break;

  case 294: /* connection: T_CONNECTION '=' T_LINK ':' T_LINK ':' T_NAME ';'  */
#line 1007 "./vex_parse.y"
                {(yyval.coptr)=make_connection((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval),NULL,NULL);}
#line 4866 "vex_parse.tab.c"
    break;

  case 295: /* record_method: T_RECORD_METHOD '=' T_NAME ':' unit_value2 ':' unit_value ';'  */
#line 1010 "./vex_parse.y"
                {(yyval.rmptr)=make_record_method((yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 4872 "vex_parse.tab.c"
    break;

  case 296: /* record_method: T_RECORD_METHOD '=' T_NAME ':' unit_value ';'  */
#line 1012 "./vex_parse.y"
                {(yyval.rmptr)=make_record_method((yyvsp[-3].sval),(yyvsp[-1].dvptr),NULL);}
#line 4878 "vex_parse.tab.c"
    break;

  case 297: /* record_method: T_RECORD_METHOD '=' T_NAME ';'  */
#line 1014 "./vex_parse.y"
                {(yyval.rmptr)=make_record_method((yyvsp[-1].sval),NULL,NULL);}
#line 4884 "vex_parse.tab.c"
    break;

  case 298: /* record_control: T_RECORD_CONTROL '=' value ';'  */
#line 1016 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 4890 "vex_parse.tab.c"
    break;

  case 299: /* datastreams_block: B_DATASTREAMS ';' datastreams_defs  */
#line 1020 "./vex_parse.y"
                                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 4896 "vex_parse.tab.c"
    break;

  case 300: /* datastreams_block: B_DATASTREAMS ';'  */
#line 1021 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 4902 "vex_parse.tab.c"
    break;

  case 301: /* datastreams_defs: datastreams_defs datastreams_defx  */
#line 1023 "./vex_parse.y"
                                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4908 "vex_parse.tab.c"
    break;

  case 302: /* datastreams_defs: datastreams_defx  */
#line 1024 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4914 "vex_parse.tab.c"
    break;

  case 303: /* datastreams_defx: datastreams_def  */
#line 1026 "./vex_parse.y"
                                                       {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 4920 "vex_parse.tab.c"
    break;

  case 304: /* datastreams_defx: T_COMMENT  */
#line 1027 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4926 "vex_parse.tab.c"
    break;

  case 305: /* datastreams_defx: T_COMMENT_TRAILING  */
#line 1028 "./vex_parse.y"
                                           {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4932 "vex_parse.tab.c"
    break;

  case 306: /* datastreams_def: T_DEF T_NAME ';' datastreams_lowls T_ENDDEF ';'  */
#line 1031 "./vex_parse.y"
                     {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 4938 "vex_parse.tab.c"
    break;

  case 307: /* datastreams_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1032 "./vex_parse.y"
                                                   {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 4944 "vex_parse.tab.c"
    break;

  case 308: /* datastreams_lowls: datastreams_lowls datastreams_lowl  */
#line 1034 "./vex_parse.y"
                                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 4950 "vex_parse.tab.c"
    break;

  case 309: /* datastreams_lowls: datastreams_lowl  */
#line 1035 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 4956 "vex_parse.tab.c"
    break;

  case 310: /* datastreams_lowl: datastream  */
#line 1037 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DATASTREAM,(yyvsp[0].daptr));}
#line 4962 "vex_parse.tab.c"
    break;

  case 311: /* datastreams_lowl: thread  */
#line 1038 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_THREAD,(yyvsp[0].thptr));}
#line 4968 "vex_parse.tab.c"
    break;

  case 312: /* datastreams_lowl: channel  */
#line 1039 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_CHANNEL,(yyvsp[0].chptr));}
#line 4974 "vex_parse.tab.c"
    break;

  case 313: /* datastreams_lowl: merged_datastream  */
#line 1040 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_MERGED_DATASTREAM,(yyvsp[0].mdptr));}
#line 4980 "vex_parse.tab.c"
    break;

  case 314: /* datastreams_lowl: external_ref  */
#line 1041 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 4986 "vex_parse.tab.c"
    break;

  case 315: /* datastreams_lowl: T_COMMENT  */
#line 1042 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 4992 "vex_parse.tab.c"
    break;

  case 316: /* datastreams_lowl: T_COMMENT_TRAILING  */
#line 1043 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 4998 "vex_parse.tab.c"
    break;

  case 317: /* datastream: T_DATASTREAM '=' T_LINK ':' T_NAME ':' T_NAME ';'  */
#line 1046 "./vex_parse.y"
                {(yyval.daptr)=make_datastream((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 5004 "vex_parse.tab.c"
    break;

  case 318: /* datastream: T_DATASTREAM '=' T_LINK ':' T_NAME ';'  */
#line 1048 "./vex_parse.y"
                {(yyval.daptr)=make_datastream((yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 5010 "vex_parse.tab.c"
    break;

  case 319: /* thread: T_THREAD '=' T_LINK ':' T_LINK ':' value ':' value ':' unit_value ':' value ':' T_NAME ':' value ';'  */
#line 1051 "./vex_parse.y"
                {(yyval.thptr)=make_thread((yyvsp[-15].sval),(yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].dvptr),(yyvsp[-7].dvptr),(yyvsp[-5].dvptr),(yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 5016 "vex_parse.tab.c"
    break;

  case 320: /* channel: T_CHANNEL '=' T_LINK ':' T_LINK ':' T_LINK ':' value ';'  */
#line 1054 "./vex_parse.y"
                {(yyval.chptr)=make_channel((yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 5022 "vex_parse.tab.c"
    break;

  case 321: /* merged_datastream: T_MERGED_DATASTREAM '=' link_or_not ':' name_or_not ':' T_LINK ':' T_LINK ':' link_list ';'  */
#line 1057 "./vex_parse.y"
                   {(yyval.mdptr)=make_merged_datastream((yyvsp[-9].sval),(yyvsp[-7].sval),ins_list((yyvsp[-5].sval),ins_list((yyvsp[-3].sval),(yyvsp[-1].llptr))));}
#line 5028 "vex_parse.tab.c"
    break;

  case 322: /* merged_datastream: T_MERGED_DATASTREAM '=' link_or_not ':' name_or_not ':' T_LINK ':' T_LINK ';'  */
#line 1059 "./vex_parse.y"
                        {(yyval.mdptr)=make_merged_datastream((yyvsp[-7].sval),(yyvsp[-5].sval),ins_list((yyvsp[-3].sval),add_list(NULL,(yyvsp[-1].sval))));}
#line 5034 "vex_parse.tab.c"
    break;

  case 323: /* eop_block: B_EOP ';' eop_defs  */
#line 1063 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 5040 "vex_parse.tab.c"
    break;

  case 324: /* eop_block: B_EOP ';'  */
#line 1064 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 5046 "vex_parse.tab.c"
    break;

  case 325: /* eop_defs: eop_defs eop_defx  */
#line 1066 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 5052 "vex_parse.tab.c"
    break;

  case 326: /* eop_defs: eop_defx  */
#line 1067 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 5058 "vex_parse.tab.c"
    break;

  case 327: /* eop_defx: eop_def  */
#line 1069 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 5064 "vex_parse.tab.c"
    break;

  case 328: /* eop_defx: T_COMMENT  */
#line 1070 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 5070 "vex_parse.tab.c"
    break;

  case 329: /* eop_defx: T_COMMENT_TRAILING  */
#line 1071 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 5076 "vex_parse.tab.c"
    break;

  case 330: /* eop_def: T_DEF T_NAME ';' eop_lowls T_ENDDEF ';'  */
#line 1073 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 5082 "vex_parse.tab.c"
    break;

  case 331: /* eop_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1075 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 5088 "vex_parse.tab.c"
    break;

  case 332: /* eop_lowls: eop_lowls eop_lowl  */
#line 1077 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 5094 "vex_parse.tab.c"
    break;

  case 333: /* eop_lowls: eop_lowl  */
#line 1078 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 5100 "vex_parse.tab.c"
    break;

  case 334: /* eop_lowl: tai_utc  */
#line 1080 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_TAI_UTC,(yyvsp[0].dvptr));}
#line 5106 "vex_parse.tab.c"
    break;

  case 335: /* eop_lowl: a1_tai  */
#line 1081 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_A1_TAI,(yyvsp[0].dvptr));}
#line 5112 "vex_parse.tab.c"
    break;

  case 336: /* eop_lowl: eop_ref_epoch  */
#line 1082 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_EOP_REF_EPOCH,(yyvsp[0].sval));}
#line 5118 "vex_parse.tab.c"
    break;

  case 337: /* eop_lowl: num_eop_points  */
#line 1083 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_NUM_EOP_POINTS,(yyvsp[0].dvptr));}
#line 5124 "vex_parse.tab.c"
    break;

  case 338: /* eop_lowl: eop_interval  */
#line 1084 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_EOP_INTERVAL,(yyvsp[0].dvptr));}
#line 5130 "vex_parse.tab.c"
    break;

  case 339: /* eop_lowl: ut1_utc  */
#line 1085 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_UT1_UTC,(yyvsp[0].llptr));}
#line 5136 "vex_parse.tab.c"
    break;

  case 340: /* eop_lowl: x_wobble  */
#line 1086 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_X_WOBBLE,(yyvsp[0].llptr));}
#line 5142 "vex_parse.tab.c"
    break;

  case 341: /* eop_lowl: y_wobble  */
#line 1087 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_Y_WOBBLE,(yyvsp[0].llptr));}
#line 5148 "vex_parse.tab.c"
    break;

  case 342: /* eop_lowl: nut_ref_epoch  */
#line 1088 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_NUT_REF_EPOCH,(yyvsp[0].sval));}
#line 5154 "vex_parse.tab.c"
    break;

  case 343: /* eop_lowl: num_nut_points  */
#line 1089 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_NUM_NUT_POINTS,(yyvsp[0].dvptr));}
#line 5160 "vex_parse.tab.c"
    break;

  case 344: /* eop_lowl: nut_interval  */
#line 1090 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_NUT_INTERVAL,(yyvsp[0].dvptr));}
#line 5166 "vex_parse.tab.c"
    break;

  case 345: /* eop_lowl: delta_psi  */
#line 1091 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DELTA_PSI,(yyvsp[0].llptr));}
#line 5172 "vex_parse.tab.c"
    break;

  case 346: /* eop_lowl: delta_eps  */
#line 1092 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DELTA_EPS,(yyvsp[0].llptr));}
#line 5178 "vex_parse.tab.c"
    break;

  case 347: /* eop_lowl: nut_model  */
#line 1093 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_NUT_MODEL,(yyvsp[0].sval));}
#line 5184 "vex_parse.tab.c"
    break;

  case 348: /* eop_lowl: eop_origin  */
#line 1094 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_EOP_ORIGIN,(yyvsp[0].eoptr));}
#line 5190 "vex_parse.tab.c"
    break;

  case 349: /* eop_lowl: delta_x_nut  */
#line 1095 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DELTA_X_NUT,(yyvsp[0].llptr));}
#line 5196 "vex_parse.tab.c"
    break;

  case 350: /* eop_lowl: delta_y_nut  */
#line 1096 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DELTA_Y_NUT,(yyvsp[0].llptr));}
#line 5202 "vex_parse.tab.c"
    break;

  case 351: /* eop_lowl: nut_origin  */
#line 1097 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_NUT_ORIGIN,(yyvsp[0].noptr));}
#line 5208 "vex_parse.tab.c"
    break;

  case 352: /* eop_lowl: external_ref  */
#line 1098 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 5214 "vex_parse.tab.c"
    break;

  case 353: /* eop_lowl: T_COMMENT  */
#line 1099 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 5220 "vex_parse.tab.c"
    break;

  case 354: /* eop_lowl: T_COMMENT_TRAILING  */
#line 1100 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 5226 "vex_parse.tab.c"
    break;

  case 355: /* tai_utc: T_TAI_UTC '=' unit_value ';'  */
#line 1102 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 5232 "vex_parse.tab.c"
    break;

  case 356: /* a1_tai: T_A1_TAI '=' unit_value ';'  */
#line 1104 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 5238 "vex_parse.tab.c"
    break;

  case 357: /* eop_ref_epoch: T_EOP_REF_EPOCH '=' T_NAME ';'  */
#line 1106 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5244 "vex_parse.tab.c"
    break;

  case 358: /* num_eop_points: T_NUM_EOP_POINTS '=' value ';'  */
#line 1108 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 5250 "vex_parse.tab.c"
    break;

  case 359: /* eop_interval: T_EOP_INTERVAL '=' unit_value ';'  */
#line 1110 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 5256 "vex_parse.tab.c"
    break;

  case 360: /* ut1_utc: T_UT1_UTC '=' unit_list ';'  */
#line 1112 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 5262 "vex_parse.tab.c"
    break;

  case 361: /* ut1_utc: T_UT1_UTC '=' ';'  */
#line 1113 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 5268 "vex_parse.tab.c"
    break;

  case 362: /* x_wobble: T_X_WOBBLE '=' unit_list ';'  */
#line 1115 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 5274 "vex_parse.tab.c"
    break;

  case 363: /* x_wobble: T_X_WOBBLE '=' ';'  */
#line 1116 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 5280 "vex_parse.tab.c"
    break;

  case 364: /* y_wobble: T_Y_WOBBLE '=' unit_list ';'  */
#line 1118 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 5286 "vex_parse.tab.c"
    break;

  case 365: /* y_wobble: T_Y_WOBBLE '=' ';'  */
#line 1119 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 5292 "vex_parse.tab.c"
    break;

  case 366: /* nut_ref_epoch: T_NUT_REF_EPOCH '=' T_NAME ';'  */
#line 1121 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5298 "vex_parse.tab.c"
    break;

  case 367: /* num_nut_points: T_NUM_NUT_POINTS '=' value ';'  */
#line 1123 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 5304 "vex_parse.tab.c"
    break;

  case 368: /* nut_interval: T_NUT_INTERVAL '=' unit_value ';'  */
#line 1125 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 5310 "vex_parse.tab.c"
    break;

  case 369: /* delta_psi: T_DELTA_PSI '=' unit_list ';'  */
#line 1127 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 5316 "vex_parse.tab.c"
    break;

  case 370: /* delta_psi: T_DELTA_PSI '=' ';'  */
#line 1128 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 5322 "vex_parse.tab.c"
    break;

  case 371: /* delta_eps: T_DELTA_EPS '=' unit_list ';'  */
#line 1130 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 5328 "vex_parse.tab.c"
    break;

  case 372: /* delta_eps: T_DELTA_EPS '=' ';'  */
#line 1131 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 5334 "vex_parse.tab.c"
    break;

  case 373: /* nut_model: T_NUT_MODEL '=' T_NAME ';'  */
#line 1133 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5340 "vex_parse.tab.c"
    break;

  case 374: /* eop_origin: T_EOP_ORIGIN '=' T_NAME ';'  */
#line 1136 "./vex_parse.y"
                {(yyval.eoptr)=make_eop_origin((yyvsp[-1].sval),NULL);}
#line 5346 "vex_parse.tab.c"
    break;

  case 375: /* eop_origin: T_EOP_ORIGIN '=' T_NAME ':' T_NAME ';'  */
#line 1138 "./vex_parse.y"
                {(yyval.eoptr)=make_eop_origin((yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 5352 "vex_parse.tab.c"
    break;

  case 376: /* delta_x_nut: T_DELTA_X_NUT '=' unit_list ';'  */
#line 1140 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 5358 "vex_parse.tab.c"
    break;

  case 377: /* delta_x_nut: T_DELTA_X_NUT '=' ';'  */
#line 1141 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 5364 "vex_parse.tab.c"
    break;

  case 378: /* delta_y_nut: T_DELTA_Y_NUT '=' unit_list ';'  */
#line 1143 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 5370 "vex_parse.tab.c"
    break;

  case 379: /* delta_y_nut: T_DELTA_Y_NUT '=' ';'  */
#line 1144 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 5376 "vex_parse.tab.c"
    break;

  case 380: /* nut_origin: T_NUT_ORIGIN '=' T_NAME ';'  */
#line 1147 "./vex_parse.y"
                {(yyval.noptr)=make_nut_origin((yyvsp[-1].sval),NULL);}
#line 5382 "vex_parse.tab.c"
    break;

  case 381: /* nut_origin: T_NUT_ORIGIN '=' T_NAME ':' T_NAME ';'  */
#line 1149 "./vex_parse.y"
                {(yyval.noptr)=make_nut_origin((yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 5388 "vex_parse.tab.c"
    break;

  case 382: /* exper_block: B_EXPER ';' exper_defs  */
#line 1153 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 5394 "vex_parse.tab.c"
    break;

  case 383: /* exper_block: B_EXPER ';'  */
#line 1154 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 5400 "vex_parse.tab.c"
    break;

  case 384: /* exper_defs: exper_defs exper_defx  */
#line 1156 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 5406 "vex_parse.tab.c"
    break;

  case 385: /* exper_defs: exper_defx  */
#line 1157 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 5412 "vex_parse.tab.c"
    break;

  case 386: /* exper_defx: exper_def  */
#line 1159 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 5418 "vex_parse.tab.c"
    break;

  case 387: /* exper_defx: T_COMMENT  */
#line 1160 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 5424 "vex_parse.tab.c"
    break;

  case 388: /* exper_defx: T_COMMENT_TRAILING  */
#line 1161 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 5430 "vex_parse.tab.c"
    break;

  case 389: /* exper_def: T_DEF T_NAME ';' exper_lowls T_ENDDEF ';'  */
#line 1164 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 5436 "vex_parse.tab.c"
    break;

  case 390: /* exper_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1165 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 5442 "vex_parse.tab.c"
    break;

  case 391: /* exper_lowls: exper_lowls exper_lowl  */
#line 1167 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 5448 "vex_parse.tab.c"
    break;

  case 392: /* exper_lowls: exper_lowl  */
#line 1168 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 5454 "vex_parse.tab.c"
    break;

  case 393: /* exper_lowl: exper_num  */
#line 1170 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_EXPER_NUM,(yyvsp[0].dvptr));}
#line 5460 "vex_parse.tab.c"
    break;

  case 394: /* exper_lowl: exper_name  */
#line 1171 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_EXPER_NAME,(yyvsp[0].enptr));}
#line 5466 "vex_parse.tab.c"
    break;

  case 395: /* exper_lowl: exper_description  */
#line 1172 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_EXPER_DESCRIPTION,(yyvsp[0].sval));}
#line 5472 "vex_parse.tab.c"
    break;

  case 396: /* exper_lowl: exper_nominal_start  */
#line 1174 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_EXPER_NOMINAL_START,(yyvsp[0].sval));}
#line 5478 "vex_parse.tab.c"
    break;

  case 397: /* exper_lowl: exper_nominal_stop  */
#line 1176 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_EXPER_NOMINAL_STOP,(yyvsp[0].sval));}
#line 5484 "vex_parse.tab.c"
    break;

  case 398: /* exper_lowl: pi_name  */
#line 1177 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_PI_NAME,(yyvsp[0].sval));}
#line 5490 "vex_parse.tab.c"
    break;

  case 399: /* exper_lowl: pi_email  */
#line 1178 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_PI_EMAIL,(yyvsp[0].sval));}
#line 5496 "vex_parse.tab.c"
    break;

  case 400: /* exper_lowl: contact_name  */
#line 1179 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_CONTACT_NAME,(yyvsp[0].sval));}
#line 5502 "vex_parse.tab.c"
    break;

  case 401: /* exper_lowl: contact_email  */
#line 1180 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_CONTACT_EMAIL,(yyvsp[0].sval));}
#line 5508 "vex_parse.tab.c"
    break;

  case 402: /* exper_lowl: scheduler_name  */
#line 1181 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SCHEDULER_NAME,(yyvsp[0].sval));}
#line 5514 "vex_parse.tab.c"
    break;

  case 403: /* exper_lowl: scheduler_email  */
#line 1182 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SCHEDULER_EMAIL,(yyvsp[0].sval));}
#line 5520 "vex_parse.tab.c"
    break;

  case 404: /* exper_lowl: target_correlator  */
#line 1184 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_TARGET_CORRELATOR,(yyvsp[0].sval));}
#line 5526 "vex_parse.tab.c"
    break;

  case 405: /* exper_lowl: scheduling_software  */
#line 1185 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SCHEDULING_SOFTWARE,(yyvsp[0].schsptr));}
#line 5532 "vex_parse.tab.c"
    break;

  case 406: /* exper_lowl: vex_file_writer  */
#line 1186 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_VEX_FILE_WRITER,(yyvsp[0].vfwptr));}
#line 5538 "vex_parse.tab.c"
    break;

  case 407: /* exper_lowl: external_ref  */
#line 1187 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 5544 "vex_parse.tab.c"
    break;

  case 408: /* exper_lowl: T_COMMENT  */
#line 1188 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 5550 "vex_parse.tab.c"
    break;

  case 409: /* exper_lowl: T_COMMENT_TRAILING  */
#line 1189 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 5556 "vex_parse.tab.c"
    break;

  case 410: /* exper_num: T_EXPER_NUM '=' value ';'  */
#line 1191 "./vex_parse.y"
                                          {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 5562 "vex_parse.tab.c"
    break;

  case 411: /* exper_name: T_EXPER_NAME '=' T_NAME ';'  */
#line 1194 "./vex_parse.y"
                {(yyval.enptr)=make_exper_name((yyvsp[-1].sval),NULL);}
#line 5568 "vex_parse.tab.c"
    break;

  case 412: /* exper_name: T_EXPER_NAME '=' T_NAME ':' T_NAME ';'  */
#line 1196 "./vex_parse.y"
                {(yyval.enptr)=make_exper_name((yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 5574 "vex_parse.tab.c"
    break;

  case 413: /* exper_description: T_EXPER_DESCRIPTION '=' T_NAME ';'  */
#line 1198 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5580 "vex_parse.tab.c"
    break;

  case 414: /* exper_nominal_start: T_EXPER_NOMINAL_START '=' T_NAME ';'  */
#line 1200 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5586 "vex_parse.tab.c"
    break;

  case 415: /* exper_nominal_stop: T_EXPER_NOMINAL_STOP '=' T_NAME ';'  */
#line 1202 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5592 "vex_parse.tab.c"
    break;

  case 416: /* pi_name: T_PI_NAME '=' T_NAME ';'  */
#line 1204 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5598 "vex_parse.tab.c"
    break;

  case 417: /* pi_email: T_PI_EMAIL '=' T_NAME ';'  */
#line 1206 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5604 "vex_parse.tab.c"
    break;

  case 418: /* contact_name: T_CONTACT_NAME '=' T_NAME ';'  */
#line 1208 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5610 "vex_parse.tab.c"
    break;

  case 419: /* contact_email: T_CONTACT_EMAIL '=' T_NAME ';'  */
#line 1210 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5616 "vex_parse.tab.c"
    break;

  case 420: /* scheduler_name: T_SCHEDULER_NAME '=' T_NAME ';'  */
#line 1212 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5622 "vex_parse.tab.c"
    break;

  case 421: /* scheduler_email: T_SCHEDULER_EMAIL '=' T_NAME ';'  */
#line 1214 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5628 "vex_parse.tab.c"
    break;

  case 422: /* target_correlator: T_TARGET_CORRELATOR '=' T_NAME ';'  */
#line 1216 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 5634 "vex_parse.tab.c"
    break;

  case 423: /* scheduling_software: T_SCHEDULING_SOFTWARE '=' T_NAME ';'  */
#line 1219 "./vex_parse.y"
                        {(yyval.schsptr)=make_scheduling_software((yyvsp[-1].sval),NULL,NULL);}
#line 5640 "vex_parse.tab.c"
    break;

  case 424: /* scheduling_software: T_SCHEDULING_SOFTWARE '=' T_NAME ':' T_NAME ';'  */
#line 1221 "./vex_parse.y"
                        {(yyval.schsptr)=make_scheduling_software((yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 5646 "vex_parse.tab.c"
    break;

  case 425: /* scheduling_software: T_SCHEDULING_SOFTWARE '=' T_NAME ':' T_NAME ':' T_NAME ';'  */
#line 1223 "./vex_parse.y"
                        {(yyval.schsptr)=make_scheduling_software((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 5652 "vex_parse.tab.c"
    break;

  case 426: /* scheduling_software: T_SCHEDULING_SOFTWARE '=' T_NAME ':' ':' T_NAME ';'  */
#line 1225 "./vex_parse.y"
                        {(yyval.schsptr)=make_scheduling_software((yyvsp[-4].sval),NULL,(yyvsp[-1].sval));}
#line 5658 "vex_parse.tab.c"
    break;

  case 427: /* vex_file_writer: T_VEX_FILE_WRITER '=' T_NAME ';'  */
#line 1228 "./vex_parse.y"
                        {(yyval.vfwptr)=make_vex_file_writer((yyvsp[-1].sval),NULL,NULL);}
#line 5664 "vex_parse.tab.c"
    break;

  case 428: /* vex_file_writer: T_VEX_FILE_WRITER '=' T_NAME ':' T_NAME ';'  */
#line 1230 "./vex_parse.y"
                        {(yyval.vfwptr)=make_vex_file_writer((yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 5670 "vex_parse.tab.c"
    break;

  case 429: /* vex_file_writer: T_VEX_FILE_WRITER '=' T_NAME ':' T_NAME ':' T_NAME ';'  */
#line 1232 "./vex_parse.y"
                        {(yyval.vfwptr)=make_vex_file_writer((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 5676 "vex_parse.tab.c"
    break;

  case 430: /* vex_file_writer: T_VEX_FILE_WRITER '=' T_NAME ':' ':' T_NAME ';'  */
#line 1234 "./vex_parse.y"
                        {(yyval.vfwptr)=make_vex_file_writer((yyvsp[-4].sval),NULL,(yyvsp[-1].sval));}
#line 5682 "vex_parse.tab.c"
    break;

  case 431: /* extensions_block: B_EXTENSIONS ';' extensions_defs  */
#line 1239 "./vex_parse.y"
                                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 5688 "vex_parse.tab.c"
    break;

  case 432: /* extensions_block: B_EXTENSIONS ';'  */
#line 1240 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 5694 "vex_parse.tab.c"
    break;

  case 433: /* extensions_defs: extensions_defs extensions_defx  */
#line 1242 "./vex_parse.y"
                                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 5700 "vex_parse.tab.c"
    break;

  case 434: /* extensions_defs: extensions_defx  */
#line 1243 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 5706 "vex_parse.tab.c"
    break;

  case 435: /* extensions_defx: extensions_def  */
#line 1245 "./vex_parse.y"
                                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 5712 "vex_parse.tab.c"
    break;

  case 436: /* extensions_defx: T_COMMENT  */
#line 1246 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 5718 "vex_parse.tab.c"
    break;

  case 437: /* extensions_defx: T_COMMENT_TRAILING  */
#line 1247 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 5724 "vex_parse.tab.c"
    break;

  case 438: /* extensions_def: T_DEF T_NAME ';' extensions_lowls T_ENDDEF ';'  */
#line 1249 "./vex_parse.y"
                                                               {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 5730 "vex_parse.tab.c"
    break;

  case 439: /* extensions_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1251 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 5736 "vex_parse.tab.c"
    break;

  case 440: /* extensions_lowls: extensions_lowls extensions_lowl  */
#line 1253 "./vex_parse.y"
                                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 5742 "vex_parse.tab.c"
    break;

  case 441: /* extensions_lowls: extensions_lowl  */
#line 1254 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 5748 "vex_parse.tab.c"
    break;

  case 442: /* extensions_lowl: extension  */
#line 1256 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_EXTENSION,(yyvsp[0].etptr));}
#line 5754 "vex_parse.tab.c"
    break;

  case 443: /* extensions_lowl: external_ref  */
#line 1257 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 5760 "vex_parse.tab.c"
    break;

  case 444: /* extensions_lowl: T_COMMENT  */
#line 1258 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 5766 "vex_parse.tab.c"
    break;

  case 445: /* extensions_lowl: T_COMMENT_TRAILING  */
#line 1259 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 5772 "vex_parse.tab.c"
    break;

  case 446: /* extension: T_EXTENSION '=' T_NAME ':' T_NAME ':' unit_more ';'  */
#line 1262 "./vex_parse.y"
                {(yyval.etptr)=make_extension((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].llptr));}
#line 5778 "vex_parse.tab.c"
    break;

  case 447: /* freq_block: B_FREQ ';' freq_defs  */
#line 1267 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 5784 "vex_parse.tab.c"
    break;

  case 448: /* freq_block: B_FREQ ';'  */
#line 1268 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 5790 "vex_parse.tab.c"
    break;

  case 449: /* freq_defs: freq_defs freq_defx  */
#line 1270 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 5796 "vex_parse.tab.c"
    break;

  case 450: /* freq_defs: freq_defx  */
#line 1271 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 5802 "vex_parse.tab.c"
    break;

  case 451: /* freq_defx: freq_def  */
#line 1273 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 5808 "vex_parse.tab.c"
    break;

  case 452: /* freq_defx: T_COMMENT  */
#line 1274 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 5814 "vex_parse.tab.c"
    break;

  case 453: /* freq_defx: T_COMMENT_TRAILING  */
#line 1275 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 5820 "vex_parse.tab.c"
    break;

  case 454: /* freq_def: T_DEF T_NAME ';' freq_lowls T_ENDDEF ';'  */
#line 1277 "./vex_parse.y"
                                                         {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 5826 "vex_parse.tab.c"
    break;

  case 455: /* freq_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1279 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 5832 "vex_parse.tab.c"
    break;

  case 456: /* freq_lowls: freq_lowls freq_lowl  */
#line 1281 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 5838 "vex_parse.tab.c"
    break;

  case 457: /* freq_lowls: freq_lowl  */
#line 1282 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 5844 "vex_parse.tab.c"
    break;

  case 458: /* freq_lowl: chan_def  */
#line 1284 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_CHAN_DEF,(yyvsp[0].cdptr));}
#line 5850 "vex_parse.tab.c"
    break;

  case 459: /* freq_lowl: sample_rate  */
#line 1285 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SAMPLE_RATE,(yyvsp[0].dvptr));}
#line 5856 "vex_parse.tab.c"
    break;

  case 460: /* freq_lowl: bits_per_sample  */
#line 1286 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_BITS_PER_SAMPLE,(yyvsp[0].dvptr));}
#line 5862 "vex_parse.tab.c"
    break;

  case 461: /* freq_lowl: switching_cycle  */
#line 1287 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SWITCHING_CYCLE,(yyvsp[0].scptr));}
#line 5868 "vex_parse.tab.c"
    break;

  case 462: /* freq_lowl: external_ref  */
#line 1288 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 5874 "vex_parse.tab.c"
    break;

  case 463: /* freq_lowl: T_COMMENT  */
#line 1289 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 5880 "vex_parse.tab.c"
    break;

  case 464: /* freq_lowl: T_COMMENT_TRAILING  */
#line 1290 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 5886 "vex_parse.tab.c"
    break;

  case 465: /* chan_def: T_CHAN_DEF '=' link_or_not ':' unit_value ':' T_NAME ':' unit_value ':' link_or_not ':' T_LINK ';'  */
#line 1298 "./vex_parse.y"
                {(yyval.cdptr)=make_chan_def((yyvsp[-11].sval),(yyvsp[-9].dvptr),(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].sval),(yyvsp[-1].sval),NULL,NULL);}
#line 5892 "vex_parse.tab.c"
    break;

  case 466: /* chan_def: T_CHAN_DEF '=' link_or_not ':' unit_value ':' T_NAME ':' unit_value ':' link_or_not ':' T_LINK ':' link_or_not ';'  */
#line 1306 "./vex_parse.y"
                {(yyval.cdptr)=make_chan_def((yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 5898 "vex_parse.tab.c"
    break;

  case 467: /* chan_def: T_CHAN_DEF '=' link_or_not ':' unit_value ':' T_NAME ':' unit_value ':' link_or_not ':' T_LINK ':' link_or_not switch_states ';'  */
#line 1316 "./vex_parse.y"
                {(yyval.cdptr)=make_chan_def((yyvsp[-14].sval),(yyvsp[-12].dvptr),(yyvsp[-10].sval),(yyvsp[-8].dvptr),(yyvsp[-6].sval),(yyvsp[-4].sval),(yyvsp[-2].sval),(yyvsp[-1].llptr));}
#line 5904 "vex_parse.tab.c"
    break;

  case 468: /* chan_def: T_CHAN_DEF '=' link_or_not ':' unit_value ':' T_NAME ':' unit_value ':' link_or_not ':' T_LINK ':' link_or_not ':' switch_states ';'  */
#line 1326 "./vex_parse.y"
                {(yyval.cdptr)=make_chan_def((yyvsp[-15].sval),(yyvsp[-13].dvptr),(yyvsp[-11].sval),(yyvsp[-9].dvptr),(yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].sval),ins_list(make_dvalue(NULL,NULL),(yyvsp[-1].llptr)));}
#line 5910 "vex_parse.tab.c"
    break;

  case 469: /* switch_states: switch_states switch_state  */
#line 1328 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].dvptr));}
#line 5916 "vex_parse.tab.c"
    break;

  case 470: /* switch_states: switch_state  */
#line 1329 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].dvptr));}
#line 5922 "vex_parse.tab.c"
    break;

  case 471: /* switch_state: ':' value  */
#line 1331 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[0].dvptr);}
#line 5928 "vex_parse.tab.c"
    break;

  case 472: /* sample_rate: T_SAMPLE_RATE '=' unit_value ';'  */
#line 1333 "./vex_parse.y"
                                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 5934 "vex_parse.tab.c"
    break;

  case 473: /* bits_per_sample: T_BITS_PER_SAMPLE '=' value ';'  */
#line 1335 "./vex_parse.y"
                                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 5940 "vex_parse.tab.c"
    break;

  case 474: /* switching_cycle: T_SWITCHING_CYCLE '=' T_NAME ':' unit_list ';'  */
#line 1338 "./vex_parse.y"
                                {(yyval.scptr)=make_switching_cycle((yyvsp[-3].sval),(yyvsp[-1].llptr));}
#line 5946 "vex_parse.tab.c"
    break;

  case 475: /* head_pos_block: B_HEAD_POS ';' head_pos_defs  */
#line 1342 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 5952 "vex_parse.tab.c"
    break;

  case 476: /* head_pos_block: B_HEAD_POS ';'  */
#line 1343 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 5958 "vex_parse.tab.c"
    break;

  case 477: /* head_pos_defs: head_pos_defs head_pos_defx  */
#line 1345 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 5964 "vex_parse.tab.c"
    break;

  case 478: /* head_pos_defs: head_pos_defx  */
#line 1346 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 5970 "vex_parse.tab.c"
    break;

  case 479: /* head_pos_defx: head_pos_def  */
#line 1348 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 5976 "vex_parse.tab.c"
    break;

  case 480: /* head_pos_defx: T_COMMENT  */
#line 1349 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 5982 "vex_parse.tab.c"
    break;

  case 481: /* head_pos_defx: T_COMMENT_TRAILING  */
#line 1350 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 5988 "vex_parse.tab.c"
    break;

  case 482: /* head_pos_def: T_DEF T_NAME ';' head_pos_lowls T_ENDDEF ';'  */
#line 1353 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 5994 "vex_parse.tab.c"
    break;

  case 483: /* head_pos_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1355 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 6000 "vex_parse.tab.c"
    break;

  case 484: /* head_pos_lowls: head_pos_lowls head_pos_lowl  */
#line 1357 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6006 "vex_parse.tab.c"
    break;

  case 485: /* head_pos_lowls: head_pos_lowl  */
#line 1358 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6012 "vex_parse.tab.c"
    break;

  case 486: /* head_pos_lowl: headstack_pos  */
#line 1360 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_HEADSTACK_POS,(yyvsp[0].hpptr));}
#line 6018 "vex_parse.tab.c"
    break;

  case 487: /* head_pos_lowl: external_ref  */
#line 1361 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 6024 "vex_parse.tab.c"
    break;

  case 488: /* head_pos_lowl: T_COMMENT  */
#line 1362 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6030 "vex_parse.tab.c"
    break;

  case 489: /* head_pos_lowl: T_COMMENT_TRAILING  */
#line 1363 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6036 "vex_parse.tab.c"
    break;

  case 490: /* headstack_pos: T_HEADSTACK_POS '=' value ':' unit_list ';'  */
#line 1366 "./vex_parse.y"
                                        {(yyval.hpptr)=make_headstack_pos((yyvsp[-3].dvptr),(yyvsp[-1].llptr));}
#line 6042 "vex_parse.tab.c"
    break;

  case 491: /* if_block: B_IF ';' if_defs  */
#line 1370 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 6048 "vex_parse.tab.c"
    break;

  case 492: /* if_block: B_IF ';'  */
#line 1371 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 6054 "vex_parse.tab.c"
    break;

  case 493: /* if_defs: if_defs if_defx  */
#line 1373 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6060 "vex_parse.tab.c"
    break;

  case 494: /* if_defs: if_defx  */
#line 1374 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6066 "vex_parse.tab.c"
    break;

  case 495: /* if_defx: if_def  */
#line 1376 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 6072 "vex_parse.tab.c"
    break;

  case 496: /* if_defx: T_COMMENT  */
#line 1377 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6078 "vex_parse.tab.c"
    break;

  case 497: /* if_defx: T_COMMENT_TRAILING  */
#line 1378 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6084 "vex_parse.tab.c"
    break;

  case 498: /* if_def: T_DEF T_NAME ';' if_lowls T_ENDDEF ';'  */
#line 1380 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 6090 "vex_parse.tab.c"
    break;

  case 499: /* if_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1382 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 6096 "vex_parse.tab.c"
    break;

  case 500: /* if_lowls: if_lowls if_lowl  */
#line 1384 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6102 "vex_parse.tab.c"
    break;

  case 501: /* if_lowls: if_lowl  */
#line 1385 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6108 "vex_parse.tab.c"
    break;

  case 502: /* if_lowl: if_def_st  */
#line 1387 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_IF_DEF,(yyvsp[0].ifptr));}
#line 6114 "vex_parse.tab.c"
    break;

  case 503: /* if_lowl: receiver_name  */
#line 1388 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_RECEIVER_NAME,(yyvsp[0].rnptr));}
#line 6120 "vex_parse.tab.c"
    break;

  case 504: /* if_lowl: sub_lo_frequencies  */
#line 1389 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SUB_LO_FREQUENCIES,(yyvsp[0].sfptr));}
#line 6126 "vex_parse.tab.c"
    break;

  case 505: /* if_lowl: sub_lo_sidebands  */
#line 1390 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SUB_LO_SIDEBANDS,(yyvsp[0].sbptr));}
#line 6132 "vex_parse.tab.c"
    break;

  case 506: /* if_lowl: switched_power  */
#line 1391 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SWITCHED_POWER,(yyvsp[0].swptr));}
#line 6138 "vex_parse.tab.c"
    break;

  case 507: /* if_lowl: external_ref  */
#line 1392 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 6144 "vex_parse.tab.c"
    break;

  case 508: /* if_lowl: T_COMMENT  */
#line 1393 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6150 "vex_parse.tab.c"
    break;

  case 509: /* if_lowl: T_COMMENT_TRAILING  */
#line 1394 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6156 "vex_parse.tab.c"
    break;

  case 510: /* if_def_st: T_IF_DEF '=' T_LINK ':' T_NAME ':' T_NAME ':' unit_value ':' T_NAME ':' unit_value ':' unit_value ';'  */
#line 1397 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-13].sval),(yyvsp[-11].sval),(yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL);}
#line 6162 "vex_parse.tab.c"
    break;

  case 511: /* if_def_st: T_IF_DEF '=' T_LINK ':' T_NAME ':' T_NAME ':' unit_value ':' T_NAME ':' unit_value ':' ';'  */
#line 1399 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-12].sval),(yyvsp[-10].sval),(yyvsp[-8].sval),(yyvsp[-6].dvptr),(yyvsp[-4].sval),(yyvsp[-2].dvptr),NULL,NULL);}
#line 6168 "vex_parse.tab.c"
    break;

  case 512: /* if_def_st: T_IF_DEF '=' T_LINK ':' T_NAME ':' T_NAME ':' unit_value ':' T_NAME ';'  */
#line 1401 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-9].sval),(yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].sval),NULL,NULL,NULL);}
#line 6174 "vex_parse.tab.c"
    break;

  case 513: /* if_def_st: T_IF_DEF '=' T_LINK ':' T_NAME ':' T_NAME ':' unit_value ':' T_NAME ':' ':' ';'  */
#line 1403 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-11].sval),(yyvsp[-9].sval),(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].sval),NULL,NULL,NULL);}
#line 6180 "vex_parse.tab.c"
    break;

  case 514: /* if_def_st: T_IF_DEF '=' T_LINK ':' T_NAME ':' T_NAME ':' unit_value ':' T_NAME ':' ';'  */
#line 1405 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-10].sval),(yyvsp[-8].sval),(yyvsp[-6].sval),(yyvsp[-4].dvptr),(yyvsp[-2].sval),NULL,NULL,NULL);}
#line 6186 "vex_parse.tab.c"
    break;

  case 515: /* if_def_st: T_IF_DEF '=' T_LINK ':' T_NAME ':' T_NAME ':' unit_value ':' T_NAME ':' unit_value ';'  */
#line 1407 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-11].sval),(yyvsp[-9].sval),(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].sval),(yyvsp[-1].dvptr),NULL,NULL);}
#line 6192 "vex_parse.tab.c"
    break;

  case 516: /* if_def_st: T_IF_DEF '=' T_LINK ':' ':' T_NAME ':' unit_value ':' T_NAME ':' unit_value ':' unit_value ';'  */
#line 1409 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-12].sval),NULL,(yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL);}
#line 6198 "vex_parse.tab.c"
    break;

  case 517: /* if_def_st: T_IF_DEF '=' T_LINK ':' ':' T_NAME ':' unit_value ':' T_NAME ':' unit_value ':' ';'  */
#line 1411 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-11].sval),NULL,(yyvsp[-8].sval),(yyvsp[-6].dvptr),(yyvsp[-4].sval),(yyvsp[-2].dvptr),NULL,NULL);}
#line 6204 "vex_parse.tab.c"
    break;

  case 518: /* if_def_st: T_IF_DEF '=' T_LINK ':' ':' T_NAME ':' unit_value ':' T_NAME ';'  */
#line 1413 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-8].sval),NULL,(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].sval),NULL,NULL,NULL);}
#line 6210 "vex_parse.tab.c"
    break;

  case 519: /* if_def_st: T_IF_DEF '=' T_LINK ':' ':' T_NAME ':' unit_value ':' T_NAME ':' ':' ';'  */
#line 1415 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-10].sval),NULL,(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].sval),NULL,NULL,NULL);}
#line 6216 "vex_parse.tab.c"
    break;

  case 520: /* if_def_st: T_IF_DEF '=' T_LINK ':' ':' T_NAME ':' unit_value ':' T_NAME ':' ';'  */
#line 1417 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-9].sval),NULL,(yyvsp[-6].sval),(yyvsp[-4].dvptr),(yyvsp[-2].sval),NULL,NULL,NULL);}
#line 6222 "vex_parse.tab.c"
    break;

  case 521: /* if_def_st: T_IF_DEF '=' T_LINK ':' ':' T_NAME ':' unit_value ':' T_NAME ':' unit_value ';'  */
#line 1419 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-10].sval),NULL,(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].sval),(yyvsp[-1].dvptr),NULL,NULL);}
#line 6228 "vex_parse.tab.c"
    break;

  case 522: /* if_def_st: T_IF_DEF '=' T_LINK ':' ':' T_NAME ':' unit_value ':' T_NAME ':' unit_value ':' unit_value ':' unit_value ';'  */
#line 1421 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-14].sval),NULL,(yyvsp[-11].sval),(yyvsp[-9].dvptr),(yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 6234 "vex_parse.tab.c"
    break;

  case 523: /* if_def_st: T_IF_DEF '=' T_LINK ':' ':' T_NAME ':' unit_value ':' T_NAME ':' ':' ':' unit_value ';'  */
#line 1423 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-12].sval),NULL,(yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].sval),NULL,NULL,(yyvsp[-1].dvptr));}
#line 6240 "vex_parse.tab.c"
    break;

  case 524: /* if_def_st: T_IF_DEF '=' T_LINK ':' ':' T_NAME ':' unit_value ':' T_NAME ':' unit_value ':' ':' unit_value ';'  */
#line 1425 "./vex_parse.y"
                        {(yyval.ifptr)=make_if_def((yyvsp[-13].sval),NULL,(yyvsp[-10].sval),(yyvsp[-8].dvptr),(yyvsp[-6].sval),(yyvsp[-4].dvptr),NULL,(yyvsp[-1].dvptr));}
#line 6246 "vex_parse.tab.c"
    break;

  case 525: /* receiver_name: T_RECEIVER_NAME '=' T_LINK ':' T_NAME ';'  */
#line 1428 "./vex_parse.y"
                {(yyval.rnptr)=make_receiver_name((yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 6252 "vex_parse.tab.c"
    break;

  case 526: /* sub_lo_frequencies: T_SUB_LO_FREQUENCIES '=' T_LINK ':' unit_list ';'  */
#line 1431 "./vex_parse.y"
                {(yyval.sfptr)=make_sub_lo_frequencies((yyvsp[-3].sval),(yyvsp[-1].llptr));}
#line 6258 "vex_parse.tab.c"
    break;

  case 527: /* sub_lo_sidebands: T_SUB_LO_SIDEBANDS '=' T_LINK ':' name_list ';'  */
#line 1434 "./vex_parse.y"
                {(yyval.sbptr)=make_sub_lo_sidebands((yyvsp[-3].sval),(yyvsp[-1].llptr));}
#line 6264 "vex_parse.tab.c"
    break;

  case 528: /* switched_power: T_SWITCHED_POWER '=' T_LINK ':' T_NAME ':' unit_value ';'  */
#line 1437 "./vex_parse.y"
                {(yyval.swptr)=make_switched_power((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 6270 "vex_parse.tab.c"
    break;

  case 529: /* switched_power: T_SWITCHED_POWER '=' T_LINK ':' T_NAME ';'  */
#line 1439 "./vex_parse.y"
                {(yyval.swptr)=make_switched_power((yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 6276 "vex_parse.tab.c"
    break;

  case 530: /* pass_order_block: B_PASS_ORDER ';' pass_order_defs  */
#line 1443 "./vex_parse.y"
                                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 6282 "vex_parse.tab.c"
    break;

  case 531: /* pass_order_block: B_PASS_ORDER ';'  */
#line 1444 "./vex_parse.y"
                                                                {(yyval.llptr)=NULL;}
#line 6288 "vex_parse.tab.c"
    break;

  case 532: /* pass_order_defs: pass_order_defs pass_order_defx  */
#line 1446 "./vex_parse.y"
                                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6294 "vex_parse.tab.c"
    break;

  case 533: /* pass_order_defs: pass_order_defx  */
#line 1448 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6300 "vex_parse.tab.c"
    break;

  case 534: /* pass_order_defx: pass_order_def  */
#line 1450 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 6306 "vex_parse.tab.c"
    break;

  case 535: /* pass_order_defx: T_COMMENT  */
#line 1451 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6312 "vex_parse.tab.c"
    break;

  case 536: /* pass_order_defx: T_COMMENT_TRAILING  */
#line 1452 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6318 "vex_parse.tab.c"
    break;

  case 537: /* pass_order_def: T_DEF T_NAME ';' pass_order_lowls T_ENDDEF ';'  */
#line 1455 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 6324 "vex_parse.tab.c"
    break;

  case 538: /* pass_order_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1457 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 6330 "vex_parse.tab.c"
    break;

  case 539: /* pass_order_lowls: pass_order_lowls pass_order_lowl  */
#line 1460 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6336 "vex_parse.tab.c"
    break;

  case 540: /* pass_order_lowls: pass_order_lowl  */
#line 1461 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6342 "vex_parse.tab.c"
    break;

  case 541: /* pass_order_lowl: pass_order  */
#line 1463 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_PASS_ORDER,(yyvsp[0].llptr));}
#line 6348 "vex_parse.tab.c"
    break;

  case 542: /* pass_order_lowl: s2_group_order  */
#line 1465 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_S2_GROUP_ORDER,(yyvsp[0].llptr));}
#line 6354 "vex_parse.tab.c"
    break;

  case 543: /* pass_order_lowl: external_ref  */
#line 1466 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 6360 "vex_parse.tab.c"
    break;

  case 544: /* pass_order_lowl: T_COMMENT  */
#line 1467 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6366 "vex_parse.tab.c"
    break;

  case 545: /* pass_order_lowl: T_COMMENT_TRAILING  */
#line 1468 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6372 "vex_parse.tab.c"
    break;

  case 546: /* pass_order: T_PASS_ORDER '=' name_list ';'  */
#line 1470 "./vex_parse.y"
                                               {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 6378 "vex_parse.tab.c"
    break;

  case 547: /* s2_group_order: T_S2_GROUP_ORDER '=' value_list ';'  */
#line 1472 "./vex_parse.y"
                                                    {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 6384 "vex_parse.tab.c"
    break;

  case 548: /* phase_cal_detect_block: B_PHASE_CAL_DETECT ';' phase_cal_detect_defs  */
#line 1476 "./vex_parse.y"
                                                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 6390 "vex_parse.tab.c"
    break;

  case 549: /* phase_cal_detect_block: B_PHASE_CAL_DETECT ';'  */
#line 1477 "./vex_parse.y"
                                                                {(yyval.llptr)=NULL;}
#line 6396 "vex_parse.tab.c"
    break;

  case 550: /* phase_cal_detect_defs: phase_cal_detect_defs phase_cal_detect_defx  */
#line 1480 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6402 "vex_parse.tab.c"
    break;

  case 551: /* phase_cal_detect_defs: phase_cal_detect_defx  */
#line 1481 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6408 "vex_parse.tab.c"
    break;

  case 552: /* phase_cal_detect_defx: phase_cal_detect_def  */
#line 1483 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 6414 "vex_parse.tab.c"
    break;

  case 553: /* phase_cal_detect_defx: T_COMMENT  */
#line 1484 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6420 "vex_parse.tab.c"
    break;

  case 554: /* phase_cal_detect_defx: T_COMMENT_TRAILING  */
#line 1485 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6426 "vex_parse.tab.c"
    break;

  case 555: /* phase_cal_detect_def: T_DEF T_NAME ';' phase_cal_detect_lowls T_ENDDEF ';'  */
#line 1488 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 6432 "vex_parse.tab.c"
    break;

  case 556: /* phase_cal_detect_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1489 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 6438 "vex_parse.tab.c"
    break;

  case 557: /* phase_cal_detect_lowls: phase_cal_detect_lowls phase_cal_detect_lowl  */
#line 1492 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6444 "vex_parse.tab.c"
    break;

  case 558: /* phase_cal_detect_lowls: phase_cal_detect_lowl  */
#line 1493 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6450 "vex_parse.tab.c"
    break;

  case 559: /* phase_cal_detect_lowl: phase_cal_detect  */
#line 1495 "./vex_parse.y"
                                         {(yyval.lwptr)=make_lowl(T_PHASE_CAL_DETECT,(yyvsp[0].pdptr));}
#line 6456 "vex_parse.tab.c"
    break;

  case 560: /* phase_cal_detect_lowl: external_ref  */
#line 1496 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 6462 "vex_parse.tab.c"
    break;

  case 561: /* phase_cal_detect_lowl: T_COMMENT  */
#line 1497 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6468 "vex_parse.tab.c"
    break;

  case 562: /* phase_cal_detect_lowl: T_COMMENT_TRAILING  */
#line 1498 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6474 "vex_parse.tab.c"
    break;

  case 563: /* phase_cal_detect: T_PHASE_CAL_DETECT '=' T_LINK ':' value_list ';'  */
#line 1501 "./vex_parse.y"
                {(yyval.pdptr)=make_phase_cal_detect((yyvsp[-3].sval),(yyvsp[-1].llptr));}
#line 6480 "vex_parse.tab.c"
    break;

  case 564: /* phase_cal_detect: T_PHASE_CAL_DETECT '=' T_LINK ';'  */
#line 1503 "./vex_parse.y"
                {(yyval.pdptr)=make_phase_cal_detect((yyvsp[-1].sval),NULL);}
#line 6486 "vex_parse.tab.c"
    break;

  case 565: /* procedures_block: B_PROCEDURES ';' procedures_defs  */
#line 1507 "./vex_parse.y"
                                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 6492 "vex_parse.tab.c"
    break;

  case 566: /* procedures_block: B_PROCEDURES ';'  */
#line 1508 "./vex_parse.y"
                                                                {(yyval.llptr)=NULL;}
#line 6498 "vex_parse.tab.c"
    break;

  case 567: /* procedures_defs: procedures_defs procedures_defx  */
#line 1511 "./vex_parse.y"
                                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6504 "vex_parse.tab.c"
    break;

  case 568: /* procedures_defs: procedures_defx  */
#line 1512 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6510 "vex_parse.tab.c"
    break;

  case 569: /* procedures_defx: procedures_def  */
#line 1514 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 6516 "vex_parse.tab.c"
    break;

  case 570: /* procedures_defx: T_COMMENT  */
#line 1515 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6522 "vex_parse.tab.c"
    break;

  case 571: /* procedures_defx: T_COMMENT_TRAILING  */
#line 1516 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6528 "vex_parse.tab.c"
    break;

  case 572: /* procedures_def: T_DEF T_NAME ';' procedures_lowls T_ENDDEF ';'  */
#line 1519 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 6534 "vex_parse.tab.c"
    break;

  case 573: /* procedures_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1521 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 6540 "vex_parse.tab.c"
    break;

  case 574: /* procedures_lowls: procedures_lowls procedures_lowl  */
#line 1524 "./vex_parse.y"
                                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6546 "vex_parse.tab.c"
    break;

  case 575: /* procedures_lowls: procedures_lowl  */
#line 1525 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6552 "vex_parse.tab.c"
    break;

  case 576: /* procedures_lowl: tape_change  */
#line 1528 "./vex_parse.y"
                                 {(yyval.lwptr)=make_lowl(T_TAPE_CHANGE,(yyvsp[0].dvptr));}
#line 6558 "vex_parse.tab.c"
    break;

  case 577: /* procedures_lowl: headstack_motion  */
#line 1530 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_HEADSTACK_MOTION,(yyvsp[0].dvptr));}
#line 6564 "vex_parse.tab.c"
    break;

  case 578: /* procedures_lowl: new_source_command  */
#line 1532 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_NEW_SOURCE_COMMAND,(yyvsp[0].dvptr));}
#line 6570 "vex_parse.tab.c"
    break;

  case 579: /* procedures_lowl: new_tape_setup  */
#line 1534 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_NEW_TAPE_SETUP,(yyvsp[0].dvptr));}
#line 6576 "vex_parse.tab.c"
    break;

  case 580: /* procedures_lowl: setup_always  */
#line 1536 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_SETUP_ALWAYS,(yyvsp[0].saptr));}
#line 6582 "vex_parse.tab.c"
    break;

  case 581: /* procedures_lowl: parity_check  */
#line 1538 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_PARITY_CHECK,(yyvsp[0].pcptr));}
#line 6588 "vex_parse.tab.c"
    break;

  case 582: /* procedures_lowl: tape_prepass  */
#line 1540 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_TAPE_PREPASS,(yyvsp[0].tpptr));}
#line 6594 "vex_parse.tab.c"
    break;

  case 583: /* procedures_lowl: preob_cal  */
#line 1542 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_PREOB_CAL,(yyvsp[0].prptr));}
#line 6600 "vex_parse.tab.c"
    break;

  case 584: /* procedures_lowl: midob_cal  */
#line 1544 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_MIDOB_CAL,(yyvsp[0].miptr));}
#line 6606 "vex_parse.tab.c"
    break;

  case 585: /* procedures_lowl: postob_cal  */
#line 1546 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_POSTOB_CAL,(yyvsp[0].poptr));}
#line 6612 "vex_parse.tab.c"
    break;

  case 586: /* procedures_lowl: procedure_name_prefix  */
#line 1548 "./vex_parse.y"
                                 {(yyval.lwptr)=make_lowl(T_PROCEDURE_NAME_PREFIX,(yyvsp[0].sval));}
#line 6618 "vex_parse.tab.c"
    break;

  case 587: /* procedures_lowl: external_ref  */
#line 1549 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 6624 "vex_parse.tab.c"
    break;

  case 588: /* procedures_lowl: T_COMMENT  */
#line 1550 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6630 "vex_parse.tab.c"
    break;

  case 589: /* procedures_lowl: T_COMMENT_TRAILING  */
#line 1551 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6636 "vex_parse.tab.c"
    break;

  case 590: /* tape_change: T_TAPE_CHANGE '=' unit_value ';'  */
#line 1553 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 6642 "vex_parse.tab.c"
    break;

  case 591: /* headstack_motion: T_HEADSTACK_MOTION '=' unit_value ';'  */
#line 1555 "./vex_parse.y"
                                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 6648 "vex_parse.tab.c"
    break;

  case 592: /* new_source_command: T_NEW_SOURCE_COMMAND '=' unit_value ';'  */
#line 1557 "./vex_parse.y"
                                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 6654 "vex_parse.tab.c"
    break;

  case 593: /* new_tape_setup: T_NEW_TAPE_SETUP '=' unit_value ';'  */
#line 1559 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 6660 "vex_parse.tab.c"
    break;

  case 594: /* setup_always: T_SETUP_ALWAYS '=' name_value ':' unit_value ';'  */
#line 1562 "./vex_parse.y"
                {(yyval.saptr)=make_setup_always((yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 6666 "vex_parse.tab.c"
    break;

  case 595: /* parity_check: T_PARITY_CHECK '=' name_value ':' unit_value ';'  */
#line 1565 "./vex_parse.y"
                {(yyval.pcptr)=make_parity_check((yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 6672 "vex_parse.tab.c"
    break;

  case 596: /* tape_prepass: T_TAPE_PREPASS '=' name_value ':' unit_value ';'  */
#line 1568 "./vex_parse.y"
                {(yyval.tpptr)=make_tape_prepass((yyvsp[-3].sval),(yyvsp[-1].dvptr));}
#line 6678 "vex_parse.tab.c"
    break;

  case 597: /* preob_cal: T_PREOB_CAL '=' name_value ':' unit_value ':' name_value ';'  */
#line 1571 "./vex_parse.y"
                {(yyval.prptr)=make_preob_cal((yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].sval));}
#line 6684 "vex_parse.tab.c"
    break;

  case 598: /* midob_cal: T_MIDOB_CAL '=' name_value ':' unit_value ':' name_value ';'  */
#line 1574 "./vex_parse.y"
                {(yyval.miptr)=make_midob_cal((yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].sval));}
#line 6690 "vex_parse.tab.c"
    break;

  case 599: /* postob_cal: T_POSTOB_CAL '=' name_value ':' unit_value ':' name_value ';'  */
#line 1577 "./vex_parse.y"
                {(yyval.poptr)=make_postob_cal((yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].sval));}
#line 6696 "vex_parse.tab.c"
    break;

  case 600: /* procedure_name_prefix: T_PROCEDURE_NAME_PREFIX '=' T_NAME ';'  */
#line 1579 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 6702 "vex_parse.tab.c"
    break;

  case 601: /* roll_block: B_ROLL ';' roll_defs  */
#line 1583 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 6708 "vex_parse.tab.c"
    break;

  case 602: /* roll_block: B_ROLL ';'  */
#line 1584 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 6714 "vex_parse.tab.c"
    break;

  case 603: /* roll_defs: roll_defs roll_defx  */
#line 1586 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6720 "vex_parse.tab.c"
    break;

  case 604: /* roll_defs: roll_defx  */
#line 1587 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6726 "vex_parse.tab.c"
    break;

  case 605: /* roll_defx: roll_def  */
#line 1589 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 6732 "vex_parse.tab.c"
    break;

  case 606: /* roll_defx: T_COMMENT  */
#line 1590 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6738 "vex_parse.tab.c"
    break;

  case 607: /* roll_defx: T_COMMENT_TRAILING  */
#line 1591 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6744 "vex_parse.tab.c"
    break;

  case 608: /* roll_def: T_DEF T_NAME ';' roll_lowls T_ENDDEF ';'  */
#line 1594 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 6750 "vex_parse.tab.c"
    break;

  case 609: /* roll_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1596 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 6756 "vex_parse.tab.c"
    break;

  case 610: /* roll_lowls: roll_lowls roll_lowl  */
#line 1598 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6762 "vex_parse.tab.c"
    break;

  case 611: /* roll_lowls: roll_lowl  */
#line 1599 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6768 "vex_parse.tab.c"
    break;

  case 612: /* roll_lowl: roll_reinit_period  */
#line 1601 "./vex_parse.y"
                                   {(yyval.lwptr)=make_lowl(T_ROLL_REINIT_PERIOD,(yyvsp[0].dvptr));}
#line 6774 "vex_parse.tab.c"
    break;

  case 613: /* roll_lowl: roll_inc_period  */
#line 1602 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ROLL_INC_PERIOD,(yyvsp[0].dvptr));}
#line 6780 "vex_parse.tab.c"
    break;

  case 614: /* roll_lowl: roll  */
#line 1603 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_ROLL,(yyvsp[0].sval));}
#line 6786 "vex_parse.tab.c"
    break;

  case 615: /* roll_lowl: roll_def_st  */
#line 1604 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_ROLL_DEF,(yyvsp[0].llptr));}
#line 6792 "vex_parse.tab.c"
    break;

  case 616: /* roll_lowl: external_ref  */
#line 1605 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 6798 "vex_parse.tab.c"
    break;

  case 617: /* roll_lowl: T_COMMENT  */
#line 1606 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6804 "vex_parse.tab.c"
    break;

  case 618: /* roll_lowl: T_COMMENT_TRAILING  */
#line 1607 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6810 "vex_parse.tab.c"
    break;

  case 619: /* roll_reinit_period: T_ROLL_REINIT_PERIOD '=' unit_value ';'  */
#line 1609 "./vex_parse.y"
                                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 6816 "vex_parse.tab.c"
    break;

  case 620: /* roll_inc_period: T_ROLL_INC_PERIOD '=' value ';'  */
#line 1611 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 6822 "vex_parse.tab.c"
    break;

  case 621: /* roll: T_ROLL '=' T_NAME ';'  */
#line 1613 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 6828 "vex_parse.tab.c"
    break;

  case 622: /* roll_def_st: T_ROLL_DEF '=' value_list ';'  */
#line 1615 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 6834 "vex_parse.tab.c"
    break;

  case 623: /* scheduling_params_block: B_SCHEDULING_PARAMS ';' scheduling_params_defs  */
#line 1620 "./vex_parse.y"
                                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 6840 "vex_parse.tab.c"
    break;

  case 624: /* scheduling_params_block: B_SCHEDULING_PARAMS ';'  */
#line 1621 "./vex_parse.y"
                                                                {(yyval.llptr)=NULL;}
#line 6846 "vex_parse.tab.c"
    break;

  case 625: /* scheduling_params_defs: scheduling_params_defs scheduling_params_defx  */
#line 1624 "./vex_parse.y"
                                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6852 "vex_parse.tab.c"
    break;

  case 626: /* scheduling_params_defs: scheduling_params_defx  */
#line 1626 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6858 "vex_parse.tab.c"
    break;

  case 627: /* scheduling_params_defx: scheduling_params_def  */
#line 1628 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 6864 "vex_parse.tab.c"
    break;

  case 628: /* scheduling_params_defx: T_COMMENT  */
#line 1629 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6870 "vex_parse.tab.c"
    break;

  case 629: /* scheduling_params_defx: T_COMMENT_TRAILING  */
#line 1630 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6876 "vex_parse.tab.c"
    break;

  case 630: /* scheduling_params_def: T_DEF T_NAME ';' scheduling_params_lowls T_ENDDEF ';'  */
#line 1633 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 6882 "vex_parse.tab.c"
    break;

  case 631: /* scheduling_params_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1635 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 6888 "vex_parse.tab.c"
    break;

  case 632: /* scheduling_params_lowls: scheduling_params_lowls scheduling_params_lowl  */
#line 1638 "./vex_parse.y"
                                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6894 "vex_parse.tab.c"
    break;

  case 633: /* scheduling_params_lowls: scheduling_params_lowl  */
#line 1640 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6900 "vex_parse.tab.c"
    break;

  case 634: /* scheduling_params_lowl: external_ref  */
#line 1642 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 6906 "vex_parse.tab.c"
    break;

  case 635: /* scheduling_params_lowl: literal  */
#line 1643 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_LITERAL,(yyvsp[0].llptr));}
#line 6912 "vex_parse.tab.c"
    break;

  case 636: /* scheduling_params_lowl: T_COMMENT  */
#line 1644 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6918 "vex_parse.tab.c"
    break;

  case 637: /* scheduling_params_lowl: T_COMMENT_TRAILING  */
#line 1645 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6924 "vex_parse.tab.c"
    break;

  case 638: /* sefd_block: B_SEFD ';' sefd_defs  */
#line 1649 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 6930 "vex_parse.tab.c"
    break;

  case 639: /* sefd_block: B_SEFD ';'  */
#line 1650 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 6936 "vex_parse.tab.c"
    break;

  case 640: /* sefd_defs: sefd_defs sefd_defx  */
#line 1652 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6942 "vex_parse.tab.c"
    break;

  case 641: /* sefd_defs: sefd_defx  */
#line 1653 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6948 "vex_parse.tab.c"
    break;

  case 642: /* sefd_defx: sefd_def  */
#line 1655 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 6954 "vex_parse.tab.c"
    break;

  case 643: /* sefd_defx: T_COMMENT  */
#line 1656 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 6960 "vex_parse.tab.c"
    break;

  case 644: /* sefd_defx: T_COMMENT_TRAILING  */
#line 1657 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 6966 "vex_parse.tab.c"
    break;

  case 645: /* sefd_def: T_DEF T_NAME ';' sefd_lowls T_ENDDEF ';'  */
#line 1660 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 6972 "vex_parse.tab.c"
    break;

  case 646: /* sefd_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1662 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 6978 "vex_parse.tab.c"
    break;

  case 647: /* sefd_lowls: sefd_lowls sefd_lowl  */
#line 1664 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 6984 "vex_parse.tab.c"
    break;

  case 648: /* sefd_lowls: sefd_lowl  */
#line 1665 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 6990 "vex_parse.tab.c"
    break;

  case 649: /* sefd_lowl: sefd_model  */
#line 1667 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_SEFD_MODEL,(yyvsp[0].sval));}
#line 6996 "vex_parse.tab.c"
    break;

  case 650: /* sefd_lowl: sefd  */
#line 1668 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_SEFD,(yyvsp[0].septr));}
#line 7002 "vex_parse.tab.c"
    break;

  case 651: /* sefd_lowl: external_ref  */
#line 1669 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 7008 "vex_parse.tab.c"
    break;

  case 652: /* sefd_lowl: T_COMMENT  */
#line 1670 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 7014 "vex_parse.tab.c"
    break;

  case 653: /* sefd_lowl: T_COMMENT_TRAILING  */
#line 1671 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 7020 "vex_parse.tab.c"
    break;

  case 654: /* sefd_model: T_SEFD_MODEL '=' T_NAME ';'  */
#line 1673 "./vex_parse.y"
                                            {(yyval.sval)=(yyvsp[-1].sval);}
#line 7026 "vex_parse.tab.c"
    break;

  case 655: /* sefd: T_SEFD '=' T_LINK ':' unit_value ':' value_list ';'  */
#line 1676 "./vex_parse.y"
                                                {(yyval.septr)=make_sefd((yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].llptr));}
#line 7032 "vex_parse.tab.c"
    break;

  case 656: /* site_block: B_SITE ';' site_defs  */
#line 1680 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[0].llptr);}
#line 7038 "vex_parse.tab.c"
    break;

  case 657: /* site_block: B_SITE ';'  */
#line 1681 "./vex_parse.y"
                                        {(yyval.llptr)=NULL;}
#line 7044 "vex_parse.tab.c"
    break;

  case 658: /* site_defs: site_defs site_defx  */
#line 1683 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 7050 "vex_parse.tab.c"
    break;

  case 659: /* site_defs: site_defx  */
#line 1684 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 7056 "vex_parse.tab.c"
    break;

  case 660: /* site_defx: site_def  */
#line 1686 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 7062 "vex_parse.tab.c"
    break;

  case 661: /* site_defx: T_COMMENT  */
#line 1687 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 7068 "vex_parse.tab.c"
    break;

  case 662: /* site_defx: T_COMMENT_TRAILING  */
#line 1688 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 7074 "vex_parse.tab.c"
    break;

  case 663: /* site_def: T_DEF T_NAME ';' site_lowls T_ENDDEF ';'  */
#line 1691 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 7080 "vex_parse.tab.c"
    break;

  case 664: /* site_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1692 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 7086 "vex_parse.tab.c"
    break;

  case 665: /* site_lowls: site_lowls site_lowl  */
#line 1694 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 7092 "vex_parse.tab.c"
    break;

  case 666: /* site_lowls: site_lowl  */
#line 1695 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 7098 "vex_parse.tab.c"
    break;

  case 667: /* site_lowl: site_type  */
#line 1697 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_SITE_TYPE,(yyvsp[0].sval));}
#line 7104 "vex_parse.tab.c"
    break;

  case 668: /* site_lowl: site_name  */
#line 1698 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_SITE_NAME,(yyvsp[0].sval));}
#line 7110 "vex_parse.tab.c"
    break;

  case 669: /* site_lowl: site_id  */
#line 1699 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_SITE_ID,(yyvsp[0].siptr));}
#line 7116 "vex_parse.tab.c"
    break;

  case 670: /* site_lowl: site_position  */
#line 1700 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_SITE_POSITION,(yyvsp[0].spptr));}
#line 7122 "vex_parse.tab.c"
    break;

  case 671: /* site_lowl: site_position_epoch  */
#line 1701 "./vex_parse.y"
                                      {(yyval.lwptr)=make_lowl(T_SITE_POSITION_EPOCH,(yyvsp[0].sval));}
#line 7128 "vex_parse.tab.c"
    break;

  case 672: /* site_lowl: site_position_ref  */
#line 1702 "./vex_parse.y"
                                      {(yyval.lwptr)=make_lowl(T_SITE_POSITION_REF,(yyvsp[0].sval));}
#line 7134 "vex_parse.tab.c"
    break;

  case 673: /* site_lowl: site_velocity  */
#line 1703 "./vex_parse.y"
                                      {(yyval.lwptr)=make_lowl(T_SITE_VELOCITY,(yyvsp[0].svptr));}
#line 7140 "vex_parse.tab.c"
    break;

  case 674: /* site_lowl: horizon_map_az  */
#line 1704 "./vex_parse.y"
                                 {(yyval.lwptr)=make_lowl(T_HORIZON_MAP_AZ,(yyvsp[0].llptr));}
#line 7146 "vex_parse.tab.c"
    break;

  case 675: /* site_lowl: horizon_map_el  */
#line 1705 "./vex_parse.y"
                                 {(yyval.lwptr)=make_lowl(T_HORIZON_MAP_EL,(yyvsp[0].llptr));}
#line 7152 "vex_parse.tab.c"
    break;

  case 676: /* site_lowl: zen_atmos  */
#line 1706 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_ZEN_ATMOS,(yyvsp[0].dvptr));}
#line 7158 "vex_parse.tab.c"
    break;

  case 677: /* site_lowl: ocean_load_vert  */
#line 1707 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_OCEAN_LOAD_VERT,(yyvsp[0].ovptr));}
#line 7164 "vex_parse.tab.c"
    break;

  case 678: /* site_lowl: ocean_load_horiz  */
#line 1708 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_OCEAN_LOAD_HORIZ,(yyvsp[0].ohptr));}
#line 7170 "vex_parse.tab.c"
    break;

  case 679: /* site_lowl: occupation_code  */
#line 1709 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_OCCUPATION_CODE,(yyvsp[0].sval));}
#line 7176 "vex_parse.tab.c"
    break;

  case 680: /* site_lowl: inclination  */
#line 1710 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_INCLINATION,(yyvsp[0].dvptr));}
#line 7182 "vex_parse.tab.c"
    break;

  case 681: /* site_lowl: eccentricity  */
#line 1711 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ECCENTRICITY,(yyvsp[0].dvptr));}
#line 7188 "vex_parse.tab.c"
    break;

  case 682: /* site_lowl: arg_perigee  */
#line 1712 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ARG_PERIGEE,(yyvsp[0].dvptr));}
#line 7194 "vex_parse.tab.c"
    break;

  case 683: /* site_lowl: ascending_node  */
#line 1713 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ASCENDING_NODE,(yyvsp[0].dvptr));}
#line 7200 "vex_parse.tab.c"
    break;

  case 684: /* site_lowl: mean_anomaly  */
#line 1714 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_MEAN_ANOMALY,(yyvsp[0].dvptr));}
#line 7206 "vex_parse.tab.c"
    break;

  case 685: /* site_lowl: semi_major_axis  */
#line 1715 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SEMI_MAJOR_AXIS,(yyvsp[0].dvptr));}
#line 7212 "vex_parse.tab.c"
    break;

  case 686: /* site_lowl: mean_motion  */
#line 1716 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_MEAN_MOTION,(yyvsp[0].dvptr));}
#line 7218 "vex_parse.tab.c"
    break;

  case 687: /* site_lowl: orbit_epoch  */
#line 1717 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ORBIT_EPOCH,(yyvsp[0].sval));}
#line 7224 "vex_parse.tab.c"
    break;

  case 688: /* site_lowl: external_ref  */
#line 1718 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 7230 "vex_parse.tab.c"
    break;

  case 689: /* site_lowl: T_COMMENT  */
#line 1719 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 7236 "vex_parse.tab.c"
    break;

  case 690: /* site_lowl: T_COMMENT_TRAILING  */
#line 1720 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 7242 "vex_parse.tab.c"
    break;

  case 691: /* site_type: T_SITE_TYPE '=' T_NAME ';'  */
#line 1722 "./vex_parse.y"
                                           {(yyval.sval)=(yyvsp[-1].sval);}
#line 7248 "vex_parse.tab.c"
    break;

  case 692: /* site_name: T_SITE_NAME '=' T_NAME ';'  */
#line 1724 "./vex_parse.y"
                                           {(yyval.sval)=(yyvsp[-1].sval);}
#line 7254 "vex_parse.tab.c"
    break;

  case 693: /* site_id: T_SITE_ID '=' T_NAME ';'  */
#line 1727 "./vex_parse.y"
            {(yyval.siptr)=make_site_id((yyvsp[-1].sval),NULL);}
#line 7260 "vex_parse.tab.c"
    break;

  case 694: /* site_id: T_SITE_ID '=' T_NAME ':' T_NAME ';'  */
#line 1729 "./vex_parse.y"
            {(yyval.siptr)=make_site_id((yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 7266 "vex_parse.tab.c"
    break;

  case 695: /* site_position: T_SITE_POSITION '=' unit_value ':' unit_value ':' unit_value ';'  */
#line 1733 "./vex_parse.y"
                {(yyval.spptr)=make_site_position((yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 7272 "vex_parse.tab.c"
    break;

  case 696: /* site_position_epoch: T_SITE_POSITION_EPOCH '=' T_NAME ';'  */
#line 1735 "./vex_parse.y"
                                                             {(yyval.sval)=(yyvsp[-1].sval);}
#line 7278 "vex_parse.tab.c"
    break;

  case 697: /* site_position_ref: T_SITE_POSITION_REF '=' T_NAME ';'  */
#line 1737 "./vex_parse.y"
                                                           {(yyval.sval)=(yyvsp[-1].sval);}
#line 7284 "vex_parse.tab.c"
    break;

  case 698: /* site_velocity: T_SITE_VELOCITY '=' unit_value ':' unit_value ':' unit_value ';'  */
#line 1741 "./vex_parse.y"
                {(yyval.svptr)=make_site_velocity((yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 7290 "vex_parse.tab.c"
    break;

  case 699: /* horizon_map_az: T_HORIZON_MAP_AZ '=' unit_list ';'  */
#line 1743 "./vex_parse.y"
                                                        {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 7296 "vex_parse.tab.c"
    break;

  case 700: /* horizon_map_el: T_HORIZON_MAP_EL '=' unit_list ';'  */
#line 1745 "./vex_parse.y"
                                                        {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 7302 "vex_parse.tab.c"
    break;

  case 701: /* zen_atmos: T_ZEN_ATMOS '=' unit_value ';'  */
#line 1747 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7308 "vex_parse.tab.c"
    break;

  case 702: /* ocean_load_vert: T_OCEAN_LOAD_VERT '=' unit_value ':' unit_value ';'  */
#line 1751 "./vex_parse.y"
                                {(yyval.ovptr)=make_ocean_load_vert((yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 7314 "vex_parse.tab.c"
    break;

  case 703: /* ocean_load_horiz: T_OCEAN_LOAD_HORIZ '=' unit_value ':' unit_value ';'  */
#line 1755 "./vex_parse.y"
                                {(yyval.ohptr)=make_ocean_load_horiz((yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 7320 "vex_parse.tab.c"
    break;

  case 704: /* occupation_code: T_OCCUPATION_CODE '=' name_value ';'  */
#line 1757 "./vex_parse.y"
                                                             {(yyval.sval)=(yyvsp[-1].sval);}
#line 7326 "vex_parse.tab.c"
    break;

  case 705: /* inclination: T_INCLINATION '=' unit_value ';'  */
#line 1759 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7332 "vex_parse.tab.c"
    break;

  case 706: /* eccentricity: T_ECCENTRICITY '=' value ';'  */
#line 1761 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7338 "vex_parse.tab.c"
    break;

  case 707: /* arg_perigee: T_ARG_PERIGEE '=' unit_value ';'  */
#line 1763 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7344 "vex_parse.tab.c"
    break;

  case 708: /* ascending_node: T_ASCENDING_NODE '=' unit_value ';'  */
#line 1765 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7350 "vex_parse.tab.c"
    break;

  case 709: /* mean_anomaly: T_MEAN_ANOMALY '=' unit_value ';'  */
#line 1767 "./vex_parse.y"
                                                        {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7356 "vex_parse.tab.c"
    break;

  case 710: /* semi_major_axis: T_SEMI_MAJOR_AXIS '=' unit_value ';'  */
#line 1769 "./vex_parse.y"
                                                             {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7362 "vex_parse.tab.c"
    break;

  case 711: /* mean_motion: T_MEAN_MOTION '=' value ';'  */
#line 1771 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7368 "vex_parse.tab.c"
    break;

  case 712: /* orbit_epoch: T_ORBIT_EPOCH '=' T_NAME ';'  */
#line 1773 "./vex_parse.y"
                                             {(yyval.sval)=(yyvsp[-1].sval);}
#line 7374 "vex_parse.tab.c"
    break;

  case 713: /* source_block: B_SOURCE ';' source_defs  */
#line 1777 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 7380 "vex_parse.tab.c"
    break;

  case 714: /* source_block: B_SOURCE ';'  */
#line 1778 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 7386 "vex_parse.tab.c"
    break;

  case 715: /* source_defs: source_defs source_defx  */
#line 1780 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 7392 "vex_parse.tab.c"
    break;

  case 716: /* source_defs: source_defx  */
#line 1781 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 7398 "vex_parse.tab.c"
    break;

  case 717: /* source_defx: source_def  */
#line 1783 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 7404 "vex_parse.tab.c"
    break;

  case 718: /* source_defx: T_COMMENT  */
#line 1784 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 7410 "vex_parse.tab.c"
    break;

  case 719: /* source_defx: T_COMMENT_TRAILING  */
#line 1785 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 7416 "vex_parse.tab.c"
    break;

  case 720: /* source_def: T_DEF T_NAME ';' source_lowls T_ENDDEF ';'  */
#line 1788 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 7422 "vex_parse.tab.c"
    break;

  case 721: /* source_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1790 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 7428 "vex_parse.tab.c"
    break;

  case 722: /* source_lowls: source_lowls source_lowl  */
#line 1792 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 7434 "vex_parse.tab.c"
    break;

  case 723: /* source_lowls: source_lowl  */
#line 1793 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 7440 "vex_parse.tab.c"
    break;

  case 724: /* source_lowl: source_type  */
#line 1795 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SOURCE_TYPE,(yyvsp[0].stptr));}
#line 7446 "vex_parse.tab.c"
    break;

  case 725: /* source_lowl: source_name  */
#line 1796 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SOURCE_NAME,(yyvsp[0].sval));}
#line 7452 "vex_parse.tab.c"
    break;

  case 726: /* source_lowl: iau_name  */
#line 1797 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_IAU_NAME,(yyvsp[0].sval));}
#line 7458 "vex_parse.tab.c"
    break;

  case 727: /* source_lowl: ra  */
#line 1798 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_RA,(yyvsp[0].sval));}
#line 7464 "vex_parse.tab.c"
    break;

  case 728: /* source_lowl: dec  */
#line 1799 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEC,(yyvsp[0].sval));}
#line 7470 "vex_parse.tab.c"
    break;

  case 729: /* source_lowl: ref_coord_frame  */
#line 1800 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF_COORD_FRAME,(yyvsp[0].sval));}
#line 7476 "vex_parse.tab.c"
    break;

  case 730: /* source_lowl: source_position_ref  */
#line 1801 "./vex_parse.y"
                                      {(yyval.lwptr)=make_lowl(T_SOURCE_POSITION_REF,(yyvsp[0].sval));}
#line 7482 "vex_parse.tab.c"
    break;

  case 731: /* source_lowl: source_position_epoch  */
#line 1802 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_SOURCE_POSITION_EPOCH,(yyvsp[0].sval));}
#line 7488 "vex_parse.tab.c"
    break;

  case 732: /* source_lowl: ra_rate  */
#line 1803 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_RA_RATE,(yyvsp[0].dvptr));}
#line 7494 "vex_parse.tab.c"
    break;

  case 733: /* source_lowl: dec_rate  */
#line 1804 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEC_RATE,(yyvsp[0].dvptr));}
#line 7500 "vex_parse.tab.c"
    break;

  case 734: /* source_lowl: velocity_wrt_lsr  */
#line 1805 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_VELOCITY_WRT_LSR,(yyvsp[0].dvptr));}
#line 7506 "vex_parse.tab.c"
    break;

  case 735: /* source_lowl: source_model  */
#line 1806 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SOURCE_MODEL,(yyvsp[0].smptr));}
#line 7512 "vex_parse.tab.c"
    break;

  case 736: /* source_lowl: inclination  */
#line 1807 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_INCLINATION,(yyvsp[0].dvptr));}
#line 7518 "vex_parse.tab.c"
    break;

  case 737: /* source_lowl: eccentricity  */
#line 1808 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ECCENTRICITY,(yyvsp[0].dvptr));}
#line 7524 "vex_parse.tab.c"
    break;

  case 738: /* source_lowl: arg_perigee  */
#line 1809 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ARG_PERIGEE,(yyvsp[0].dvptr));}
#line 7530 "vex_parse.tab.c"
    break;

  case 739: /* source_lowl: ascending_node  */
#line 1810 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ASCENDING_NODE,(yyvsp[0].dvptr));}
#line 7536 "vex_parse.tab.c"
    break;

  case 740: /* source_lowl: mean_anomaly  */
#line 1811 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_MEAN_ANOMALY,(yyvsp[0].dvptr));}
#line 7542 "vex_parse.tab.c"
    break;

  case 741: /* source_lowl: semi_major_axis  */
#line 1812 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SEMI_MAJOR_AXIS,(yyvsp[0].dvptr));}
#line 7548 "vex_parse.tab.c"
    break;

  case 742: /* source_lowl: mean_motion  */
#line 1813 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_MEAN_MOTION,(yyvsp[0].dvptr));}
#line 7554 "vex_parse.tab.c"
    break;

  case 743: /* source_lowl: orbit_epoch  */
#line 1814 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_ORBIT_EPOCH,(yyvsp[0].sval));}
#line 7560 "vex_parse.tab.c"
    break;

  case 744: /* source_lowl: external_ref  */
#line 1815 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 7566 "vex_parse.tab.c"
    break;

  case 745: /* source_lowl: bsp_file_name  */
#line 1816 "./vex_parse.y"
                                    {(yyval.lwptr)=make_lowl(T_BSP_FILE_NAME,(yyvsp[0].sval));}
#line 7572 "vex_parse.tab.c"
    break;

  case 746: /* source_lowl: bsp_object_id  */
#line 1817 "./vex_parse.y"
                                    {(yyval.lwptr)=make_lowl(T_BSP_OBJECT_ID,(yyvsp[0].sval));}
#line 7578 "vex_parse.tab.c"
    break;

  case 747: /* source_lowl: tle0  */
#line 1818 "./vex_parse.y"
                                    {(yyval.lwptr)=make_lowl(T_TLE0,(yyvsp[0].sval));}
#line 7584 "vex_parse.tab.c"
    break;

  case 748: /* source_lowl: tle1  */
#line 1819 "./vex_parse.y"
                                    {(yyval.lwptr)=make_lowl(T_TLE1,(yyvsp[0].sval));}
#line 7590 "vex_parse.tab.c"
    break;

  case 749: /* source_lowl: tle2  */
#line 1820 "./vex_parse.y"
                                    {(yyval.lwptr)=make_lowl(T_TLE2,(yyvsp[0].sval));}
#line 7596 "vex_parse.tab.c"
    break;

  case 750: /* source_lowl: datum  */
#line 1821 "./vex_parse.y"
                                    {(yyval.lwptr)=make_lowl(T_DATUM,(yyvsp[0].dmptr));}
#line 7602 "vex_parse.tab.c"
    break;

  case 751: /* source_lowl: vector  */
#line 1822 "./vex_parse.y"
                                     {(yyval.lwptr)=make_lowl(T_VECTOR,(yyvsp[0].vrptr));}
#line 7608 "vex_parse.tab.c"
    break;

  case 752: /* source_lowl: T_COMMENT  */
#line 1823 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 7614 "vex_parse.tab.c"
    break;

  case 753: /* source_lowl: T_COMMENT_TRAILING  */
#line 1824 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 7620 "vex_parse.tab.c"
    break;

  case 754: /* source_type: T_SOURCE_TYPE '=' T_NAME ';'  */
#line 1827 "./vex_parse.y"
                   {(yyval.stptr)=make_source_type((yyvsp[-1].sval),NULL,NULL);}
#line 7626 "vex_parse.tab.c"
    break;

  case 755: /* source_type: T_SOURCE_TYPE '=' T_NAME ':' T_NAME ';'  */
#line 1829 "./vex_parse.y"
                   {(yyval.stptr)=make_source_type((yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 7632 "vex_parse.tab.c"
    break;

  case 756: /* source_type: T_SOURCE_TYPE '=' T_NAME ':' name_or_not ':' T_NAME ';'  */
#line 1831 "./vex_parse.y"
                   {(yyval.stptr)=make_source_type((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 7638 "vex_parse.tab.c"
    break;

  case 757: /* source_name: T_SOURCE_NAME '=' T_NAME ';'  */
#line 1833 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7644 "vex_parse.tab.c"
    break;

  case 758: /* iau_name: T_IAU_NAME '=' T_NAME ';'  */
#line 1835 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7650 "vex_parse.tab.c"
    break;

  case 759: /* ra: T_RA '=' T_NAME ';'  */
#line 1837 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7656 "vex_parse.tab.c"
    break;

  case 760: /* dec: T_DEC '=' T_ANGLE ';'  */
#line 1839 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7662 "vex_parse.tab.c"
    break;

  case 761: /* ref_coord_frame: T_REF_COORD_FRAME '=' T_NAME ';'  */
#line 1841 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7668 "vex_parse.tab.c"
    break;

  case 762: /* source_position_ref: T_SOURCE_POSITION_REF '=' T_NAME ';'  */
#line 1843 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7674 "vex_parse.tab.c"
    break;

  case 763: /* source_position_epoch: T_SOURCE_POSITION_EPOCH '=' T_NAME ';'  */
#line 1845 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7680 "vex_parse.tab.c"
    break;

  case 764: /* ra_rate: T_RA_RATE '=' unit_value ';'  */
#line 1847 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7686 "vex_parse.tab.c"
    break;

  case 765: /* dec_rate: T_DEC_RATE '=' unit_value ';'  */
#line 1849 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7692 "vex_parse.tab.c"
    break;

  case 766: /* velocity_wrt_lsr: T_VELOCITY_WRT_LSR '=' unit_value ';'  */
#line 1852 "./vex_parse.y"
                                                                {(yyval.dvptr)=(yyvsp[-1].dvptr);}
#line 7698 "vex_parse.tab.c"
    break;

  case 767: /* source_model: T_SOURCE_MODEL '=' value ':' T_LINK ':' unit_value ':' unit_value ':' value ':' unit_value ':' unit_value ':' unit_value ';'  */
#line 1862 "./vex_parse.y"
                {(yyval.smptr)=make_source_model((yyvsp[-15].dvptr),(yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].dvptr),(yyvsp[-7].dvptr),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 7704 "vex_parse.tab.c"
    break;

  case 768: /* bsp_file_name: T_BSP_FILE_NAME '=' T_NAME ';'  */
#line 1864 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7710 "vex_parse.tab.c"
    break;

  case 769: /* bsp_object_id: T_BSP_OBJECT_ID '=' T_NAME ';'  */
#line 1866 "./vex_parse.y"
                                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7716 "vex_parse.tab.c"
    break;

  case 770: /* tle0: T_TLE0 '=' T_NAME ';'  */
#line 1868 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7722 "vex_parse.tab.c"
    break;

  case 771: /* tle1: T_TLE1 '=' T_NAME ';'  */
#line 1870 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7728 "vex_parse.tab.c"
    break;

  case 772: /* tle2: T_TLE2 '=' T_NAME ';'  */
#line 1872 "./vex_parse.y"
                                                {(yyval.sval)=(yyvsp[-1].sval);}
#line 7734 "vex_parse.tab.c"
    break;

  case 773: /* datum: T_DATUM '=' name_value ':' name_value ':' T_ANGLE ';'  */
#line 1875 "./vex_parse.y"
                {(yyval.dmptr)=make_datum((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval),NULL,NULL);}
#line 7740 "vex_parse.tab.c"
    break;

  case 774: /* datum: T_DATUM '=' name_value ':' name_value ':' T_ANGLE ':' unit_value ';'  */
#line 1877 "./vex_parse.y"
                {(yyval.dmptr)=make_datum((yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].dvptr),NULL);}
#line 7746 "vex_parse.tab.c"
    break;

  case 775: /* datum: T_DATUM '=' name_value ':' name_value ':' T_ANGLE ':' unit_value2 ':' unit_value ';'  */
#line 1879 "./vex_parse.y"
                {(yyval.dmptr)=make_datum((yyvsp[-9].sval),(yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 7752 "vex_parse.tab.c"
    break;

  case 776: /* vector: T_VECTOR '=' name_value ':' unit_value ':' unit_value ':' unit_value ';'  */
#line 1882 "./vex_parse.y"
                {(yyval.vrptr)=make_vector((yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL,NULL,NULL);}
#line 7758 "vex_parse.tab.c"
    break;

  case 777: /* vector: T_VECTOR '=' name_value ':' unit_value ':' unit_value ':' unit_value ':' unit_value ';'  */
#line 1884 "./vex_parse.y"
                {(yyval.vrptr)=make_vector((yyvsp[-9].sval),(yyvsp[-7].dvptr),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL,NULL);}
#line 7764 "vex_parse.tab.c"
    break;

  case 778: /* vector: T_VECTOR '=' name_value ':' unit_value ':' unit_value ':' unit_value ':' unit_value2 ':' unit_value ';'  */
#line 1886 "./vex_parse.y"
                {(yyval.vrptr)=make_vector((yyvsp[-11].sval),(yyvsp[-9].dvptr),(yyvsp[-7].dvptr),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr),NULL);}
#line 7770 "vex_parse.tab.c"
    break;

  case 779: /* vector: T_VECTOR '=' name_value ':' unit_value ':' unit_value ':' unit_value ':' unit_value2 ':' unit_value2 ':' unit_value ';'  */
#line 1888 "./vex_parse.y"
                {(yyval.vrptr)=make_vector((yyvsp[-13].sval),(yyvsp[-11].dvptr),(yyvsp[-9].dvptr),(yyvsp[-7].dvptr),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 7776 "vex_parse.tab.c"
    break;

  case 780: /* tapelog_obs_block: B_TAPELOG_OBS ';' tapelog_obs_defs  */
#line 1892 "./vex_parse.y"
                                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 7782 "vex_parse.tab.c"
    break;

  case 781: /* tapelog_obs_block: B_TAPELOG_OBS ';'  */
#line 1893 "./vex_parse.y"
                                                                {(yyval.llptr)=NULL;}
#line 7788 "vex_parse.tab.c"
    break;

  case 782: /* tapelog_obs_defs: tapelog_obs_defs tapelog_obs_defx  */
#line 1896 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 7794 "vex_parse.tab.c"
    break;

  case 783: /* tapelog_obs_defs: tapelog_obs_defx  */
#line 1897 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 7800 "vex_parse.tab.c"
    break;

  case 784: /* tapelog_obs_defx: tapelog_obs_def  */
#line 1899 "./vex_parse.y"
                                                {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 7806 "vex_parse.tab.c"
    break;

  case 785: /* tapelog_obs_defx: T_COMMENT  */
#line 1900 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 7812 "vex_parse.tab.c"
    break;

  case 786: /* tapelog_obs_defx: T_COMMENT_TRAILING  */
#line 1901 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 7818 "vex_parse.tab.c"
    break;

  case 787: /* tapelog_obs_def: T_DEF T_NAME ';' tapelog_obs_lowls T_ENDDEF ';'  */
#line 1905 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 7824 "vex_parse.tab.c"
    break;

  case 788: /* tapelog_obs_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1907 "./vex_parse.y"
                                                {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 7830 "vex_parse.tab.c"
    break;

  case 789: /* tapelog_obs_lowls: tapelog_obs_lowls tapelog_obs_lowl  */
#line 1910 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 7836 "vex_parse.tab.c"
    break;

  case 790: /* tapelog_obs_lowls: tapelog_obs_lowl  */
#line 1911 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 7842 "vex_parse.tab.c"
    break;

  case 791: /* tapelog_obs_lowl: vsn  */
#line 1913 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_VSN,(yyvsp[0].vsptr));}
#line 7848 "vex_parse.tab.c"
    break;

  case 792: /* tapelog_obs_lowl: external_ref  */
#line 1914 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 7854 "vex_parse.tab.c"
    break;

  case 793: /* tapelog_obs_lowl: T_COMMENT  */
#line 1915 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 7860 "vex_parse.tab.c"
    break;

  case 794: /* tapelog_obs_lowl: T_COMMENT_TRAILING  */
#line 1917 "./vex_parse.y"
                                 {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 7866 "vex_parse.tab.c"
    break;

  case 795: /* vsn: T_VSN '=' value ':' T_NAME ':' T_NAME ':' T_NAME ';'  */
#line 1920 "./vex_parse.y"
                {(yyval.vsptr)=make_vsn((yyvsp[-7].dvptr),(yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval),NULL);}
#line 7872 "vex_parse.tab.c"
    break;

  case 796: /* vsn: T_VSN '=' value ':' T_NAME ':' T_NAME ':' T_NAME ':' link_list ';'  */
#line 1922 "./vex_parse.y"
                {(yyval.vsptr)=make_vsn((yyvsp[-9].dvptr),(yyvsp[-7].sval),(yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].llptr));}
#line 7878 "vex_parse.tab.c"
    break;

  case 797: /* tracks_block: B_TRACKS ';' tracks_defs  */
#line 1926 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 7884 "vex_parse.tab.c"
    break;

  case 798: /* tracks_block: B_TRACKS ';'  */
#line 1927 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 7890 "vex_parse.tab.c"
    break;

  case 799: /* tracks_defs: tracks_defs tracks_defx  */
#line 1929 "./vex_parse.y"
                                        {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 7896 "vex_parse.tab.c"
    break;

  case 800: /* tracks_defs: tracks_defx  */
#line 1930 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 7902 "vex_parse.tab.c"
    break;

  case 801: /* tracks_defx: tracks_def  */
#line 1932 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 7908 "vex_parse.tab.c"
    break;

  case 802: /* tracks_defx: T_COMMENT  */
#line 1933 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 7914 "vex_parse.tab.c"
    break;

  case 803: /* tracks_defx: T_COMMENT_TRAILING  */
#line 1934 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 7920 "vex_parse.tab.c"
    break;

  case 804: /* tracks_def: T_DEF T_NAME ';' tracks_lowls T_ENDDEF ';'  */
#line 1937 "./vex_parse.y"
                                                        {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 7926 "vex_parse.tab.c"
    break;

  case 805: /* tracks_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 1939 "./vex_parse.y"
                                                       {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 7932 "vex_parse.tab.c"
    break;

  case 806: /* tracks_lowls: tracks_lowls tracks_lowl  */
#line 1941 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 7938 "vex_parse.tab.c"
    break;

  case 807: /* tracks_lowls: tracks_lowl  */
#line 1942 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 7944 "vex_parse.tab.c"
    break;

  case 808: /* tracks_lowl: fanin_def  */
#line 1944 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_FANIN_DEF,(yyvsp[0].fiptr));}
#line 7950 "vex_parse.tab.c"
    break;

  case 809: /* tracks_lowl: fanout_def  */
#line 1945 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_FANOUT_DEF,(yyvsp[0].foptr));}
#line 7956 "vex_parse.tab.c"
    break;

  case 810: /* tracks_lowl: track_frame_format  */
#line 1947 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_TRACK_FRAME_FORMAT,(yyvsp[0].sval));}
#line 7962 "vex_parse.tab.c"
    break;

  case 811: /* tracks_lowl: sample_rate  */
#line 1948 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_SAMPLE_RATE,(yyvsp[0].dvptr));}
#line 7968 "vex_parse.tab.c"
    break;

  case 812: /* tracks_lowl: data_modulation  */
#line 1949 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_DATA_MODULATION,(yyvsp[0].sval));}
#line 7974 "vex_parse.tab.c"
    break;

  case 813: /* tracks_lowl: vlba_frmtr_sys_trk  */
#line 1951 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_VLBA_FRMTR_SYS_TRK,(yyvsp[0].fsptr));}
#line 7980 "vex_parse.tab.c"
    break;

  case 814: /* tracks_lowl: vlba_trnsprt_sys_trk  */
#line 1953 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_VLBA_TRNSPRT_SYS_TRK,(yyvsp[0].llptr));}
#line 7986 "vex_parse.tab.c"
    break;

  case 815: /* tracks_lowl: s2_recording_mode  */
#line 1954 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_S2_RECORDING_MODE,(yyvsp[0].sval));}
#line 7992 "vex_parse.tab.c"
    break;

  case 816: /* tracks_lowl: s2_data_source  */
#line 1955 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_S2_DATA_SOURCE,(yyvsp[0].dsptr));}
#line 7998 "vex_parse.tab.c"
    break;

  case 817: /* tracks_lowl: external_ref  */
#line 1956 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 8004 "vex_parse.tab.c"
    break;

  case 818: /* tracks_lowl: T_COMMENT  */
#line 1957 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 8010 "vex_parse.tab.c"
    break;

  case 819: /* tracks_lowl: T_COMMENT_TRAILING  */
#line 1958 "./vex_parse.y"
                                     {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 8016 "vex_parse.tab.c"
    break;

  case 820: /* fanin_def: T_FANIN_DEF '=' T_NAME ':' value ':' value ':' bit_stream_list ';'  */
#line 1961 "./vex_parse.y"
                                        {(yyval.fiptr)=make_fanin_def((yyvsp[-7].sval),(yyvsp[-5].dvptr),(yyvsp[-3].dvptr),(yyvsp[-1].llptr));}
#line 8022 "vex_parse.tab.c"
    break;

  case 821: /* fanout_def: T_FANOUT_DEF '=' T_NAME ':' bit_stream_list ':' value ':' value_list ';'  */
#line 1965 "./vex_parse.y"
                {(yyval.foptr)=make_fanout_def((yyvsp[-7].sval),(yyvsp[-5].llptr),(yyvsp[-3].dvptr),(yyvsp[-1].llptr));}
#line 8028 "vex_parse.tab.c"
    break;

  case 822: /* fanout_def: T_FANOUT_DEF '=' ':' bit_stream_list ':' value ':' value_list ';'  */
#line 1968 "./vex_parse.y"
                  {(yyval.foptr)=make_fanout_def(NULL,(yyvsp[-5].llptr),(yyvsp[-3].dvptr),(yyvsp[-1].llptr));}
#line 8034 "vex_parse.tab.c"
    break;

  case 823: /* track_frame_format: T_TRACK_FRAME_FORMAT '=' T_NAME ';'  */
#line 1970 "./vex_parse.y"
                                                            {(yyval.sval)=(yyvsp[-1].sval);}
#line 8040 "vex_parse.tab.c"
    break;

  case 824: /* data_modulation: T_DATA_MODULATION '=' T_NAME ';'  */
#line 1972 "./vex_parse.y"
                                                         {(yyval.sval)=(yyvsp[-1].sval);}
#line 8046 "vex_parse.tab.c"
    break;

  case 825: /* vlba_frmtr_sys_trk: T_VLBA_FRMTR_SYS_TRK '=' value ':' T_NAME ':' value ':' value ';'  */
#line 1976 "./vex_parse.y"
                        {(yyval.fsptr)=make_vlba_frmtr_sys_trk((yyvsp[-7].dvptr),(yyvsp[-5].sval),(yyvsp[-3].dvptr),(yyvsp[-1].dvptr));}
#line 8052 "vex_parse.tab.c"
    break;

  case 826: /* vlba_frmtr_sys_trk: T_VLBA_FRMTR_SYS_TRK '=' value ':' T_NAME ':' value ';'  */
#line 1979 "./vex_parse.y"
                        {(yyval.fsptr)=make_vlba_frmtr_sys_trk((yyvsp[-5].dvptr),(yyvsp[-3].sval),(yyvsp[-1].dvptr),NULL);}
#line 8058 "vex_parse.tab.c"
    break;

  case 827: /* vlba_trnsprt_sys_trk: T_VLBA_TRNSPRT_SYS_TRK '=' value ':' value ';'  */
#line 1982 "./vex_parse.y"
                        {(yyval.llptr)=add_list(add_list(NULL,(yyvsp[-3].dvptr)),(yyvsp[-1].dvptr));}
#line 8064 "vex_parse.tab.c"
    break;

  case 828: /* s2_recording_mode: T_S2_RECORDING_MODE '=' T_NAME ';'  */
#line 1984 "./vex_parse.y"
                                                           {(yyval.sval)=(yyvsp[-1].sval);}
#line 8070 "vex_parse.tab.c"
    break;

  case 829: /* s2_data_source: T_S2_DATA_SOURCE '=' T_NAME ':' T_LINK ':' T_LINK ';'  */
#line 1987 "./vex_parse.y"
                {(yyval.dsptr)=make_s2_data_source((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].sval));}
#line 8076 "vex_parse.tab.c"
    break;

  case 830: /* s2_data_source: T_S2_DATA_SOURCE '=' T_NAME ';'  */
#line 1989 "./vex_parse.y"
                {(yyval.dsptr)=make_s2_data_source((yyvsp[-1].sval),NULL,NULL);}
#line 8082 "vex_parse.tab.c"
    break;

  case 831: /* bit_stream_list: bit_stream_list ':' T_LINK ':' T_NAME  */
#line 1992 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(add_list((yyvsp[-4].llptr),(yyvsp[-2].sval)),(yyvsp[0].sval));}
#line 8088 "vex_parse.tab.c"
    break;

  case 832: /* bit_stream_list: T_LINK ':' T_NAME  */
#line 1994 "./vex_parse.y"
                                        {(yyval.llptr)=add_list(add_list(NULL,(yyvsp[-2].sval)),(yyvsp[0].sval));}
#line 8094 "vex_parse.tab.c"
    break;

  case 833: /* threads_block: B_THREADS ';' threads_defs  */
#line 1998 "./vex_parse.y"
                                                {(yyval.llptr)=(yyvsp[0].llptr);}
#line 8100 "vex_parse.tab.c"
    break;

  case 834: /* threads_block: B_THREADS ';'  */
#line 1999 "./vex_parse.y"
                                                {(yyval.llptr)=NULL;}
#line 8106 "vex_parse.tab.c"
    break;

  case 835: /* threads_defs: threads_defs threads_defx  */
#line 2001 "./vex_parse.y"
                                          {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 8112 "vex_parse.tab.c"
    break;

  case 836: /* threads_defs: threads_defx  */
#line 2002 "./vex_parse.y"
                                                   {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 8118 "vex_parse.tab.c"
    break;

  case 837: /* threads_defx: threads_def  */
#line 2004 "./vex_parse.y"
                                 {(yyval.lwptr)=make_lowl(T_DEF,(yyvsp[0].dfptr));}
#line 8124 "vex_parse.tab.c"
    break;

  case 838: /* threads_defx: T_COMMENT  */
#line 2005 "./vex_parse.y"
                                         {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 8130 "vex_parse.tab.c"
    break;

  case 839: /* threads_defx: T_COMMENT_TRAILING  */
#line 2006 "./vex_parse.y"
                                         {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 8136 "vex_parse.tab.c"
    break;

  case 840: /* threads_def: T_DEF T_NAME ';' threads_lowls T_ENDDEF ';'  */
#line 2009 "./vex_parse.y"
                                                     {(yyval.dfptr)=make_def((yyvsp[-4].sval),(yyvsp[-2].llptr));}
#line 8142 "vex_parse.tab.c"
    break;

  case 841: /* threads_def: T_DEF T_NAME ';' T_ENDDEF ';'  */
#line 2011 "./vex_parse.y"
                 {(yyval.dfptr)=make_def((yyvsp[-3].sval),NULL);}
#line 8148 "vex_parse.tab.c"
    break;

  case 842: /* threads_lowls: threads_lowls threads_lowl  */
#line 2013 "./vex_parse.y"
                                            {(yyval.llptr)=add_list((yyvsp[-1].llptr),(yyvsp[0].lwptr));}
#line 8154 "vex_parse.tab.c"
    break;

  case 843: /* threads_lowls: threads_lowl  */
#line 2014 "./vex_parse.y"
                                                     {(yyval.llptr)=add_list(NULL,(yyvsp[0].lwptr));}
#line 8160 "vex_parse.tab.c"
    break;

  case 844: /* threads_lowl: format_def  */
#line 2017 "./vex_parse.y"
                                {(yyval.lwptr)=make_lowl(T_FORMAT_DEF,(yyvsp[0].fmptr));}
#line 8166 "vex_parse.tab.c"
    break;

  case 845: /* threads_lowl: thread_def  */
#line 2018 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_THREAD_DEF,(yyvsp[0].thdptr));}
#line 8172 "vex_parse.tab.c"
    break;

  case 846: /* threads_lowl: channel_def  */
#line 2019 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_CHANNEL_DEF,(yyvsp[0].chdptr));}
#line 8178 "vex_parse.tab.c"
    break;

  case 847: /* threads_lowl: external_ref  */
#line 2020 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_REF,(yyvsp[0].exptr));}
#line 8184 "vex_parse.tab.c"
    break;

  case 848: /* threads_lowl: T_COMMENT  */
#line 2021 "./vex_parse.y"
                                        {(yyval.lwptr)=make_lowl(T_COMMENT,(yyvsp[0].sval));}
#line 8190 "vex_parse.tab.c"
    break;

  case 849: /* threads_lowl: T_COMMENT_TRAILING  */
#line 2022 "./vex_parse.y"
                            {(yyval.lwptr)=make_lowl(T_COMMENT_TRAILING,(yyvsp[0].sval));}
#line 8196 "vex_parse.tab.c"
    break;

  case 850: /* format_def: T_FORMAT_DEF '=' T_NAME ':' optional_name ':' optional_value ';'  */
#line 2026 "./vex_parse.y"
                                        {(yyval.fmptr)=make_format_def((yyvsp[-5].sval), (yyvsp[-3].sval), (yyvsp[-1].dvptr));}
#line 8202 "vex_parse.tab.c"
    break;

  case 851: /* format_def: T_FORMAT_DEF '=' T_NAME ':' optional_name ';'  */
#line 2028 "./vex_parse.y"
                                        {(yyval.fmptr)=make_format_def((yyvsp[-3].sval), (yyvsp[-1].sval), NULL);}
#line 8208 "vex_parse.tab.c"
    break;

  case 852: /* format_def: T_FORMAT_DEF '=' T_NAME ';'  */
#line 2030 "./vex_parse.y"
                                        {(yyval.fmptr)=make_format_def((yyvsp[-1].sval), NULL, NULL);}
#line 8214 "vex_parse.tab.c"
    break;

  case 853: /* thread_def: T_THREAD_DEF '=' value ':' value ':' value ':' value ':' value ':' value ':' optional_name ':' optional_name ':' optional_value ';'  */
#line 2036 "./vex_parse.y"
                                        {(yyval.thdptr)=make_thread_def((yyvsp[-17].dvptr), (yyvsp[-15].dvptr), (yyvsp[-13].dvptr), (yyvsp[-11].dvptr), (yyvsp[-9].dvptr), (yyvsp[-7].dvptr), (yyvsp[-5].sval), (yyvsp[-3].sval), (yyvsp[-1].dvptr));}
#line 8220 "vex_parse.tab.c"
    break;

  case 854: /* thread_def: T_THREAD_DEF '=' value ':' value ':' value ':' value ':' value ':' value ':' optional_name ':' optional_name ';'  */
#line 2039 "./vex_parse.y"
                                        {(yyval.thdptr)=make_thread_def((yyvsp[-15].dvptr), (yyvsp[-13].dvptr), (yyvsp[-11].dvptr), (yyvsp[-9].dvptr), (yyvsp[-7].dvptr), (yyvsp[-5].dvptr), (yyvsp[-3].sval), (yyvsp[-1].sval), NULL);}
#line 8226 "vex_parse.tab.c"
    break;

  case 855: /* thread_def: T_THREAD_DEF '=' value ':' value ':' value ':' value ':' value ':' value ':' optional_name ';'  */
#line 2042 "./vex_parse.y"
                                        {(yyval.thdptr)=make_thread_def((yyvsp[-13].dvptr), (yyvsp[-11].dvptr), (yyvsp[-9].dvptr), (yyvsp[-7].dvptr), (yyvsp[-5].dvptr), (yyvsp[-3].dvptr), (yyvsp[-1].sval), NULL, NULL);}
#line 8232 "vex_parse.tab.c"
    break;

  case 856: /* thread_def: T_THREAD_DEF '=' value ':' value ':' value ':' value ':' value ':' value ';'  */
#line 2044 "./vex_parse.y"
                                        {(yyval.thdptr)=make_thread_def((yyvsp[-11].dvptr), (yyvsp[-9].dvptr), (yyvsp[-7].dvptr), (yyvsp[-5].dvptr), (yyvsp[-3].dvptr), (yyvsp[-1].dvptr), NULL, NULL, NULL);}
#line 8238 "vex_parse.tab.c"
    break;

  case 857: /* channel_def: T_CHANNEL_DEF '=' T_LINK ':' value ':' value ';'  */
#line 2048 "./vex_parse.y"
                                        {(yyval.chdptr)=make_channel_def((yyvsp[-5].sval), (yyvsp[-3].dvptr), (yyvsp[-1].dvptr));}
#line 8244 "vex_parse.tab.c"
    break;

  case 858: /* optional_name: %empty  */
#line 2054 "./vex_parse.y"
                {(yyval.sval)=NULL;}
#line 8250 "vex_parse.tab.c"
    break;

  case 859: /* optional_name: T_NAME  */
#line 2055 "./vex_parse.y"
                {(yyval.sval)=(yyvsp[0].sval);}
#line 8256 "vex_parse.tab.c"
    break;

  case 860: /* optional_value: %empty  */
#line 2058 "./vex_parse.y"
                {(yyval.dvptr)=NULL;}
#line 8262 "vex_parse.tab.c"
    break;

  case 861: /* optional_value: value  */
#line 2059 "./vex_parse.y"
                {(yyval.dvptr)=(yyvsp[0].dvptr);}
#line 8268 "vex_parse.tab.c"
    break;

  case 862: /* external_ref: T_REF T_NAME ':' primitive '=' T_NAME ';'  */
#line 2062 "./vex_parse.y"
                                                {(yyval.exptr)=make_external((yyvsp[-5].sval),(yyvsp[-3].ival),(yyvsp[-1].sval));}
#line 8274 "vex_parse.tab.c"
    break;

  case 863: /* literal: T_LITERAL ';'  */
#line 2064 "./vex_parse.y"
                                        {(yyval.llptr)=(yyvsp[-1].llptr);}
#line 8280 "vex_parse.tab.c"
    break;

  case 864: /* unit_list: unit_value ':' unit_more  */
#line 2066 "./vex_parse.y"
                                                {(yyval.llptr)=ins_list((yyvsp[-2].dvptr),(yyvsp[0].llptr));}
#line 8286 "vex_parse.tab.c"
    break;

  case 865: /* unit_list: unit_value  */
#line 2067 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].dvptr));}
#line 8292 "vex_parse.tab.c"
    break;

  case 866: /* unit_more: unit_more ':' unit_option  */
#line 2069 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-2].llptr),(yyvsp[0].dvptr));}
#line 8298 "vex_parse.tab.c"
    break;

  case 867: /* unit_more: unit_option  */
#line 2070 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].dvptr));}
#line 8304 "vex_parse.tab.c"
    break;

  case 868: /* unit_option: unit_value  */
#line 2072 "./vex_parse.y"
                                                {(yyval.dvptr)=(yyvsp[0].dvptr);}
#line 8310 "vex_parse.tab.c"
    break;

  case 870: /* unit_value: T_NAME T_NAME  */
#line 2075 "./vex_parse.y"
                                        {(yyval.dvptr)=make_dvalue((yyvsp[-1].sval),(yyvsp[0].sval));}
#line 8316 "vex_parse.tab.c"
    break;

  case 871: /* name_list: name_list ':' name_value  */
#line 2077 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-2].llptr),(yyvsp[0].sval));}
#line 8322 "vex_parse.tab.c"
    break;

  case 872: /* name_list: name_value  */
#line 2078 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].sval));}
#line 8328 "vex_parse.tab.c"
    break;

  case 874: /* value_list: value_list ':' value  */
#line 2082 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-2].llptr),(yyvsp[0].dvptr));}
#line 8334 "vex_parse.tab.c"
    break;

  case 875: /* value_list: value  */
#line 2083 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].dvptr));}
#line 8340 "vex_parse.tab.c"
    break;

  case 876: /* value: T_NAME  */
#line 2085 "./vex_parse.y"
                                                {(yyval.dvptr)=make_dvalue((yyvsp[0].sval),NULL);}
#line 8346 "vex_parse.tab.c"
    break;

  case 877: /* value2: %empty  */
#line 2087 "./vex_parse.y"
                                                {(yyval.dvptr)=NULL;}
#line 8352 "vex_parse.tab.c"
    break;

  case 878: /* value2: T_NAME  */
#line 2088 "./vex_parse.y"
                                                {(yyval.dvptr)=make_dvalue((yyvsp[0].sval),NULL);}
#line 8358 "vex_parse.tab.c"
    break;

  case 879: /* unit_value2: %empty  */
#line 2090 "./vex_parse.y"
                                                {(yyval.dvptr)=NULL;}
#line 8364 "vex_parse.tab.c"
    break;

  case 880: /* unit_value2: T_NAME T_NAME  */
#line 2091 "./vex_parse.y"
                                                {(yyval.dvptr)=make_dvalue((yyvsp[-1].sval),(yyvsp[0].sval));}
#line 8370 "vex_parse.tab.c"
    break;

  case 881: /* name_or_not: %empty  */
#line 2093 "./vex_parse.y"
                          {(yyval.sval)=NULL;}
#line 8376 "vex_parse.tab.c"
    break;

  case 882: /* name_or_not: T_NAME  */
#line 2094 "./vex_parse.y"
                          {(yyval.sval)=(yyvsp[0].sval);}
#line 8382 "vex_parse.tab.c"
    break;

  case 883: /* link_list: link_list ':' T_LINK  */
#line 2096 "./vex_parse.y"
                                                {(yyval.llptr)=add_list((yyvsp[-2].llptr),(yyvsp[0].sval));}
#line 8388 "vex_parse.tab.c"
    break;

  case 884: /* link_list: T_LINK  */
#line 2097 "./vex_parse.y"
                                                {(yyval.llptr)=add_list(NULL,(yyvsp[0].sval));}
#line 8394 "vex_parse.tab.c"
    break;

  case 885: /* link_or_not: %empty  */
#line 2099 "./vex_parse.y"
                          {(yyval.sval)=NULL;}
#line 8400 "vex_parse.tab.c"
    break;

  case 886: /* link_or_not: T_LINK  */
#line 2100 "./vex_parse.y"
                          {(yyval.sval)=(yyvsp[0].sval);}
#line 8406 "vex_parse.tab.c"
    break;

  case 887: /* empty_value: %empty  */
#line 2102 "./vex_parse.y"
                          {(yyval.dvptr)=NULL;}
#line 8412 "vex_parse.tab.c"
    break;

  case 888: /* empty_name: %empty  */
#line 2104 "./vex_parse.y"
                          {(yyval.sval)=NULL;}
#line 8418 "vex_parse.tab.c"
    break;


#line 8422 "vex_parse.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 2106 "./vex_parse.y"


void yyerror(s)
char const *s;
{
  fprintf(stderr,"%s at line %d\n",s,lines);
  exit(1);
}
