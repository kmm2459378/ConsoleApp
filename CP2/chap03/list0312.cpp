// //��̐����l�̘a�Ɛς��֐��ɂ���ċ��߂�i�ԈႢ�j
//
//#include <iostream>
//
//using namespace std;
//
////--- x��y�̘a�Ɛς�sum��mul�ɋ��߂�i�ԈႢ�j---//
//void sum_mul(int x, int y, int* sum, int* mul)
//{
//    *sum = x + y;
//    *mul = x * y;
//}
//
//int main()
//{
//    int a, b;
//    int wa = 0, seki = 0;
//
//    cout << "����a�F";   cin >> a;
//    cout << "����b�F";   cin >> b;
//
//    sum_mul(a, b, &wa, &seki);        // a��b�̘a�Ɛς����߂�i�H�j
//
//    cout << "�a��" << wa << "�ł��B\n";
//    cout << "�ς�" << seki << "�ł��B\n";
//}

// //�����`�ƒ����`��\��
//
//#include <iostream>
//
//using namespace std;
//
////--- ����c��n�A���\�� ---//
//void put_nchar(int n, char c)
//{
//    while (n-- > 0)
//        cout << c;
//}
//
////--- ����c����ׂĈ�ӂ̒���n�̐����`��\�� ---//
//void put_square(int n, char c)
//{
//    for (int i = 1; i <= n; i++) {      // �S����n�s
//        put_nchar(n, c);                // ����c��n�\������
//        cout << '\n';                   // ���s����
//    }
//}
//
////--- ����c����ׂč�����h�ŉ�����w�̒����`��\�� ---//
//void put_rectangle(int h, int w, char c)
//{
//    for (int i = 1; i <= h; i++) {      // �S����h�s
//        put_nchar(w, c);                // ����c��w�\������
//        cout << '\n';                   // ���s����
//    }
//}
//
//int main()
//{
//    int n, h, w;
//    char m = '*';
//    char t = '+';
//    char c = '-';
//
//    cout << "�����`��\�����܂��B\n";
//  /*  cout << "��ӂ́F";   cin >> n;*/
//
//    put_square(5, t);          // ���n�̐����`��'*'�ŕ\��
//   /* put_square(5);*/
//    cout << "�����`��\�����܂��B\n";
//   /* cout << "�����́F";   cin >> h;
//    cout << "�����́F";   cin >> w;*/
//
//    put_rectangle(4,3,c);    // ������h�ŉ�����w�̒����`��'+'�ŕ\��
//    /*put_rectangle(4,3);*/
//}

// �z��̊e�v�f��1, 2, 3, 4, 5�ŏ��������ĕ\���i�v�f�����v�Z�ɂ���ċ��߂�j

#include <iostream>

using namespace std;

int main()
{
     int a[] = { 1, 2, 3, 4, 5, 6 ,7};   
    int a_size = sizeof(a) / sizeof(a[0]);   // �z��a�̗v�f��
    for (int i = 0; i < a_size; i++)
        cout << "a[" << i << "] = " << a[i] << '\n';
}