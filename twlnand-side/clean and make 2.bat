@echo off
make clean
make
d:/python27/python.exe patch_ndsheader_dsiware.py TWLNAND-side.nds --mode dsi --maker 01 --code GRID --title "GRIDLAUNCHER" --out DSiWare.nds
make_cia --srl="DSiWare.nds"
copy "DSiWare.cia" "../gridlauncher/cia/GridLauncher - TWLNAND side.cia"
pause