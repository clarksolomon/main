/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_VEX_PARSE_H_INCLUDED
# define YY_YY_VEX_PARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_VEX_REV = 258,               /* T_VEX_REV  */
    T_REF = 259,                   /* T_REF  */
    T_DEF = 260,                   /* T_DEF  */
    T_ENDDEF = 261,                /* T_ENDDEF  */
    T_SCAN = 262,                  /* T_SCAN  */
    T_ENDSCAN = 263,               /* T_ENDSCAN  */
    T_CHAN_DEF = 264,              /* T_CHAN_DEF  */
    T_SAMPLE_RATE = 265,           /* T_SAMPLE_RATE  */
    T_BITS_PER_SAMPLE = 266,       /* T_BITS_PER_SAMPLE  */
    T_SWITCHING_CYCLE = 267,       /* T_SWITCHING_CYCLE  */
    T_START = 268,                 /* T_START  */
    T_SOURCE = 269,                /* T_SOURCE  */
    T_MODE = 270,                  /* T_MODE  */
    T_STATION = 271,               /* T_STATION  */
    T_DATA_TRANSFER = 272,         /* T_DATA_TRANSFER  */
    T_INTENT = 273,                /* T_INTENT  */
    T_POINTING_OFFSET = 274,       /* T_POINTING_OFFSET  */
    T_ANTENNA_DIAM = 275,          /* T_ANTENNA_DIAM  */
    T_AXIS_OFFSET = 276,           /* T_AXIS_OFFSET  */
    T_ANTENNA_MOTION = 277,        /* T_ANTENNA_MOTION  */
    T_POINTING_SECTOR = 278,       /* T_POINTING_SECTOR  */
    T_AXIS_TYPE = 279,             /* T_AXIS_TYPE  */
    T_NASMYTH = 280,               /* T_NASMYTH  */
    T_BBC_ASSIGN = 281,            /* T_BBC_ASSIGN  */
    T_STREAM_DEF = 282,            /* T_STREAM_DEF  */
    T_STREAM_SAMPLE_RATE = 283,    /* T_STREAM_SAMPLE_RATE  */
    T_STREAM_LABEL = 284,          /* T_STREAM_LABEL  */
    T_CLOCK_EARLY = 285,           /* T_CLOCK_EARLY  */
    T_RECORD_TRANSPORT_TYPE = 286, /* T_RECORD_TRANSPORT_TYPE  */
    T_ELECTRONICS_RACK_TYPE = 287, /* T_ELECTRONICS_RACK_TYPE  */
    T_NUMBER_DRIVES = 288,         /* T_NUMBER_DRIVES  */
    T_HEADSTACK = 289,             /* T_HEADSTACK  */
    T_RECORD_DENSITY = 290,        /* T_RECORD_DENSITY  */
    T_TAPE_LENGTH = 291,           /* T_TAPE_LENGTH  */
    T_RECORDING_SYSTEM_ID = 292,   /* T_RECORDING_SYSTEM_ID  */
    T_TAPE_MOTION = 293,           /* T_TAPE_MOTION  */
    T_TAPE_CONTROL = 294,          /* T_TAPE_CONTROL  */
    T_EQUIP = 295,                 /* T_EQUIP  */
    T_COMPOSITE_EQUIP = 296,       /* T_COMPOSITE_EQUIP  */
    T_EQUIP_SET = 297,             /* T_EQUIP_SET  */
    T_EQUIP_INFO = 298,            /* T_EQUIP_INFO  */
    T_CONNECTION = 299,            /* T_CONNECTION  */
    T_RECORD_METHOD = 300,         /* T_RECORD_METHOD  */
    T_RECORD_CONTROL = 301,        /* T_RECORD_CONTROL  */
    T_DATASTREAM = 302,            /* T_DATASTREAM  */
    T_THREAD = 303,                /* T_THREAD  */
    T_CHANNEL = 304,               /* T_CHANNEL  */
    T_MERGED_DATASTREAM = 305,     /* T_MERGED_DATASTREAM  */
    T_TAI_UTC = 306,               /* T_TAI_UTC  */
    T_A1_TAI = 307,                /* T_A1_TAI  */
    T_EOP_REF_EPOCH = 308,         /* T_EOP_REF_EPOCH  */
    T_NUM_EOP_POINTS = 309,        /* T_NUM_EOP_POINTS  */
    T_EOP_INTERVAL = 310,          /* T_EOP_INTERVAL  */
    T_UT1_UTC = 311,               /* T_UT1_UTC  */
    T_X_WOBBLE = 312,              /* T_X_WOBBLE  */
    T_Y_WOBBLE = 313,              /* T_Y_WOBBLE  */
    T_NUT_REF_EPOCH = 314,         /* T_NUT_REF_EPOCH  */
    T_NUM_NUT_POINTS = 315,        /* T_NUM_NUT_POINTS  */
    T_NUT_INTERVAL = 316,          /* T_NUT_INTERVAL  */
    T_DELTA_PSI = 317,             /* T_DELTA_PSI  */
    T_DELTA_EPS = 318,             /* T_DELTA_EPS  */
    T_NUT_MODEL = 319,             /* T_NUT_MODEL  */
    T_EOP_ORIGIN = 320,            /* T_EOP_ORIGIN  */
    T_DELTA_X_NUT = 321,           /* T_DELTA_X_NUT  */
    T_DELTA_Y_NUT = 322,           /* T_DELTA_Y_NUT  */
    T_NUT_ORIGIN = 323,            /* T_NUT_ORIGIN  */
    T_EXPER_NUM = 324,             /* T_EXPER_NUM  */
    T_EXPER_NAME = 325,            /* T_EXPER_NAME  */
    T_EXPER_NOMINAL_START = 326,   /* T_EXPER_NOMINAL_START  */
    T_EXPER_NOMINAL_STOP = 327,    /* T_EXPER_NOMINAL_STOP  */
    T_PI_NAME = 328,               /* T_PI_NAME  */
    T_PI_EMAIL = 329,              /* T_PI_EMAIL  */
    T_CONTACT_NAME = 330,          /* T_CONTACT_NAME  */
    T_CONTACT_EMAIL = 331,         /* T_CONTACT_EMAIL  */
    T_SCHEDULER_NAME = 332,        /* T_SCHEDULER_NAME  */
    T_SCHEDULER_EMAIL = 333,       /* T_SCHEDULER_EMAIL  */
    T_TARGET_CORRELATOR = 334,     /* T_TARGET_CORRELATOR  */
    T_EXPER_DESCRIPTION = 335,     /* T_EXPER_DESCRIPTION  */
    T_SCHEDULING_SOFTWARE = 336,   /* T_SCHEDULING_SOFTWARE  */
    T_VEX_FILE_WRITER = 337,       /* T_VEX_FILE_WRITER  */
    T_EXTENSION = 338,             /* T_EXTENSION  */
    T_HEADSTACK_POS = 339,         /* T_HEADSTACK_POS  */
    T_IF_DEF = 340,                /* T_IF_DEF  */
    T_RECEIVER_NAME = 341,         /* T_RECEIVER_NAME  */
    T_SUB_LO_FREQUENCIES = 342,    /* T_SUB_LO_FREQUENCIES  */
    T_SUB_LO_SIDEBANDS = 343,      /* T_SUB_LO_SIDEBANDS  */
    T_SWITCHED_POWER = 344,        /* T_SWITCHED_POWER  */
    T_PASS_ORDER = 345,            /* T_PASS_ORDER  */
    T_S2_GROUP_ORDER = 346,        /* T_S2_GROUP_ORDER  */
    T_PHASE_CAL_DETECT = 347,      /* T_PHASE_CAL_DETECT  */
    T_TAPE_CHANGE = 348,           /* T_TAPE_CHANGE  */
    T_NEW_SOURCE_COMMAND = 349,    /* T_NEW_SOURCE_COMMAND  */
    T_NEW_TAPE_SETUP = 350,        /* T_NEW_TAPE_SETUP  */
    T_SETUP_ALWAYS = 351,          /* T_SETUP_ALWAYS  */
    T_PARITY_CHECK = 352,          /* T_PARITY_CHECK  */
    T_TAPE_PREPASS = 353,          /* T_TAPE_PREPASS  */
    T_PREOB_CAL = 354,             /* T_PREOB_CAL  */
    T_MIDOB_CAL = 355,             /* T_MIDOB_CAL  */
    T_POSTOB_CAL = 356,            /* T_POSTOB_CAL  */
    T_HEADSTACK_MOTION = 357,      /* T_HEADSTACK_MOTION  */
    T_PROCEDURE_NAME_PREFIX = 358, /* T_PROCEDURE_NAME_PREFIX  */
    T_ROLL_REINIT_PERIOD = 359,    /* T_ROLL_REINIT_PERIOD  */
    T_ROLL_INC_PERIOD = 360,       /* T_ROLL_INC_PERIOD  */
    T_ROLL = 361,                  /* T_ROLL  */
    T_ROLL_DEF = 362,              /* T_ROLL_DEF  */
    T_SEFD_MODEL = 363,            /* T_SEFD_MODEL  */
    T_SEFD = 364,                  /* T_SEFD  */
    T_SITE_TYPE = 365,             /* T_SITE_TYPE  */
    T_SITE_NAME = 366,             /* T_SITE_NAME  */
    T_SITE_ID = 367,               /* T_SITE_ID  */
    T_SITE_POSITION = 368,         /* T_SITE_POSITION  */
    T_SITE_POSITION_EPOCH = 369,   /* T_SITE_POSITION_EPOCH  */
    T_SITE_POSITION_REF = 370,     /* T_SITE_POSITION_REF  */
    T_SITE_VELOCITY = 371,         /* T_SITE_VELOCITY  */
    T_HORIZON_MAP_AZ = 372,        /* T_HORIZON_MAP_AZ  */
    T_HORIZON_MAP_EL = 373,        /* T_HORIZON_MAP_EL  */
    T_ZEN_ATMOS = 374,             /* T_ZEN_ATMOS  */
    T_OCEAN_LOAD_VERT = 375,       /* T_OCEAN_LOAD_VERT  */
    T_OCEAN_LOAD_HORIZ = 376,      /* T_OCEAN_LOAD_HORIZ  */
    T_OCCUPATION_CODE = 377,       /* T_OCCUPATION_CODE  */
    T_INCLINATION = 378,           /* T_INCLINATION  */
    T_ECCENTRICITY = 379,          /* T_ECCENTRICITY  */
    T_ARG_PERIGEE = 380,           /* T_ARG_PERIGEE  */
    T_ASCENDING_NODE = 381,        /* T_ASCENDING_NODE  */
    T_MEAN_ANOMALY = 382,          /* T_MEAN_ANOMALY  */
    T_SEMI_MAJOR_AXIS = 383,       /* T_SEMI_MAJOR_AXIS  */
    T_MEAN_MOTION = 384,           /* T_MEAN_MOTION  */
    T_ORBIT_EPOCH = 385,           /* T_ORBIT_EPOCH  */
    T_SOURCE_TYPE = 386,           /* T_SOURCE_TYPE  */
    T_SOURCE_NAME = 387,           /* T_SOURCE_NAME  */
    T_IAU_NAME = 388,              /* T_IAU_NAME  */
    T_RA = 389,                    /* T_RA  */
    T_DEC = 390,                   /* T_DEC  */
    T_SOURCE_POSITION_REF = 391,   /* T_SOURCE_POSITION_REF  */
    T_RA_RATE = 392,               /* T_RA_RATE  */
    T_DEC_RATE = 393,              /* T_DEC_RATE  */
    T_SOURCE_POSITION_EPOCH = 394, /* T_SOURCE_POSITION_EPOCH  */
    T_REF_COORD_FRAME = 395,       /* T_REF_COORD_FRAME  */
    T_VELOCITY_WRT_LSR = 396,      /* T_VELOCITY_WRT_LSR  */
    T_SOURCE_MODEL = 397,          /* T_SOURCE_MODEL  */
    T_BSP_FILE_NAME = 398,         /* T_BSP_FILE_NAME  */
    T_BSP_OBJECT_ID = 399,         /* T_BSP_OBJECT_ID  */
    T_TLE0 = 400,                  /* T_TLE0  */
    T_TLE1 = 401,                  /* T_TLE1  */
    T_TLE2 = 402,                  /* T_TLE2  */
    T_DATUM = 403,                 /* T_DATUM  */
    T_VECTOR = 404,                /* T_VECTOR  */
    T_VSN = 405,                   /* T_VSN  */
    T_FANIN_DEF = 406,             /* T_FANIN_DEF  */
    T_FANOUT_DEF = 407,            /* T_FANOUT_DEF  */
    T_TRACK_FRAME_FORMAT = 408,    /* T_TRACK_FRAME_FORMAT  */
    T_DATA_MODULATION = 409,       /* T_DATA_MODULATION  */
    T_VLBA_FRMTR_SYS_TRK = 410,    /* T_VLBA_FRMTR_SYS_TRK  */
    T_VLBA_TRNSPRT_SYS_TRK = 411,  /* T_VLBA_TRNSPRT_SYS_TRK  */
    T_S2_RECORDING_MODE = 412,     /* T_S2_RECORDING_MODE  */
    T_S2_DATA_SOURCE = 413,        /* T_S2_DATA_SOURCE  */
    T_FORMAT_DEF = 414,            /* T_FORMAT_DEF  */
    T_THREAD_DEF = 415,            /* T_THREAD_DEF  */
    T_CHANNEL_DEF = 416,           /* T_CHANNEL_DEF  */
    B_GLOBAL = 417,                /* B_GLOBAL  */
    B_STATION = 418,               /* B_STATION  */
    B_MODE = 419,                  /* B_MODE  */
    B_SCHED = 420,                 /* B_SCHED  */
    B_EXPER = 421,                 /* B_EXPER  */
    B_SCHEDULING_PARAMS = 422,     /* B_SCHEDULING_PARAMS  */
    B_PROCEDURES = 423,            /* B_PROCEDURES  */
    B_EOP = 424,                   /* B_EOP  */
    B_FREQ = 425,                  /* B_FREQ  */
    B_CLOCK = 426,                 /* B_CLOCK  */
    B_ANTENNA = 427,               /* B_ANTENNA  */
    B_BBC = 428,                   /* B_BBC  */
    B_CORR = 429,                  /* B_CORR  */
    B_DAS = 430,                   /* B_DAS  */
    B_HEAD_POS = 431,              /* B_HEAD_POS  */
    B_PASS_ORDER = 432,            /* B_PASS_ORDER  */
    B_PHASE_CAL_DETECT = 433,      /* B_PHASE_CAL_DETECT  */
    B_ROLL = 434,                  /* B_ROLL  */
    B_IF = 435,                    /* B_IF  */
    B_SEFD = 436,                  /* B_SEFD  */
    B_SITE = 437,                  /* B_SITE  */
    B_SOURCE = 438,                /* B_SOURCE  */
    B_TRACKS = 439,                /* B_TRACKS  */
    B_TAPELOG_OBS = 440,           /* B_TAPELOG_OBS  */
    B_BITSTREAMS = 441,            /* B_BITSTREAMS  */
    B_THREADS = 442,               /* B_THREADS  */
    B_DATASTREAMS = 443,           /* B_DATASTREAMS  */
    B_EXTENSIONS = 444,            /* B_EXTENSIONS  */
    T_LITERAL = 445,               /* T_LITERAL  */
    T_NAME = 446,                  /* T_NAME  */
    T_LINK = 447,                  /* T_LINK  */
    T_ANGLE = 448,                 /* T_ANGLE  */
    T_COMMENT = 449,               /* T_COMMENT  */
    T_COMMENT_TRAILING = 450       /* T_COMMENT_TRAILING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_VEX_REV 258
#define T_REF 259
#define T_DEF 260
#define T_ENDDEF 261
#define T_SCAN 262
#define T_ENDSCAN 263
#define T_CHAN_DEF 264
#define T_SAMPLE_RATE 265
#define T_BITS_PER_SAMPLE 266
#define T_SWITCHING_CYCLE 267
#define T_START 268
#define T_SOURCE 269
#define T_MODE 270
#define T_STATION 271
#define T_DATA_TRANSFER 272
#define T_INTENT 273
#define T_POINTING_OFFSET 274
#define T_ANTENNA_DIAM 275
#define T_AXIS_OFFSET 276
#define T_ANTENNA_MOTION 277
#define T_POINTING_SECTOR 278
#define T_AXIS_TYPE 279
#define T_NASMYTH 280
#define T_BBC_ASSIGN 281
#define T_STREAM_DEF 282
#define T_STREAM_SAMPLE_RATE 283
#define T_STREAM_LABEL 284
#define T_CLOCK_EARLY 285
#define T_RECORD_TRANSPORT_TYPE 286
#define T_ELECTRONICS_RACK_TYPE 287
#define T_NUMBER_DRIVES 288
#define T_HEADSTACK 289
#define T_RECORD_DENSITY 290
#define T_TAPE_LENGTH 291
#define T_RECORDING_SYSTEM_ID 292
#define T_TAPE_MOTION 293
#define T_TAPE_CONTROL 294
#define T_EQUIP 295
#define T_COMPOSITE_EQUIP 296
#define T_EQUIP_SET 297
#define T_EQUIP_INFO 298
#define T_CONNECTION 299
#define T_RECORD_METHOD 300
#define T_RECORD_CONTROL 301
#define T_DATASTREAM 302
#define T_THREAD 303
#define T_CHANNEL 304
#define T_MERGED_DATASTREAM 305
#define T_TAI_UTC 306
#define T_A1_TAI 307
#define T_EOP_REF_EPOCH 308
#define T_NUM_EOP_POINTS 309
#define T_EOP_INTERVAL 310
#define T_UT1_UTC 311
#define T_X_WOBBLE 312
#define T_Y_WOBBLE 313
#define T_NUT_REF_EPOCH 314
#define T_NUM_NUT_POINTS 315
#define T_NUT_INTERVAL 316
#define T_DELTA_PSI 317
#define T_DELTA_EPS 318
#define T_NUT_MODEL 319
#define T_EOP_ORIGIN 320
#define T_DELTA_X_NUT 321
#define T_DELTA_Y_NUT 322
#define T_NUT_ORIGIN 323
#define T_EXPER_NUM 324
#define T_EXPER_NAME 325
#define T_EXPER_NOMINAL_START 326
#define T_EXPER_NOMINAL_STOP 327
#define T_PI_NAME 328
#define T_PI_EMAIL 329
#define T_CONTACT_NAME 330
#define T_CONTACT_EMAIL 331
#define T_SCHEDULER_NAME 332
#define T_SCHEDULER_EMAIL 333
#define T_TARGET_CORRELATOR 334
#define T_EXPER_DESCRIPTION 335
#define T_SCHEDULING_SOFTWARE 336
#define T_VEX_FILE_WRITER 337
#define T_EXTENSION 338
#define T_HEADSTACK_POS 339
#define T_IF_DEF 340
#define T_RECEIVER_NAME 341
#define T_SUB_LO_FREQUENCIES 342
#define T_SUB_LO_SIDEBANDS 343
#define T_SWITCHED_POWER 344
#define T_PASS_ORDER 345
#define T_S2_GROUP_ORDER 346
#define T_PHASE_CAL_DETECT 347
#define T_TAPE_CHANGE 348
#define T_NEW_SOURCE_COMMAND 349
#define T_NEW_TAPE_SETUP 350
#define T_SETUP_ALWAYS 351
#define T_PARITY_CHECK 352
#define T_TAPE_PREPASS 353
#define T_PREOB_CAL 354
#define T_MIDOB_CAL 355
#define T_POSTOB_CAL 356
#define T_HEADSTACK_MOTION 357
#define T_PROCEDURE_NAME_PREFIX 358
#define T_ROLL_REINIT_PERIOD 359
#define T_ROLL_INC_PERIOD 360
#define T_ROLL 361
#define T_ROLL_DEF 362
#define T_SEFD_MODEL 363
#define T_SEFD 364
#define T_SITE_TYPE 365
#define T_SITE_NAME 366
#define T_SITE_ID 367
#define T_SITE_POSITION 368
#define T_SITE_POSITION_EPOCH 369
#define T_SITE_POSITION_REF 370
#define T_SITE_VELOCITY 371
#define T_HORIZON_MAP_AZ 372
#define T_HORIZON_MAP_EL 373
#define T_ZEN_ATMOS 374
#define T_OCEAN_LOAD_VERT 375
#define T_OCEAN_LOAD_HORIZ 376
#define T_OCCUPATION_CODE 377
#define T_INCLINATION 378
#define T_ECCENTRICITY 379
#define T_ARG_PERIGEE 380
#define T_ASCENDING_NODE 381
#define T_MEAN_ANOMALY 382
#define T_SEMI_MAJOR_AXIS 383
#define T_MEAN_MOTION 384
#define T_ORBIT_EPOCH 385
#define T_SOURCE_TYPE 386
#define T_SOURCE_NAME 387
#define T_IAU_NAME 388
#define T_RA 389
#define T_DEC 390
#define T_SOURCE_POSITION_REF 391
#define T_RA_RATE 392
#define T_DEC_RATE 393
#define T_SOURCE_POSITION_EPOCH 394
#define T_REF_COORD_FRAME 395
#define T_VELOCITY_WRT_LSR 396
#define T_SOURCE_MODEL 397
#define T_BSP_FILE_NAME 398
#define T_BSP_OBJECT_ID 399
#define T_TLE0 400
#define T_TLE1 401
#define T_TLE2 402
#define T_DATUM 403
#define T_VECTOR 404
#define T_VSN 405
#define T_FANIN_DEF 406
#define T_FANOUT_DEF 407
#define T_TRACK_FRAME_FORMAT 408
#define T_DATA_MODULATION 409
#define T_VLBA_FRMTR_SYS_TRK 410
#define T_VLBA_TRNSPRT_SYS_TRK 411
#define T_S2_RECORDING_MODE 412
#define T_S2_DATA_SOURCE 413
#define T_FORMAT_DEF 414
#define T_THREAD_DEF 415
#define T_CHANNEL_DEF 416
#define B_GLOBAL 417
#define B_STATION 418
#define B_MODE 419
#define B_SCHED 420
#define B_EXPER 421
#define B_SCHEDULING_PARAMS 422
#define B_PROCEDURES 423
#define B_EOP 424
#define B_FREQ 425
#define B_CLOCK 426
#define B_ANTENNA 427
#define B_BBC 428
#define B_CORR 429
#define B_DAS 430
#define B_HEAD_POS 431
#define B_PASS_ORDER 432
#define B_PHASE_CAL_DETECT 433
#define B_ROLL 434
#define B_IF 435
#define B_SEFD 436
#define B_SITE 437
#define B_SOURCE 438
#define B_TRACKS 439
#define B_TAPELOG_OBS 440
#define B_BITSTREAMS 441
#define B_THREADS 442
#define B_DATASTREAMS 443
#define B_EXTENSIONS 444
#define T_LITERAL 445
#define T_NAME 446
#define T_LINK 447
#define T_ANGLE 448
#define T_COMMENT 449
#define T_COMMENT_TRAILING 450

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 39 "vex_parse.y"

int                     ival;
char                   *sval;
struct llist           *llptr;
struct qref            *qrptr;
struct def             *dfptr;
struct block           *blptr;
struct lowl            *lwptr;
struct dvalue          *dvptr;
struct external        *exptr;

struct chan_def        *cdptr;
struct switching_cycle *scptr;

struct station         *snptr;
struct source          *soptr;
struct intent          *inptr;
struct data_transfer   *dtptr;
struct pointing_offset *ptptr;

struct axis_type       *atptr;
struct antenna_motion  *amptr;
struct pointing_sector *psptr;
struct nasmyth         *nsptr;

struct bbc_assign      *baptr;

struct stream_def      *sdptr;
struct stream_sample_rate *ssptr;
struct stream_label    *slptr;

struct headstack       *hsptr;

struct clock_early     *ceptr;

struct tape_length     *tlptr;
struct tape_motion     *tmptr;
struct equip           *eqptr;
struct composite_equip *cqptr;
struct equip_set       *esptr;
struct equip_info      *eiptr;
struct connection      *coptr;
struct record_method   *rmptr;

struct datastream      *daptr;
struct thread          *thptr;
struct channel         *chptr;
struct merged_datastream *mdptr;

struct eop_origin      *eoptr;
struct nut_origin      *noptr;

struct exper_name      *enptr;
struct scheduling_software  *schsptr;
struct vex_file_writer *vfwptr;

struct extension       *etptr;

struct headstack_pos   *hpptr;

struct if_def          *ifptr;
struct receiver_name   *rnptr;
struct sub_lo_frequencies   *sfptr;
struct sub_lo_sidebands   *sbptr;
struct switched_power   *swptr;

struct phase_cal_detect *pdptr;

struct setup_always    *saptr;
struct parity_check    *pcptr;
struct tape_prepass    *tpptr;
struct preob_cal       *prptr;
struct midob_cal       *miptr;
struct postob_cal      *poptr;

struct sefd            *septr;

struct site_id         *siptr;
struct site_position   *spptr;
struct site_velocity   *svptr;
struct ocean_load_vert *ovptr;
struct ocean_load_horiz *ohptr;

struct source_type     *stptr;
struct source_model    *smptr;

struct datum           *dmptr;
struct c_vector          *vrptr;

struct vsn             *vsptr;

struct fanin_def	*fiptr;
struct fanout_def	*foptr;
struct vlba_frmtr_sys_trk	*fsptr;
struct s2_data_source  *dsptr;

struct format_def  *fmptr;
struct thread_def  *thdptr;
struct channel_def *chdptr;


#line 559 "vex_parse.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_VEX_PARSE_H_INCLUDED  */
