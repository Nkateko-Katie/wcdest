 




#include "config.h" //generated by autoconf

#ifndef lint
static char version[] = PACKAGE_VERSION;

#endif /* lint */


/*


Copyright (C) Scott Hazelhurst     2003-2016
              School of Electrical and Information Engineering
              University of the Witwatersrand,
	      Johannesburg
	      Private Bag 3, 2050 Wits
              South Africa
              scott.hazelhurst@wits.ac.za


     This program is free software; you can redistribute it and/or
     modify it under the terms of the GNU General Public Licence
     as published by the Free Software Foundation; either version 2
     of the Licence, or (at your option) any later version.
     
     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public Licence for more details.

     http://github.com/shaze



*/



#ifndef __WCDHINCL

#define __WCDHINCL








#include "common.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>
#ifndef WIN32
#include <sys/times.h>
#else
typedef unsigned int uint;
typedef struct tms {int tms_utime; int tms_stime;} tms;
#endif

#define MPIORIENT


#ifdef PTHREAD
#define PTHREADS
#endif


typedef struct ProgOptionsType  {
  FILE * edfile;
  char * clfname1;
  char * clfname2;
  char * consfname1;
  char * consfname2;
  char * dname;
  char * parmfile;
  char * dirname;
  char * checkpoint;
  char * split;
  int  clthresh;
  int  clonelink;
  int  clustercomp;
  int  do_dump;
  int  domerge;
  int  doadd;
  int  flag; 
  int  index;  
  int  init_cluster;
  int  pairwise;
  int  range;
  int  restore;
  //int  rc_check;
  int  recluster;
  int  show_clust; 
  int  show_comp;
  int  show_ext;
  int  show_histo;
  int  show_index;
  int  show_perf;
  int  show_version;
  int  statgen;
  int  gen_opt;
} ProgOptionsType;

// Flags for gen_opt


#define GO_FLAG_COPYANDRC 2  
#define GO_FLAG_ADJSYMM   3
#define GO_FLAG_ADJ       4

void do_pairwise_cluster(WorkPtr work);

void complete_pairwise_cluster(WorkPtr work, int i, int * candidates, int num_cands);

void complete_klink_prep(FILE * outf, WorkPtr work, int i, 
			 int * candidates, int num_cands);


#endif

