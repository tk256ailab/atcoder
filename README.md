# AtCoder 解答記録

AtCoderのコンテスト参加記録と解答コードを管理するリポジトリです。

## ディレクトリ構成

```
atcoder/
├── ABC/          # AtCoder Beginner Contest
│   └── xxx/      # コンテスト番号
│       ├── A.cpp
│       ├── B.cpp
│       ├── ...
│       ├── main.cpp       # ローカルテスト用
│       └── review.md      # 総評
├── ARC/          # AtCoder Regular Contest
└── template/     # テンプレートファイル
    ├── code-template.cpp
    ├── review-template.md
    └── contest/           # コンテスト用テンプレート一式
        ├── A.cpp ~ G.cpp
        ├── main.cpp
        └── HowToUse.txt
```

## 使い方

### 1. 新しいコンテストの準備

コンテスト参加時は、`template/contest/` ディレクトリをコピーします。

```bash
# ABC の場合
cp -r template/contest ABC/[コンテスト番号]
cd ABC/[コンテスト番号]

# 総評テンプレートもコピー
cp ../../template/review-template.md review.md
```

これで A.cpp ~ G.cpp と main.cpp が準備されます。

### 2. コンテスト中のワークフロー

1. 各問題のコードを該当ファイル (A.cpp, B.cpp, ...) に書く
2. 書いたコードを `main.cpp` にコピー
3. ローカルでテストを実行:
   ```bash
   clang++ main.cpp -std=c++17 -o main && ./main
   ```
4. テストケースを貼り付けて出力を確認
5. 問題なければAtCoderに提出

### 3. コンテスト後の記録

`review.md`に以下の情報を記録します。

- 開催日
- レート変動
- パフォーマンス
- 各問題の結果と所要時間
- 解法のポイント
- 学んだこと・反省点
- 次回への改善点

## テンプレート

### contest/

コンテスト用のファイル一式:
- **A.cpp ~ G.cpp**: 各問題用のテンプレート
- **main.cpp**: ローカルテスト用のファイル
- **HowToUse.txt**: 使用方法のメモ

各ファイルには競技プログラミング用の基本テンプレートが含まれています:
- `bits/stdc++.h` インクルード
- `ll` 型エイリアス（long long）
- `rep` マクロ（for文の簡略化）
- `YN` マクロ（Yes/No出力）
- 高速化設定（`ios::sync_with_stdio`）

### code-template.cpp

単体で使用する場合の基本テンプレート。

### review-template.md

コンテスト総評用のテンプレート:
- 結果セクション
- 各問題の解法メモ
- 次回への改善点

## コンテスト記録

| コンテスト | 開催日 | レート変動 | 備考 |
|-----------|--------|-----------|------|
| [ABC436](ABC/436/) | 2025-12-13 | 683 → 748 (+65) | E問題初AC |
| [ABC437](ABC/437/) | 2025-12-20 | 748 → 783 (+35) | 累積和+二分探索問題 (D) |
| [ABC438](ABC/438/) | 2025-12-27 | 783 → 826 (+43) | 入緑達成 |

## リンク

- [AtCoder](https://atcoder.jp/)
- [マイページ](https://atcoder.jp/users/tk256ailab)
