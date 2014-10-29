#include <3ds.h>
#include "font.h"
charDesc_s font2Desc[] = {
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){' ', 118, 32, 2, 1, 0, 12, 2, &font2Data[0]},
	(charDesc_s){'!', 94, 26, 2, 7, 0, 3, 2, &font2Data[2]},
	(charDesc_s){'"', 60, 34, 3, 3, 0, 3, 3, &font2Data[16]},
	(charDesc_s){'#', 175, 9, 6, 7, 0, 3, 5, &font2Data[25]},
	(charDesc_s){'$', 110, 0, 5, 9, 0, 2, 5, &font2Data[67]},
	(charDesc_s){'%', 83, 10, 8, 7, 0, 3, 8, &font2Data[112]},
	(charDesc_s){'&', 92, 10, 8, 7, 0, 3, 7, &font2Data[168]},
	(charDesc_s){'\'', 67, 34, 2, 3, 0, 3, 2, &font2Data[224]},
	(charDesc_s){'(', 148, 0, 3, 9, 0, 3, 3, &font2Data[230]},
	(charDesc_s){')', 128, 0, 3, 9, 0, 3, 3, &font2Data[257]},
	(charDesc_s){'*', 5, 36, 4, 4, 0, 3, 4, &font2Data[284]},
	(charDesc_s){'+', 162, 26, 6, 5, 0, 5, 6, &font2Data[300]},
	(charDesc_s){',', 64, 34, 2, 3, 0, 9, 2, &font2Data[330]},
	(charDesc_s){'-', 107, 33, 3, 1, 0, 7, 4, &font2Data[336]},
	(charDesc_s){'.', 115, 32, 2, 1, 0, 9, 2, &font2Data[339]},
	(charDesc_s){'/', 6, 10, 5, 8, -1, 3, 3, &font2Data[341]},
	(charDesc_s){'0', 226, 17, 5, 7, 0, 3, 5, &font2Data[381]},
	(charDesc_s){'1', 70, 26, 3, 7, 0, 3, 5, &font2Data[416]},
	(charDesc_s){'2', 232, 17, 5, 7, 0, 3, 5, &font2Data[437]},
	(charDesc_s){'3', 238, 17, 5, 7, 0, 3, 5, &font2Data[472]},
	(charDesc_s){'4', 203, 9, 6, 7, 0, 3, 5, &font2Data[507]},
	(charDesc_s){'5', 12, 27, 5, 7, 0, 3, 5, &font2Data[549]},
	(charDesc_s){'6', 18, 27, 5, 7, 0, 3, 5, &font2Data[584]},
	(charDesc_s){'7', 124, 18, 5, 7, 0, 3, 5, &font2Data[619]},
	(charDesc_s){'8', 28, 19, 5, 7, 0, 3, 5, &font2Data[654]},
	(charDesc_s){'9', 34, 18, 5, 7, 0, 3, 5, &font2Data[689]},
	(charDesc_s){':', 239, 25, 2, 5, 0, 5, 2, &font2Data[724]},
	(charDesc_s){';', 85, 26, 2, 7, 0, 5, 2, &font2Data[734]},
	(charDesc_s){'<', 205, 25, 5, 5, 1, 5, 6, &font2Data[748]},
	(charDesc_s){'=', 36, 34, 6, 3, 0, 6, 6, &font2Data[773]},
	(charDesc_s){'>', 199, 25, 5, 5, 1, 5, 6, &font2Data[791]},
	(charDesc_s){'?', 40, 18, 5, 7, 0, 3, 4, &font2Data[816]},
	(charDesc_s){'@', 168, 0, 8, 8, 0, 3, 9, &font2Data[851]},
	(charDesc_s){'A', 238, 9, 6, 7, 0, 3, 6, &font2Data[915]},
	(charDesc_s){'B', 46, 18, 5, 7, 0, 3, 5, &font2Data[957]},
	(charDesc_s){'C', 21, 19, 6, 7, 0, 3, 6, &font2Data[992]},
	(charDesc_s){'D', 147, 10, 6, 7, 0, 3, 6, &font2Data[1034]},
	(charDesc_s){'E', 52, 18, 5, 7, 0, 3, 5, &font2Data[1076]},
	(charDesc_s){'F', 65, 26, 4, 7, 0, 3, 4, &font2Data[1111]},
	(charDesc_s){'G', 140, 10, 6, 7, 0, 3, 6, &font2Data[1139]},
	(charDesc_s){'H', 196, 9, 6, 7, 0, 3, 6, &font2Data[1181]},
	(charDesc_s){'I', 97, 26, 2, 7, 0, 3, 2, &font2Data[1223]},
	(charDesc_s){'J', 78, 26, 3, 7, 0, 3, 3, &font2Data[1237]},
	(charDesc_s){'K', 217, 9, 6, 7, 0, 3, 5, &font2Data[1258]},
	(charDesc_s){'L', 60, 26, 4, 7, 0, 3, 4, &font2Data[1300]},
	(charDesc_s){'M', 101, 10, 8, 7, 0, 3, 8, &font2Data[1328]},
	(charDesc_s){'N', 189, 9, 6, 7, 0, 3, 7, &font2Data[1384]},
	(charDesc_s){'O', 110, 10, 7, 7, 0, 3, 7, &font2Data[1426]},
	(charDesc_s){'P', 58, 18, 5, 7, 0, 3, 5, &font2Data[1475]},
	(charDesc_s){'Q', 186, 0, 8, 8, 0, 3, 7, &font2Data[1510]},
	(charDesc_s){'R', 210, 9, 6, 7, 0, 3, 5, &font2Data[1574]},
	(charDesc_s){'S', 64, 18, 5, 7, 0, 3, 5, &font2Data[1616]},
	(charDesc_s){'T', 70, 18, 5, 7, 0, 3, 5, &font2Data[1651]},
	(charDesc_s){'U', 224, 9, 6, 7, 0, 3, 6, &font2Data[1686]},
	(charDesc_s){'V', 231, 9, 6, 7, 0, 3, 6, &font2Data[1728]},
	(charDesc_s){'W', 44, 10, 9, 7, 0, 3, 9, &font2Data[1770]},
	(charDesc_s){'X', 14, 19, 6, 7, 0, 3, 5, &font2Data[1833]},
	(charDesc_s){'Y', 161, 10, 6, 7, 0, 3, 5, &font2Data[1875]},
	(charDesc_s){'Z', 133, 10, 6, 7, 0, 3, 5, &font2Data[1917]},
	(charDesc_s){'[', 160, 0, 3, 9, 0, 3, 3, &font2Data[1959]},
	(charDesc_s){'\\', 18, 10, 5, 8, 0, 3, 3, &font2Data[1986]},
	(charDesc_s){']', 156, 0, 3, 9, 0, 3, 3, &font2Data[2026]},
	(charDesc_s){'^', 248, 25, 5, 4, 1, 3, 6, &font2Data[2053]},
	(charDesc_s){'_', 101, 33, 5, 1, 0, 11, 4, &font2Data[2073]},
	(charDesc_s){'`', 81, 34, 3, 2, 0, 3, 2, &font2Data[2078]},
	(charDesc_s){'a', 211, 25, 5, 5, 0, 5, 5, &font2Data[2084]},
	(charDesc_s){'b', 76, 18, 5, 7, 0, 3, 5, &font2Data[2109]},
	(charDesc_s){'c', 193, 25, 5, 5, 0, 5, 4, &font2Data[2144]},
	(charDesc_s){'d', 82, 18, 5, 7, 0, 3, 5, &font2Data[2169]},
	(charDesc_s){'e', 187, 25, 5, 5, 0, 5, 5, &font2Data[2204]},
	(charDesc_s){'f', 45, 26, 4, 7, 0, 3, 3, &font2Data[2229]},
	(charDesc_s){'g', 88, 18, 5, 7, 0, 5, 5, &font2Data[2257]},
	(charDesc_s){'h', 94, 18, 5, 7, 0, 3, 5, &font2Data[2292]},
	(charDesc_s){'i', 91, 26, 2, 7, 0, 3, 2, &font2Data[2327]},
	(charDesc_s){'j', 164, 0, 3, 9, -1, 3, 2, &font2Data[2341]},
	(charDesc_s){'k', 100, 18, 5, 7, 0, 3, 4, &font2Data[2368]},
	(charDesc_s){'l', 88, 26, 2, 7, 0, 3, 2, &font2Data[2403]},
	(charDesc_s){'m', 115, 26, 8, 5, 0, 5, 8, &font2Data[2417]},
	(charDesc_s){'n', 181, 25, 5, 5, 0, 5, 5, &font2Data[2457]},
	(charDesc_s){'o', 141, 26, 6, 5, 0, 5, 5, &font2Data[2482]},
	(charDesc_s){'p', 106, 18, 5, 7, 0, 5, 5, &font2Data[2512]},
	(charDesc_s){'q', 112, 18, 5, 7, 0, 5, 5, &font2Data[2547]},
	(charDesc_s){'r', 229, 25, 4, 5, 0, 5, 3, &font2Data[2582]},
	(charDesc_s){'s', 234, 25, 4, 5, 0, 5, 4, &font2Data[2602]},
	(charDesc_s){'t', 40, 26, 4, 7, 0, 3, 3, &font2Data[2622]},
	(charDesc_s){'u', 175, 25, 5, 5, 0, 5, 5, &font2Data[2650]},
	(charDesc_s){'v', 169, 26, 5, 5, 0, 5, 4, &font2Data[2675]},
	(charDesc_s){'w', 133, 26, 7, 5, 0, 5, 7, &font2Data[2700]},
	(charDesc_s){'x', 223, 25, 5, 5, 0, 5, 4, &font2Data[2735]},
	(charDesc_s){'y', 118, 18, 5, 7, 0, 5, 4, &font2Data[2760]},
	(charDesc_s){'z', 217, 25, 5, 5, 0, 5, 4, &font2Data[2795]},
	(charDesc_s){'{', 144, 0, 3, 9, 0, 3, 3, &font2Data[2820]},
	(charDesc_s){'|', 0, 0, 2, 10, 0, 2, 2, &font2Data[2847]},
	(charDesc_s){'}', 132, 0, 3, 9, 0, 3, 3, &font2Data[2867]},
	(charDesc_s){'~', 70, 34, 6, 2, 0, 6, 6, &font2Data[2894]},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){'�', 121, 32, 2, 1, 0, 12, 2, &font2Data[2906]},
	(charDesc_s){'�', 82, 26, 2, 7, 0, 5, 2, &font2Data[2908]},
	(charDesc_s){'�', 30, 27, 4, 7, 0, 3, 5, &font2Data[2922]},
	(charDesc_s){'�', 130, 18, 5, 7, 0, 3, 5, &font2Data[2950]},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
	(charDesc_s){0, 0, 0, 0, 0, 0, 0, 0, NULL},
};
u8 font2Data[] = {0x0, 0x0, 0xae, 0x0, 0x95, 0x95, 0x98, 0x9b, 0x57, 0x2f, 0x0, 0x21, 0x21, 0x28, 0x2f, 0x17, 0x56, 0xad, 0x56, 0x31, 0x63, 0x31, 0x2c, 0x59, 0x2c, 0x8, 0x0, 0x6c, 0x0, 0x42, 0x0, 0x0, 0x47, 0x9f, 0xca, 0x65, 0x97, 0xd, 0x0, 0x23, 0x28, 0x89, 0x3a, 0xb7, 0x92, 0x4f, 0x2c, 0x77, 0xca, 0x91, 0xb7, 0x44, 0x10, 0x0, 0x0, 0x79, 0x4, 0x97, 0x4f, 0x3f, 0x0, 0x0, 0x8, 0x0, 0x2c, 0x0, 0x0, 0x0, 0x88, 0x0, 0x0, 0x38, 0xb3, 0xa1, 0x4, 0x0, 0x2f, 0x97, 0x2f, 0x2f, 0xd0, 0x4f, 0x6c, 0x8a, 0x17, 0x59, 0xbd, 0x5e, 0xbd, 0x84, 0x59, 0x59, 0xac, 0x2c, 0x0, 0x5f, 0xc7, 0xa1, 0x0, 0x0, 0x25, 0x42, 0x0, 0x0, 0x0, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3d, 0x91, 0x77, 0x4, 0x4a, 0x0, 0x0, 0xa0, 0x19, 0x3d, 0x73, 0x7d, 0x7d, 0x8, 0xa4, 0x21, 0x49, 0x73, 0x0, 0x35, 0xa2, 0x62, 0x89, 0x6b, 0x4, 0x2c, 0x81, 0x63, 0x7d, 0x7d, 0x8, 0x0, 0xa4, 0x28, 0x4f, 0x6c, 0x35, 0xa2, 0x2c, 0xa0, 0x11, 0x2b, 0x79, 0x0, 0x8, 0x38, 0x3d, 0x98, 0x7f, 0x8, 0x0, 0x0, 0x0, 0x10, 0x65, 0x4f, 0x0, 0x0, 0x0, 0x0, 0xab, 0x65, 0x8f, 0x67, 0x8c, 0x96, 0x8, 0x7f, 0x0, 0x0, 0xa8, 0x49, 0x3d, 0x79, 0x94, 0x0, 0x23, 0xcd, 0x65, 0x3d, 0x79, 0x84, 0x70, 0xb3, 0x10, 0x7a, 0x96, 0x8, 0x73, 0xcf, 0x82, 0x28, 0x19, 0x0, 0x0, 0x97, 0x0, 0x44, 0x96, 0xa5, 0x0, 0x0, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x56, 0xad, 0x56, 0x4, 0x9, 0x4, 0x0, 0x17, 0x82, 0xa7, 0xb6, 0xa7, 0x85, 0x1c, 0x0, 0x42, 0x9b, 0x3d, 0xd, 0x9, 0xd, 0x44, 0xa2, 0x42, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2c, 0x5f, 0x2b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2b, 0x5f, 0x10, 0x94, 0xa1, 0x65, 0x59, 0x65, 0xa1, 0x94, 0x10, 0x0, 0x0, 0x15, 0x4f, 0x59, 0x4f, 0x15, 0x0, 0x0, 0x10, 0x0, 0x42, 0x0, 0x3f, 0xa7, 0x67, 0x23, 0x2c, 0xad, 0x72, 0x2c, 0x23, 0x4, 0x4d, 0x0, 0x0, 0x0, 0x38, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x4a, 0x95, 0xca, 0x95, 0x95, 0x10, 0x21, 0x90, 0x21, 0x21, 0x0, 0x0, 0x73, 0x0, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x4f, 0x95, 0x65, 0x0, 0x15, 0x5b, 0x6c, 0x7f, 0x62, 0x70, 0x70, 0x7a, 0x15, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xaa, 0x8c, 0x2b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x33, 0x93, 0xaa, 0x4f, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x15, 0x6e, 0xb9, 0x4d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0x17, 0x8, 0x6e, 0x9b, 0x9b, 0x7a, 0x2b, 0x0, 0xa8, 0x6e, 0x3a, 0x2f, 0x4f, 0xa8, 0x38, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x94, 0x5b, 0x2f, 0x2f, 0x3a, 0x98, 0x4d, 0x8, 0x6e, 0xa4, 0xae, 0x8f, 0x3d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x42, 0x42, 0x0, 0x11, 0x11, 0x11, 0x11, 0x28, 0xc1, 0x0, 0xb9, 0xb9, 0xb9, 0xb9, 0xb9, 0xc5, 0x46, 0x84, 0x35, 0x0, 0x0, 0x0, 0x38, 0x0, 0xa2, 0xb5, 0x42, 0x0, 0x0, 0x46, 0x62, 0x7f, 0x8, 0xc3, 0x17, 0x0, 0x4, 0x7f, 0x7f, 0x0, 0x2c, 0xcc, 0x84, 0xba, 0x38, 0x42, 0x0, 0x0, 0x10, 0x46, 0x2b, 0x0, 0x5e, 0x0, 0x0, 0x0, 0x0, 0x17, 0x8, 0x88, 0x0, 0x0, 0x62, 0x0, 0x17, 0x79, 0x84, 0x0, 0x8, 0x90, 0x0, 0x8, 0x7f, 0x99, 0x7a, 0xb5, 0x5f, 0xb0, 0xcc, 0x2c, 0x8, 0x4f, 0x35, 0x0, 0x19, 0x15, 0x0, 0x0, 0x38, 0x17, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xb3, 0x49, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x8, 0x81, 0x94, 0x10, 0x0, 0x70, 0xb7, 0x70, 0x70, 0xa4, 0xe9, 0x4d, 0x70, 0xb7, 0x70, 0x70, 0x70, 0x70, 0x38, 0x0, 0x23, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9d, 0x0, 0x0, 0x4d, 0x8f, 0x7a, 0x38, 0x7f, 0x0, 0x0, 0x7f, 0x2f, 0x46, 0x7f, 0xae, 0xd, 0x8, 0xb5, 0x0, 0x0, 0x7f, 0x42, 0xc3, 0xc6, 0x52, 0x0, 0x0, 0x57, 0x0, 0x4, 0x4, 0x0, 0x0, 0x0, 0x0, 0x4, 0x4f, 0x84, 0x7a, 0x44, 0x4, 0x0, 0x9f, 0x6e, 0x6e, 0xa7, 0x85, 0xad, 0x4, 0x84, 0x0, 0x0, 0x7f, 0x0, 0x2c, 0x73, 0xa4, 0x3a, 0x3a, 0xb0, 0x0, 0x10, 0x7f, 0x23, 0x99, 0xa4, 0x2c, 0x0, 0x20, 0x23, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x42, 0x7a, 0x33, 0x4, 0x0, 0x0, 0x0, 0x7f, 0x4f, 0x8c, 0xb3, 0x7a, 0x10, 0x0, 0x7f, 0x0, 0x0, 0x8, 0x4f, 0xb4, 0x7a, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x4, 0x4f, 0x57, 0x23, 0x9b, 0x59, 0x8, 0x4f, 0x2b, 0x0, 0xae, 0x4f, 0x8f, 0xa8, 0x7a, 0xa8, 0x42, 0x7f, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x7f, 0xae, 0x3a, 0x7a, 0xa8, 0x7a, 0xab, 0x42, 0x2c, 0xa4, 0x70, 0x8, 0x65, 0x3d, 0x0, 0x43, 0x0, 0x0, 0x65, 0x9b, 0x4f, 0x0, 0x90, 0x0, 0x57, 0x8f, 0x46, 0x8f, 0x4d, 0x94, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f, 0x68, 0x8c, 0x72, 0x86, 0x46, 0x9e, 0x42, 0x0, 0x33, 0x7a, 0x9b, 0x7a, 0x35, 0x0, 0x70, 0x0, 0x0, 0x0, 0x70, 0x70, 0x0, 0x0, 0x0, 0x70, 0x4f, 0x95, 0x65, 0x0, 0x0, 0x0, 0x70, 0x0, 0x15, 0x5b, 0x0, 0x0, 0x0, 0x70, 0x0, 0x0, 0x85, 0x0, 0x0, 0x0, 0x23, 0xb4, 0x75, 0x0, 0x0, 0x9f, 0x10, 0xa6, 0x10, 0x23, 0x8d, 0x0, 0x23, 0x94, 0x23, 0x10, 0x0, 0x0, 0x3a, 0x38, 0x0, 0x38, 0x7f, 0x0, 0x7f, 0x7f, 0x0, 0x7f, 0x7f, 0x0, 0x7f, 0x73, 0x0, 0x73, 0x4, 0x0, 0x4, 0x46, 0x4d, 0x0, 0x0, 0x93, 0x0, 0xb0, 0x0, 0x62, 0x4d, 0x0, 0x62, 0x46, 0xae, 0x0, 0x0, 0x0, 0xd6, 0x38, 0x0, 0x0, 0x0, 0x23, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x32, 0x17, 0x70, 0x0, 0x70, 0x23, 0x0, 0x8, 0x7f, 0x70, 0x0, 0x4f, 0xb7, 0x27, 0x10, 0x7f, 0x0, 0x0, 0x0, 0x10, 0xb4, 0xc6, 0x23, 0x0, 0x0, 0x0, 0x0, 0x4, 0x8, 0x0, 0x0, 0x27, 0x89, 0x96, 0x9b, 0x4f, 0x0, 0x0, 0x2c, 0xa9, 0x20, 0x9, 0x19, 0x70, 0x7f, 0x0, 0x99, 0x27, 0xad, 0xa9, 0x89, 0x0, 0x75, 0x2c, 0x7f, 0x7f, 0x10, 0x0, 0x40, 0x6c, 0x0, 0x7f, 0x7f, 0x2c, 0x74, 0x28, 0x3d, 0x70, 0x0, 0x7f, 0x9e, 0x6c, 0x82, 0x81, 0x98, 0x4b, 0x4d, 0x4d, 0x8, 0x62, 0x49, 0xd, 0xd, 0x3d, 0x9e, 0x0, 0x0, 0x0, 0x62, 0xa7, 0xa7, 0x77, 0x8, 0x0, 0xb3, 0x5b, 0x8, 0x0, 0x0, 0x0, 0x0, 0x20, 0x85, 0xd9, 0x96, 0x33, 0x4, 0x0, 0x0, 0x0, 0x84, 0x33, 0x82, 0xa4, 0x42, 0x0, 0x0, 0x84, 0x33, 0x82, 0xa7, 0x42, 0x20, 0x85, 0xd9, 0x8c, 0x33, 0x0, 0x0, 0xb3, 0x5b, 0x8, 0x0, 0x0, 0x0, 0x0, 0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x4d, 0x97, 0x2f, 0x2f, 0x97, 0x2f, 0x2f, 0x7f, 0x7f, 0x0, 0x0, 0x97, 0x0, 0x8, 0x7f, 0xae, 0x65, 0xa4, 0x84, 0xb3, 0xc4, 0x38, 0x17, 0x7a, 0x4f, 0x0, 0x20, 0x1c, 0x0, 0x0, 0x2b, 0x7a, 0x8f, 0x4f, 0x0, 0x0, 0x4d, 0xba, 0x5b, 0x4f, 0x8f, 0x93, 0x0, 0xb0, 0x4, 0x0, 0x0, 0x0, 0x5f, 0x42, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x84, 0x0, 0x0, 0x0, 0x0, 0x4, 0x7f, 0x77, 0x0, 0x0, 0x0, 0x0, 0x35, 0x42, 0xab, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0x57, 0x90, 0x21, 0x21, 0x21, 0x21, 0x21, 0x7f, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x9b, 0x4, 0x0, 0x0, 0x0, 0x42, 0x6c, 0x38, 0xb4, 0x4f, 0x46, 0x6e, 0xc0, 0x0, 0x0, 0x27, 0x85, 0x9b, 0x6e, 0x10, 0x0, 0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x4d, 0x97, 0x2f, 0x2f, 0x97, 0x2f, 0x2f, 0x7f, 0x7f, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x7f, 0x7c, 0x0, 0x0, 0x62, 0x0, 0x0, 0x73, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xa8, 0xa8, 0xa8, 0xab, 0xa8, 0xa8, 0x57, 0x21, 0x21, 0x21, 0x90, 0x21, 0x21, 0x7f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x42, 0x0, 0x0, 0x57, 0x0, 0x2b, 0x8f, 0x8f, 0x4f, 0x0, 0x0, 0x4d, 0xba, 0x4f, 0x46, 0x85, 0x93, 0x0, 0xb0, 0x4, 0x0, 0x0, 0x0, 0x5f, 0x42, 0x7f, 0x0, 0x0, 0x38, 0x0, 0x0, 0x7f, 0x88, 0x9, 0x9, 0x7f, 0x0, 0x0, 0x7f, 0xa8, 0xc0, 0xc0, 0x6c, 0x0, 0x46, 0x57, 0xa8, 0xa8, 0xa8, 0xab, 0xa8, 0xa8, 0x54, 0x21, 0x21, 0x21, 0x90, 0x21, 0x21, 0x10, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x9b, 0x9b, 0x9b, 0xcd, 0x9b, 0x9b, 0x4d, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x17, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0x57, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x17, 0x6c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa4, 0x3a, 0x2f, 0x2f, 0x2f, 0x2f, 0x17, 0x23, 0x8f, 0xae, 0xae, 0xae, 0xae, 0x57, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0x57, 0x2f, 0x2f, 0x79, 0xe0, 0x46, 0x2f, 0x17, 0x0, 0x65, 0xb5, 0x33, 0xba, 0x23, 0x0, 0x8f, 0xa4, 0x8, 0x0, 0x17, 0xc0, 0x38, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x10, 0x62, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x4d, 0x97, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x17, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xab, 0x57, 0x21, 0x21, 0x21, 0x3d, 0xa6, 0xd0, 0x42, 0x0, 0x2b, 0x96, 0xad, 0x4f, 0x4, 0x0, 0xad, 0xba, 0x3d, 0x0, 0x0, 0x0, 0x0, 0x33, 0x9e, 0xad, 0x3d, 0x4, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x8c, 0xb4, 0x4f, 0x8, 0xae, 0xae, 0xae, 0xae, 0xbe, 0xec, 0x79, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x17, 0xae, 0xae, 0xae, 0xae, 0xae, 0xab, 0x57, 0x2f, 0x2f, 0x2f, 0x2f, 0x78, 0xdc, 0x42, 0x0, 0x0, 0x10, 0x9b, 0xab, 0x17, 0x0, 0x0, 0x49, 0xbf, 0x59, 0x0, 0x0, 0x0, 0x9b, 0xb6, 0x32, 0x21, 0x21, 0x21, 0x10, 0xae, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0x54, 0x0, 0x35, 0x8f, 0x9b, 0x5b, 0x8, 0x0, 0x4d, 0xa8, 0x4f, 0x46, 0x7a, 0xba, 0x0, 0xa4, 0x0, 0x0, 0x0, 0x0, 0x46, 0x62, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xa4, 0x0, 0x0, 0x0, 0x0, 0x38, 0x73, 0x4d, 0xa8, 0x4f, 0x46, 0x6e, 0xc0, 0x4, 0x0, 0x35, 0x8f, 0x9b, 0x6e, 0x10, 0x0, 0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x4d, 0x2f, 0x2f, 0x97, 0x2f, 0x2f, 0x2f, 0x7f, 0x0, 0x0, 0x7f, 0x4, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x38, 0xa8, 0x46, 0x8f, 0x4d, 0x0, 0x0, 0x0, 0x49, 0x9b, 0x65, 0x0, 0x0, 0x0, 0x2b, 0x85, 0x8f, 0x5b, 0x8, 0x0, 0x0, 0x4d, 0xba, 0x4f, 0x46, 0x85, 0xaf, 0x0, 0x0, 0xa4, 0x4, 0x0, 0x0, 0x0, 0x46, 0x62, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x4, 0xac, 0x0, 0x0, 0x0, 0x0, 0x23, 0x79, 0xab, 0xc5, 0x8f, 0x28, 0x21, 0x4f, 0xba, 0x8, 0xac, 0x0, 0x4f, 0xa1, 0xb4, 0x8f, 0x17, 0x0, 0x17, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xa8, 0xa8, 0xab, 0xa8, 0xa8, 0x57, 0x21, 0x21, 0x21, 0x90, 0x21, 0x21, 0x7f, 0x0, 0x4, 0x70, 0x8a, 0x0, 0x4, 0x7f, 0x3d, 0xbe, 0x7a, 0x72, 0xa4, 0xba, 0x38, 0xb2, 0x27, 0x0, 0x0, 0x3a, 0x2b, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3d, 0x1a, 0x0, 0x8, 0x65, 0x49, 0x0, 0xab, 0x0, 0x0, 0x9c, 0x8f, 0xa1, 0x38, 0x7f, 0x0, 0x23, 0xb7, 0x0, 0x0, 0x7f, 0xa4, 0x4f, 0xbe, 0x38, 0x0, 0x10, 0x7f, 0x23, 0x8f, 0x52, 0x0, 0x0, 0x20, 0x23, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6c, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x7f, 0xce, 0xce, 0xce, 0xce, 0xce, 0xce, 0x7f, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x62, 0x23, 0x99, 0xbf, 0xbf, 0xbf, 0xbf, 0x5f, 0xb0, 0x44, 0x21, 0x21, 0x21, 0x21, 0x10, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xaa, 0x9b, 0x9b, 0x9b, 0x9b, 0x4d, 0x0, 0x20, 0x3a, 0x46, 0x46, 0x46, 0x23, 0x0, 0x0, 0x0, 0x0, 0x33, 0x85, 0x69, 0x0, 0x15, 0x6e, 0xbd, 0xad, 0x5b, 0x10, 0xa4, 0xbb, 0x6e, 0x20, 0x0, 0x0, 0x0, 0xa4, 0xb8, 0x6e, 0x15, 0x0, 0x0, 0x0, 0x0, 0x15, 0x6e, 0xbb, 0xad, 0x44, 0x8, 0x0, 0x0, 0x0, 0x4, 0x33, 0x99, 0x66, 0x0, 0x0, 0x0, 0xd, 0x44, 0x99, 0x69, 0x20, 0x5b, 0xad, 0xc3, 0x99, 0x4f, 0x10, 0xf5, 0xbc, 0x49, 0x4, 0x0, 0x0, 0x0, 0x33, 0x7a, 0xb4, 0xa7, 0x6e, 0x20, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x9e, 0xef, 0x66, 0x20, 0x6e, 0xaa, 0xc6, 0x85, 0x44, 0x8, 0xf2, 0xbc, 0x40, 0x9, 0x0, 0x0, 0x0, 0x20, 0x6e, 0xaa, 0xc6, 0x8f, 0x44, 0x10, 0x0, 0x0, 0x0, 0x15, 0x4f, 0x99, 0x69, 0x99, 0x8, 0x0, 0x0, 0x0, 0x27, 0x4d, 0x65, 0xbd, 0x35, 0x8, 0x70, 0xc4, 0x38, 0x0, 0x17, 0xb7, 0xd0, 0x75, 0x8, 0x0, 0x8, 0x7a, 0xbe, 0x7a, 0xb4, 0x35, 0x0, 0xcf, 0x70, 0x4, 0x0, 0x27, 0xb3, 0x57, 0x27, 0x0, 0x0, 0x0, 0x0, 0x0, 0x23, 0x0, 0x0, 0x0, 0x0, 0x4, 0x65, 0x6c, 0x0, 0x0, 0x0, 0x49, 0xc4, 0x9b, 0x17, 0xa8, 0xa8, 0xc0, 0xe0, 0x35, 0x0, 0x0, 0x21, 0x21, 0x33, 0xae, 0xab, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x49, 0xc4, 0x4d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0x2c, 0x9b, 0x10, 0x0, 0x0, 0x0, 0x0, 0x42, 0xc1, 0xcc, 0x49, 0x0, 0x0, 0x0, 0x7f, 0x7f, 0x17, 0xab, 0x9b, 0x10, 0x0, 0x7f, 0x7f, 0x0, 0x0, 0x65, 0xd3, 0x49, 0x7f, 0x7f, 0x0, 0x0, 0x0, 0x27, 0xbd, 0x7f, 0x23, 0x0, 0x0, 0x0, 0x0, 0x4, 0x23, 0x42, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x42, 0x7f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x7f, 0x23, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x23, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x3d, 0x4d, 0x0, 0x0, 0x0, 0x10, 0x65, 0xb1, 0x82, 0x17, 0x0, 0x2b, 0x8c, 0xad, 0x5b, 0x8, 0x0, 0x0, 0xad, 0x93, 0x33, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x57, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x57, 0x79, 0xa2, 0xa2, 0xa2, 0xa2, 0xa2, 0xa2, 0xa2, 0x79, 0x8, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x8, 0xa2, 0x2b, 0x0, 0x0, 0x1c, 0x9e, 0x89, 0x10, 0x0, 0x35, 0xbf, 0x3f, 0x94, 0x89, 0x10, 0x0, 0x35, 0x0, 0x0, 0x0, 0x42, 0x7f, 0x7f, 0x7f, 0x38, 0x0, 0x56, 0x4a, 0x7d, 0x10, 0x0, 0x40, 0x8f, 0x23, 0x0, 0x10, 0xb1, 0x46, 0x96, 0x0, 0x96, 0x8a, 0x0, 0x84, 0x0, 0x7f, 0xc7, 0x99, 0xc1, 0x8f, 0xb7, 0x46, 0x46, 0x46, 0x46, 0x10, 0xbf, 0xc2, 0xb9, 0xc2, 0xbc, 0xb9, 0xb9, 0x98, 0x28, 0x11, 0x33, 0x86, 0x11, 0x11, 0x7f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0xab, 0x65, 0x2f, 0x5b, 0xba, 0x0, 0x0, 0x10, 0x6e, 0x9b, 0x85, 0x17, 0x0, 0x0, 0x8, 0x6e, 0x84, 0x5b, 0x4, 0x9f, 0x6e, 0x46, 0x7a, 0x93, 0x88, 0x0, 0x0, 0x0, 0x90, 0x9a, 0x0, 0x0, 0x0, 0x96, 0xd, 0x0, 0x0, 0x0, 0x11, 0x17, 0x7a, 0x9b, 0x6e, 0x8, 0x0, 0x0, 0xba, 0x5b, 0x3a, 0x65, 0xa5, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x84, 0x0, 0x0, 0x98, 0x33, 0x11, 0x20, 0xa3, 0x11, 0x11, 0xbf, 0xc2, 0xb9, 0xbf, 0xbf, 0xb9, 0xb9, 0x10, 0x6e, 0x9b, 0x65, 0x8, 0xb2, 0x6e, 0xa2, 0x65, 0x99, 0x84, 0x0, 0x7f, 0x0, 0x84, 0x8a, 0x0, 0x7f, 0x3a, 0xb0, 0x32, 0x0, 0x4d, 0x8f, 0x23, 0x9, 0x9, 0x9, 0x9, 0x67, 0x9, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xdf, 0xc0, 0x93, 0x0, 0x0, 0x0, 0x0, 0x73, 0x0, 0x88, 0x0, 0x0, 0x0, 0x0, 0x4, 0x0, 0x17, 0x33, 0x0, 0x17, 0x7a, 0x9b, 0x6e, 0x8, 0x9f, 0x0, 0xba, 0x5b, 0x3a, 0x6e, 0xaf, 0x7f, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x84, 0xa4, 0x33, 0x98, 0x33, 0x11, 0x20, 0xa3, 0x23, 0x96, 0xbf, 0xc2, 0xb9, 0xbf, 0xbf, 0xa8, 0xa8, 0xa8, 0xab, 0xab, 0xa8, 0xa8, 0x21, 0x21, 0x21, 0x33, 0x94, 0x21, 0x21, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x70, 0x70, 0x70, 0x8f, 0xc0, 0x0, 0x0, 0x59, 0x59, 0x59, 0x4f, 0x10, 0x0, 0x0, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0x0, 0xae, 0x21, 0x21, 0x21, 0x21, 0x21, 0x0, 0x2f, 0x6c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb0, 0x3a, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x0, 0x2f, 0x23, 0x85, 0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x0, 0xae, 0xb9, 0xb9, 0xbf, 0xb9, 0xb9, 0xb9, 0xb9, 0x11, 0x51, 0xe3, 0x63, 0x11, 0x11, 0x11, 0x52, 0xc3, 0x15, 0xa8, 0x65, 0x0, 0x0, 0xbe, 0x10, 0x0, 0x4, 0xa6, 0x0, 0x0, 0x17, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0xb9, 0xb9, 0xb9, 0xbf, 0xbf, 0x11, 0x11, 0x11, 0x20, 0x8c, 0x0, 0x0, 0x0, 0x4, 0x97, 0xc0, 0xc0, 0xc0, 0xd6, 0xa3, 0x9, 0x9, 0x9, 0x19, 0x99, 0x9, 0x9, 0x9, 0xd, 0xa2, 0xce, 0xce, 0xce, 0xcd, 0x7a, 0x9, 0x9, 0x9, 0x4, 0x0, 0xa8, 0xa8, 0xa8, 0xab, 0xab, 0x21, 0x21, 0x21, 0x33, 0x94, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x70, 0x70, 0x70, 0x8f, 0xb7, 0x59, 0x59, 0x59, 0x4f, 0x10, 0x8, 0x6e, 0x9b, 0x6e, 0x8, 0xa5, 0x65, 0x46, 0x6e, 0x99, 0x84, 0x0, 0x0, 0x0, 0x84, 0x99, 0x8, 0x0, 0x8, 0xa6, 0x42, 0xc2, 0xbf, 0xc2, 0x56, 0x0, 0x8, 0x21, 0x8, 0x0, 0xb9, 0xb9, 0xbf, 0xc2, 0xb9, 0xc2, 0xbc, 0x11, 0x11, 0x98, 0x28, 0x11, 0x33, 0x86, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0xab, 0x65, 0x2f, 0x5b, 0xba, 0x0, 0x0, 0x10, 0x6e, 0x9b, 0x85, 0x17, 0x0, 0x0, 0x17, 0x7a, 0x9b, 0x6e, 0x8, 0x0, 0x0, 0xba, 0x5b, 0x3a, 0x6e, 0xa5, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x84, 0x11, 0x11, 0x92, 0x33, 0x11, 0x20, 0xa3, 0xb9, 0xb9, 0xbc, 0xc2, 0xb9, 0xbf, 0xbf, 0xa8, 0xa8, 0xa8, 0xae, 0xa8, 0x21, 0x21, 0x21, 0x44, 0x9a, 0x0, 0x0, 0x0, 0x0, 0x73, 0x0, 0x0, 0x0, 0x0, 0x4, 0x71, 0x0, 0x17, 0x7a, 0x2c, 0x7f, 0x0, 0xa2, 0x5b, 0xa4, 0xa0, 0x44, 0xb7, 0x0, 0x84, 0x46, 0xa4, 0x2c, 0x0, 0x64, 0x0, 0x0, 0x0, 0x0, 0x38, 0x0, 0x0, 0x49, 0x9b, 0x9b, 0x9b, 0xcd, 0x9b, 0x42, 0xa9, 0x2f, 0x2f, 0x2f, 0x97, 0x2f, 0x17, 0x38, 0x0, 0x0, 0x0, 0x38, 0x0, 0x0, 0x52, 0xb0, 0xb9, 0xb9, 0xb9, 0xb4, 0x19, 0x11, 0x11, 0x11, 0x8a, 0x0, 0x0, 0x0, 0x0, 0xc7, 0xb0, 0x84, 0x84, 0x84, 0x46, 0x46, 0x46, 0x46, 0x46, 0x0, 0x0, 0x1c, 0x6e, 0xbd, 0x5b, 0xaa, 0xb7, 0x6e, 0x20, 0xc1, 0xa1, 0x33, 0x4, 0x0, 0x4, 0x33, 0x8c, 0xbc, 0x85, 0x0, 0x0, 0x0, 0x8, 0x4f, 0x0, 0x4, 0x33, 0x6e, 0xbd, 0x99, 0xb6, 0x96, 0x5b, 0x20, 0x85, 0xa9, 0x82, 0x33, 0x8, 0x0, 0x4, 0x41, 0xc3, 0xdf, 0x85, 0xaa, 0x9b, 0x65, 0x20, 0x99, 0xb1, 0x82, 0x44, 0x15, 0x0, 0x8, 0x33, 0x85, 0xb4, 0xa4, 0x10, 0x0, 0x8, 0x8f, 0x59, 0xc9, 0x70, 0xc6, 0x65, 0x8, 0x8a, 0xec, 0x75, 0x4, 0xc4, 0x70, 0xd, 0x70, 0xb4, 0x27, 0x0, 0x0, 0x0, 0x31, 0x62, 0x0, 0x0, 0x0, 0x15, 0x6e, 0xbd, 0xad, 0x5b, 0x4f, 0xa1, 0xaa, 0x6e, 0x20, 0x10, 0x6e, 0xca, 0x97, 0x33, 0x4, 0x0, 0x0, 0x0, 0x4, 0x33, 0x8c, 0xbc, 0x85, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0x4f, 0xa4, 0x10, 0x0, 0x0, 0x4d, 0xc1, 0xcc, 0x49, 0x0, 0x7f, 0x7f, 0x17, 0xab, 0x9b, 0x90, 0x7f, 0x0, 0x0, 0x59, 0xef, 0x23, 0x0, 0x0, 0x0, 0x27, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4, 0x0, 0x0, 0x0, 0x23, 0xaa, 0xad, 0xad, 0x7f, 0xb6, 0xad, 0xaa, 0x2c, 0x57, 0x15, 0x9, 0x9, 0x0, 0x4, 0x9, 0x15, 0x57, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x4a, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x10, 0x57, 0x15, 0x9, 0x4, 0x0, 0x0, 0x9, 0xd, 0x57, 0x23, 0xb4, 0xc0, 0xb9, 0x74, 0xb6, 0xc0, 0xbc, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x8, 0x0, 0x0, 0x0, 0x77, 0x8, 0x33, 0x79, 0x5f, 0x42, 0x90, 0x0, 0x98, 0x47, 0x4, 0x8, 0x0, 0x0, 0xa4, 0x9b, 0x98, 0x95, 0x95, 0x0, 0xae, 0x2f, 0x2f, 0x28, 0x21, 0x21, 0x0, 0x2f, 0x0, 0x23, 0x99, 0xa1, 0x49, 0x0, 0x0, 0x0, 0xb0, 0x44, 0x28, 0x96, 0x38, 0x0, 0x9f, 0xcf, 0x9f, 0x9f, 0x9f, 0xcf, 0x4f, 0x0, 0x86, 0x0, 0x0, 0x2f, 0x6c, 0x0, 0x5e, 0x0, 0x0, 0x38, 0x0, 0x0, 0x0, 0xd3, 0x9e, 0x9b, 0xcd, 0x9b, 0x65, 0x0, 0x7f, 0x20, 0x46, 0xa2, 0x46, 0x7a, 0x57, 0x7f, 0x0, 0x0, 0x4d, 0x0, 0x8, 0x7f, 0x57, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x23, 0x00};