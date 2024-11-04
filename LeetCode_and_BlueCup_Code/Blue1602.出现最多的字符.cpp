#include <iostream>
using namespace std;
int main()
{
	// 请在此输入您的代码
	/*哈希表*/
	int frequency[6] = { 0 };//记录A~F的出现次数
	int res=0;
	char ch[21][21] = {
	"FFEEFEAAECFFBDBFBCDA",
	"DACDEEDCCFFAFADEFBBA",
	"FDCDDCDBFEFCEDDBFDBE",
	"EFCAAEECEECDCDECADDC",
	"DFAEACECFEADCBFECADF",
	"DFBAAADCFAFFCEADFDDA",
	"EAFAFFDEFECEDEEEDFBD",
	"BFDDFFBCFACECEDCAFAF",
	"EFAFCDBDCCBCCEADADAE",
	"BAFBACACBFCBABFDAFBE",
	"FCFDCFBCEDCEAFBCDBDD",
	"BDEFCAAAACCFFCBBAAEE",
	"CFEFCFDEEDCACDACECFF",
	"BAAAFACDBFFAEFFCCCDB",
	"FADDDBEBCBEEDDECFAFF",
	"CDEAFBCBBCBAEDFDBEBB",
	"BBABBFDECBCEFAABCBCF",
	"FBDBACCFFABEAEBEACBB",
	"DCBCCFADDCACFDEDECCC",
	"BFAFCBFECAACAFBCFBAF" };
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			switch (ch[i][j])
			{
			case 'A':
				frequency[0]++;
				break;
			case 'B':
				frequency[1]++;
				break;
			case 'C':
				frequency[2]++;
				break;
			case 'D':
				frequency[3]++;
				break;
			case 'E':
				frequency[4]++;
				break;
			case 'F':
				frequency[5]++;
				break;
			default:
				break;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		if (res < frequency[i])
			res = frequency[i];
	}
	cout << res;
	return res;
}