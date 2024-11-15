// //二つの整数値の和と積を関数によって求める（間違い）
//
//#include <iostream>
//
//using namespace std;
//
////--- xとyの和と積をsumとmulに求める（間違い）---//
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
//    cout << "整数a：";   cin >> a;
//    cout << "整数b：";   cin >> b;
//
//    sum_mul(a, b, &wa, &seki);        // aとbの和と積を求める（？）
//
//    cout << "和は" << wa << "です。\n";
//    cout << "積は" << seki << "です。\n";
//}

// //正方形と長方形を表示
//
//#include <iostream>
//
//using namespace std;
//
////--- 文字cをn個連続表示 ---//
//void put_nchar(int n, char c)
//{
//    while (n-- > 0)
//        cout << c;
//}
//
////--- 文字cを並べて一辺の長さnの正方形を表示 ---//
//void put_square(int n, char c)
//{
//    for (int i = 1; i <= n; i++) {      // 全部でn行
//        put_nchar(n, c);                // 文字cをn個表示して
//        cout << '\n';                   // 改行する
//    }
//}
//
////--- 文字cを並べて高さがhで横幅がwの長方形を表示 ---//
//void put_rectangle(int h, int w, char c)
//{
//    for (int i = 1; i <= h; i++) {      // 全部でh行
//        put_nchar(w, c);                // 文字cをw個表示して
//        cout << '\n';                   // 改行する
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
//    cout << "正方形を表示します。\n";
//  /*  cout << "一辺は：";   cin >> n;*/
//
//    put_square(5, t);          // 一辺nの正方形を'*'で表示
//   /* put_square(5);*/
//    cout << "長方形を表示します。\n";
//   /* cout << "高さは：";   cin >> h;
//    cout << "横幅は：";   cin >> w;*/
//
//    put_rectangle(4,3,c);    // 高さがhで横幅がwの長方形を'+'で表示
//    /*put_rectangle(4,3);*/
//}

// 配列の各要素を1, 2, 3, 4, 5で初期化して表示（要素数を計算によって求める）

#include <iostream>

using namespace std;

int main()
{
     int a[] = { 1, 2, 3, 4, 5, 6 ,7};   
    int a_size = sizeof(a) / sizeof(a[0]);   // 配列aの要素数
    for (int i = 0; i < a_size; i++)
        cout << "a[" << i << "] = " << a[i] << '\n';
}