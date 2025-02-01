## E - Cards Query Problem

実行時間制限: 2 sec / メモリ制限: 1024 MB

配点 : 300 点

### 問題文

1 から N までの番号がついた N 個の空の箱と、何も書かれていない無数のカードがあります。
Q 個のクエリが与えられるので、順番に処理してください。クエリは次の 3 種類のいずれかです。

-   `1 i j` : カードを 1 枚選んで数 i を書き込み、そのカードを箱 j に入れる
-   `2 i` : 箱 i に入っているカードに書かれた数を**昇順で**すべて答える
-   `3 i` : 数 i が書かれたカードが入っている箱の番号を**昇順で**すべて答える

ただし、以下の点に注意してください。

-   2 番目の形式のクエリにおいては、箱 i の中に同じ数が書かれたカードが複数枚あるときは、入っている枚数と同じ回数だけその数を出力する
-   3 番目の形式のクエリにおいては、数 i が書かれたカードが同じ箱に複数枚入っている場合でも、その箱の番号は 1 度だけ出力する

### 制約

-   1 ≤ N, Q ≤ 2 × 10^5^
-   1 番目の形式のクエリについて、
    -   1 ≤ i ≤ 2 × 10^5^
    -   1 ≤ j ≤ N
-   2 番目の形式のクエリについて、
    -   1 ≤ i ≤ N
    -   このクエリが与えられる時点で箱 i にカードが入っている
-   3 番目の形式のクエリについて、
    -   1 ≤ i ≤ 2 × 10^5^
    -   このクエリが与えられる時点で数 i が書かれたカードが入っている箱が存在する
-   出力するべき数は合計で 2 × 10^5^ 個以下
-   入力はすべて整数

---

### 入力

入力は以下の形式で標準入力から与えられる。

N
Q
query~1~
query~2~
⋮
query~Q~

ただし、query~q~ は q 個目のクエリを表しており、次のいずれかの形式で与えられる。

```
1 i j
```

```
2 i
```

```
3 i
```

### 出力

2 番目の形式のクエリと 3 番目の形式のクエリに対し、順番に答えを出力せよ。
各クエリでは出力するべき要素を**昇順に**空白区切りで出力し、クエリごとに改行せよ。

---

### 入力例 1

```
5
8
1 1 1
1 2 4
1 1 4
2 4
1 1 4
2 4
3 1
3 2
```

### 出力例 1

```
1 2
1 1 2
1 4
4
```

クエリを順に処理していきます。

-   カードに 1 を書き込み、箱 1 に入れます。
-   カードに 2 を書き込み、箱 4 に入れます。
-   カードに 1 を書き込み、箱 4 に入れます。
-   箱 4 に入っているカードに書かれた数は 1, 2 です。
    -   1, 2 の順に出力してください。
-   カードに 1 を書き込み、箱 4 に入れます。
-   箱 4 に入っているカードに書かれた数は 1, 1, 2 です。
    -   1 を 2 度出力することに注意してください。
-   数 1 が書かれたカードが入っている箱は箱 1, 4 です。
    -   箱 4 には数 1 が書かれたカードが 2 枚入っていますが、4 は 1 回しか出力しないことに注意してください。
-   数 2 が書かれたカードが入っている箱は箱 4 です。

---

### 入力例 2

```
1
5
1 1 1
1 2 1
1 200000 1
2 1
3 200000
```

### 出力例 2

```
1 2 200000
1
```

## E - Cards Query Problem

Score : 300 points

### Problem Statement

We have N boxes numbered 1 to N that are initially empty, and an unlimited number of blank cards.
Process Q queries in order. There are three kinds of queries as follows.

-   `1 i j` : Write the number i on a blank card and put it into box j.
-   `2 i` : Report all numbers written on the cards in box i, **in ascending order**.
-   `3 i` : Report all box numbers of the boxes that contain a card with the number i, **in ascending order**.

Here, note the following.

-   In a query of the second kind, if box i contains multiple cards with the same number, that number should be printed the number of times equal to the number of those cards.
-   In a query of the third kind, even if a box contains multiple cards with the number i, the box number of that box should be printed only once.

### Constraints

-   1 ≤ N, Q ≤ 2 × 10^5^
-   For a query of the first kind:
    -   1 ≤ i ≤ 2 × 10^5^
    -   1 ≤ j ≤ N
-   For a query of the second kind:
    -   1 ≤ i ≤ N
    -   Box i contains some cards when this query is given.
-   For a query of the third kind:
    -   1 ≤ i ≤ 2 × 10^5^
    -   Some boxes contain a card with the number i when this query is given.
-   At most 2 × 10^5^ numbers are to be reported.
-   All values in the input are integers.

---

### Input

The input is given from Standard Input in the following format:

N
Q
query~1~
query~2~
⋮
query~Q~

Here, query~q~ denotes the q-th query, which is in one of the following formats:

```
1 i j
```

```
2 i
```

```
3 i
```

### Output

Respond to the queries of the second and third kinds in order.
For each of those queries, print one line containing the elements to be reported **in ascending order**, with spaces in between.

---

### Sample Input 1

```
5
8
1 1 1
1 2 4
1 1 4
2 4
1 1 4
2 4
3 1
3 2
```

### Sample Output 1

```
1 2
1 1 2
1 4
4
```

Let us process the queries in order.

-   Write 1 on a card and put it into box 1.
-   Write 2 on a card and put it into box 4.
-   Write 1 on a card and put it into box 4.
-   Box 4 contains cards with the numbers 1 and 2.
    -   Print 1 and 2 in this order.
-   Write 1 on a card and put it into box 4.
-   Box 4 contains cards with the numbers 1, 1, and 2.
    -   Note that you should print 1 twice.
-   Boxes 1 and 4 contain a card with the number 1.
    -   Note that you should print 4 only once, even though box 4 contains two cards with the number 1.
-   Boxes 4 contains a card with the number 2.

---

### Sample Input 2

```
1
5
1 1 1
1 2 1
1 200000 1
2 1
3 200000
```

### Sample Output 2

```
1 2 200000
1
```
