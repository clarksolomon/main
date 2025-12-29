-----------------------------------------------------------------------

Script:         CPUINSTALL.md
Author:         Solomon Clark
Date:           13 Jan, 2026
Description:    This file is meant to be a guide to navigate the specific pitfalls you may encounter while following the
                install instructions from the main DiFX wiki: https://github.com/difx/difx/wiki/difx-installation
                
                * NOTE * 

                This guide is specifically for someone desiring to do the install MANUALLY! (Using install-difx)

-----------------------------------------------------------------------

Change Log: 
-----------

Date            Author          Description
----            ------          -----------
2026-01-13      S. Clark        Writing first iteration


-----------------------------------------------------------------------

TO-DO
-----

1.  Look into issue with mpifxcorr compile process looking for NEWS file
2.  Include instructions for sourcing vars.sh in the ipp directory to fix ipp path issues
3.  Mention using genipppc.pc for issues with linking ipp paths
4.  How to setup and edit ~/.bashrc environment variables
5.  How to setup and edit difx/source/path/setup.bash environment variables
6.  Include note about gaining sudo access, and/or add instructions for if you don't have sudo access

-----------------------------------------------------------------------

Useful Links: 
-------------

A detailed graphic on the various packages within DiFX and their dependencies can be found at: https://github.com/difx/difx/blob/main/doc/userguide/difxdependency.pdf

A detailed list of many of the software packages involved in running DiFX can be found here:  https://difx.readthedocs.io/en/stable/sources/difx_programs.html

A detailed list of the various file formats included within DiFX can be found here: https://difx.readthedocs.io/en/stable/sources/difx_files.html

-----------------------------------------------------------------------

Assumptions : 

User has already cloned and checked out the latest stable version of DiFX from Github. 

-----------------------------------------------------------------------

1.  Installing Dependencies

    

    - MPI
        1.  To install Open MPI, you can follow the link from the MPI section of the DiFX installation wiki: 
            https://github.com/difx/difx/wiki/difx-installation. Once there, select a tarball of the latest version, copy the link address, $ cd to the directory you want to hold MPI, and $ wget <link to MPI tarball>. 
        2.  From there, you just untar the tarball and you should have all of 
            

    - FFTW
        1.  First, check to see if FFTW is included in your Linux distribution with $ which fftw, this might require a tab complete
        2.  If FFTW is not included in your distribution, you can download the latest distribution from fftw.org/download.html
            as of right now, the current version is 3.3.10
        
    - IPP
        1.  The process for installing IPP can be found at: 
            https://www.intel.com/content/www/us/en/developer/tools/oneapi/ipp-download.html?operatingsystem=linux&linux-install=offline. You can choose to follow the offline/online install instructions, or you can choose to install 
            with a package manager of choice as listed on the webpage. As I am aware, the latest version of the IPP library is 2022.2. 

            Depending on the version of DiFX you are working with, you may run into issues with DiFX recognizing the file structure of your IPP library. This issue will be addressed later in the document. 
        2.  

    - CUDA (GPU IMPLEMENTATION ONLY)
        1.  The CUDA toolkit can be installed directly from Nvidia's website: https://developer.nvidia.com/cuda-downloads. 
            Just select your OS, arch, distribution, and version, then select the install type of your choice and follow the listed steps. 

2. Setting Up and Running Install Script

    - Editing .bashrc

    - Editing setup.bash
        1.  Start by editing the base version of setup.bash included in the Github repo checkout. 
        2.  For the manual install of DiFX, we will have to custom set a number of the environment variables within our setup.bash 
            script so that the compiler will be able to find and access various libraries. 

            1.  Set the DIFXROOT variable to the location of the directory in which you want DiFX to be installed. This will likely
                be specific to your machine. 
            2.  Set DIFX_PREFIX to $DIFXROOT
            3.  Set PGPLOTDIR to the directory containing the top directory of pgplot. To find where this is, you can run a
                find on your machine and look for "pgplot*"
            4.  Set the IPPROOT env variable to the location of 

    

    - Compiling mpifxcorr
        1.  Make sure you have sourced your ~/.bashrc and /setup.bash files so that you have the correct software beneath you
            before you install
        2.  Ensure that your Makefile.am has the correct paths, environment variables, and version (cpu/gpu) information
        3.  There is a chance that following the preliminary instructions in the README will cause the compiler to look for
            a file called NEWS. I've found that just creating a blank file with that name will bypass this with no issues 
            ($ touch NEWS)
        4.  Follow README 

    - Running install-difx

Link for understanding the end of the Makefile.am: https://www.gnu.org/software/make/manual/html_node/Suffix-Rules.html