// �������p�̎O�p�`��`����

#include <iostream>

using namespace std;

int main()
{
    char src_[] = "11212312341234512345612345671234567812345678912345678901234567890A1234567890AB1234567890ABC1234567890ABCD1234567890ABCDE1234567890ABCDEF1234567890ABCDEFG1234567890ABCDEFGH1234567890ABCDEFGHI1234567890ABCDEFGHIJ1234567890ABCDEFGHIJK1234567890ABCDEFGHIJKL1234567890ABCDEFGHIJKLM1234567890ABCDEFGHIJKLMN1234567890ABCDEFGHIJKLMNO1234567890ABCDEFGHIJKLMNOP1234567890ABCDEFGHIJKLMNOPQ1234567890ABCDEFGHIJKLMNOPQR1234567890ABCDEFGHIJKLMNOPQRS1234567890ABCDEFGHIJKLMNOPQRST1234567890ABCDEFGHIJKLMNOPQRSTU1234567890ABCDEFGHIJKLMNOPQRSTUV1234567890ABCDEFGHIJKLMNOPQRSTUVW1234567890ABCDEFGHIJKLMNOPQRSTUVWX1234567890ABCDEFGHIJKLMNOPQRSTUVWXY1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char tgt_[2500]; //target

    // �����̕�����̓������z��isrc_�j����v�f���ǂݍ��݁A
    // �������p�̎O�p�`��`���z��itgt_�j�ɑ�����Ă���
    // �O�p�`���ォ��`���A1�s������閈�ɉ��s�R�[�h��������

    int s_ = 0;                               //src_�̓Y����錾�E������
    int t_ = 0;                               //tgt_�̓Y����錾�E������
    int w_cnt = 1;                            //�O�p�`�̉��̒�����錾�E������

    while (src_[s_]) {                          //src_�̑S�v�f�𑖍�
        for (int i = 1; i <= *src_; i++) {       //�O�p�`��1�s��������邽�߂̃��[�v
            tgt_[t_] = src_[s_];                //src_����tgt_�֑��
            s_++;                             //src_�̓Y�����C���N�������g
            t_++;                             //tgt_�̓Y�����C���N�������g
        }
        tgt_[t_] = '\n';                        //�O�p�`��1�s���̑�����I������̂ŉ��s�R�[�h��tgt_�֑��
        t_++;                                 //tgt_�̓Y�����C���N�������g
        w_cnt++;                                 //�O�p�`�̉��̒������C���N�������g
    }
    tgt_[t_] = '\0';                          //������̍Ō�̓i�������I


    // �������p�̎O�p�`��`���Ɠ����ɍ������v�Z

    t_ = 0;                                   //tgt_�̓Y����������
    int h_cnt = 0;                            //�O�p�`�̏c�̒������v�Z���邽�߂̃J�E���^�[

    while (tgt_[t_]) {                          //tgt_�̑S�v�f�𑖍�
        cout << tgt_[t_++];                     //tgt_����v�f����ʂ֏o��
        if (tgt_[t_] == '\n') h_cnt++;              //���s���邽�тɃJ�E���^�[���C���N�������g
    }

    //���ʂ̕\��
    cout << "�O�p�`�̒i����" << h_cnt << "�i�ł��B\n";

}