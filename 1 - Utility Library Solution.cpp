#include <iostream>
#include "clsUtil.h"

using namespace std;

int main()
{
    clsUtil::Srand();
    cout << clsUtil::EncryptText("Ahmed Mohammed", 10) << endl;
    cout << clsUtil::DecryptText("Krwon*Wyrkwwon", 10) << endl;
    clsUtil::GenerateKeys(6, clsUtil::enCharType::MixChars);
    cout << clsUtil::GenerateWord(clsUtil::enCharType::MixChars , 10);
    system("pause>0");
    return 0;
}