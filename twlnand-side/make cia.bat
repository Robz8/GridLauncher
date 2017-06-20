@echo off
make_cia --srl="DSiWare.nds"
copy "DSiWare.cia" "../gridlauncher/cia/GridLauncher - TWLNAND side.cia"
pause