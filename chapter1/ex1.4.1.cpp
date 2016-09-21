/*
   これはC形式のコメント
   このプログラムは、整数が奇数か偶数かを判別する
 */
 #include <iostream>
 using namespace std;

 int main()
 {
     int num;   // これはC++形式の単一コメント

     // 数値を読み取る
     cout << "テスト値を入力：";
     cin >> num;

     // 奇数か偶数かを調べる
     if ((num % 2) == 0) cout << "数字は偶数\n";
     else cout << "数字は奇数\n";
     
     return 0;
 }