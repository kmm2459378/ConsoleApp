// 左下直角の三角形を描こう

#include <iostream>

using namespace std;

int main()
{
    char src_[] = "11212312341234512345612345671234567812345678912345678901234567890A1234567890AB1234567890ABC1234567890ABCD1234567890ABCDE1234567890ABCDEF1234567890ABCDEFG1234567890ABCDEFGH1234567890ABCDEFGHI1234567890ABCDEFGHIJ1234567890ABCDEFGHIJK1234567890ABCDEFGHIJKL1234567890ABCDEFGHIJKLM1234567890ABCDEFGHIJKLMN1234567890ABCDEFGHIJKLMNO1234567890ABCDEFGHIJKLMNOP1234567890ABCDEFGHIJKLMNOPQ1234567890ABCDEFGHIJKLMNOPQR1234567890ABCDEFGHIJKLMNOPQRS1234567890ABCDEFGHIJKLMNOPQRST1234567890ABCDEFGHIJKLMNOPQRSTU1234567890ABCDEFGHIJKLMNOPQRSTUV1234567890ABCDEFGHIJKLMNOPQRSTUVW1234567890ABCDEFGHIJKLMNOPQRSTUVWX1234567890ABCDEFGHIJKLMNOPQRSTUVWXY1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char tgt_[2500]; //target

    // 横一列の文字列の入った配列（src_）を一要素ずつ読み込み、
    // 左下直角の三角形を描く配列（tgt_）に代入していく
    // 三角形を上から描き、1行代入する毎に改行コードを代入する

    int s_ = 0;                               //src_の添字を宣言・初期化
    int t_ = 0;                               //tgt_の添字を宣言・初期化
    int w_cnt = 1;                            //三角形の横の長さを宣言・初期化

    while (src_[s_]) {                          //src_の全要素を走査
        for (int i = 1; i <= *src_; i++) {       //三角形を1行ずつ代入するためのループ
            tgt_[t_] = src_[s_];                //src_からtgt_へ代入
            s_++;                             //src_の添字をインクリメント
            t_++;                             //tgt_の添字をインクリメント
        }
        tgt_[t_] = '\n';                        //三角形の1行分の代入が終わったので改行コードをtgt_へ代入
        t_++;                                 //tgt_の添字をインクリメント
        w_cnt++;                                 //三角形の横の長さをインクリメント
    }
    tgt_[t_] = '\0';                          //文字列の最後はナル文字！


    // 左下直角の三角形を描くと同時に高さを計算

    t_ = 0;                                   //tgt_の添字を初期化
    int h_cnt = 0;                            //三角形の縦の長さを計算するためのカウンター

    while (tgt_[t_]) {                          //tgt_の全要素を走査
        cout << tgt_[t_++];                     //tgt_を一要素ずつ画面へ出力
        if (tgt_[t_] == '\n') h_cnt++;              //改行するたびにカウンターをインクリメント
    }

    //結果の表示
    cout << "三角形の段数は" << h_cnt << "段です。\n";

}