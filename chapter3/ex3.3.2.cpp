#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class samp
{
    char *s;
public:
    samp() { s = '\0'; }
    ~samp() { if(s) free(s); cout << "s���������\n"; }
    void show() { cout << s << "\n"; }
    void set(char *str);
};

void samp::set(char *str)
{
    s = (char *) malloc(strlen(str) + 1);
    if (!s) {
        cout << "���������蓖�ăG���[\n";
        exit(1);
    }
    strcpy(s, str);
}

// str�̃X�R�[�v�͊֐����Ȃ̂�
// �֐��I������samp�̃f�X�g���N�^�����s�����
// ����ɃI�u�W�F�N�g��Ԃ��̂ňꎞ�I�u�W�F�N�g���쐬�����
samp input()
{
    char s[80];
    samp str;

    cout << "������̓���: ";
    cin >> s;

    str.set(s);
    return str;
}

int main()
{
    samp ob;

    // �����ŃG���[���o��B
    // input����samp���p������邽�߁A�f�X�g���N�^���Ăяo�����
    ob = input();
    ob.show();

    return 0;
}





