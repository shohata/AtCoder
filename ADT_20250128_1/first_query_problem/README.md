## C - First Query Problem

実行時間制限: 2 sec / メモリ制限: 1024 MB

配点 : 200 点

### 問題文

整数 N と長さ N の数列 A=(A~1~,A~2~,…,A~N~) が与えられます。

クエリが Q 個与えられるので、与えられた順番に処理してください。 クエリは次の 2 種類のいずれかです。

-   `1 k x` : A~k~ の値を x に変更する。
-   `2 k` : A~k~ の値を出力する。

### 制約

-   1 ≤ N ≤ 10^5^
-   1 ≤ Q ≤ 10^5^
-   0 ≤ A~i~ ≤ 10^9^ (1 ≤ i ≤ N)
-   どのクエリについても、1 ≤ k ≤ N
-   1 番目の形式のクエリについて、0 ≤ x ≤ 10^9^
-   2 番目の形式のクエリが 1 つ以上存在する
-   入力はすべて整数

---

### 入力

入力は以下の形式で標準入力から与えられる。

N
A~1~ A~2~ … A~N~
Q
query~1~
query~2~
⋮
query~Q~

ただし、query~i~ は i 個目のクエリを表しており、次の形式のいずれかで与えられる。

```
1 k x
```

```
2 k
```

### 出力

2 番目の形式のクエリの回数を q 回として q 行出力せよ。 j (1 ≤ j ≤ q) 行目には、2 番目の形式のクエリのうち j 個目のものに対する答えを出力せよ。

---

### 入力例 1

```
3
1 3 5
7
2 2
2 3
1 3 0
2 3
1 2 8
2 2
2 1
```

### 出力例 1

```
3
5
0
8
1
```

はじめ、A=(1,3,5) です。

-   1 つめのクエリにおいて、A=(1,3,5) です。A~2~=3 なので、3 を出力します。
-   2 つめのクエリにおいて、A=(1,3,5) です。A~3~=5 なので、5 を出力します。
-   3 つめのクエリでは、A~3~ の値を 0 に変更し、A=(1,3,0) となります。
-   4 つめのクエリにおいて、A=(1,3,0) です。A~3~=0 なので、0 を出力します。
-   5 つめのクエリでは、A~2~ の値を 8 に変更し、A=(1,8,0) となります。
-   6 つめのクエリにおいて、A=(1,8,0) です。A~2~=8 なので、8 を出力します。
-   7 つめのクエリにおいて、A=(1,8,0) です。A~1~=1 なので、1 を出力します。

---

### 入力例 2

```
5
22 2 16 7 30
10
1 4 0
1 5 0
2 2
2 3
2 4
2 5
1 4 100
1 5 100
2 3
2 4
```

### 出力例 2

```
2
16
0
0
16
100
```

---

### 入力例 3

```
7
478 369 466 343 541 42 165
20
2 1
1 7 729
1 6 61
1 6 838
1 3 319
1 4 317
2 4
1 1 673
1 3 176
1 5 250
1 1 468
2 6
1 7 478
1 5 595
2 6
1 6 599
1 6 505
2 3
2 5
2 1
```

### 出力例 3

```
478
317
838
838
176
595
468
```

## C - First Query Problem

Score : 200 points

### Problem Statement

You are given an integer N and a sequence A=(A~1~,A~2~,…,A~N~) of length N.

Given Q queries, process them in the given order. Each query is of one of the following two kinds:

-   `1 k x` : set the value A~k~ to x.
-   `2 k` : print the value A~k~.

### Constraints

-   1 ≤ N ≤ 10^5^
-   1 ≤ Q ≤ 10^5^
-   0 ≤ A~i~ ≤ 10^9^ (1 ≤ i ≤ N)
-   1 ≤ k ≤ N for all queries.
-   0 ≤ x ≤ 10^9^ for all queries of the first kind.
-   There is at least one query of the second kind.
-   All values in the input are integers.

---

### Input

The input is given from Standard Input in the following format:

N
A~1~ A~2~ … A~N~
Q
query~1~
query~2~
⋮
query~Q~

Here, query~i~ denotes the i-th query, given in one of the following formats:

```
1 k x
```

```
2 k
```

### Output

Print q lines, where q is the number of queries of the second kind. The j-th (1 ≤ j ≤ q) line should contain the response to the j-th such query.

---

### Sample Input 1

```
3
1 3 5
7
2 2
2 3
1 3 0
2 3
1 2 8
2 2
2 1
```

### Sample Output 1

```
3
5
0
8
1
```

Initially, A=(1,3,5).

-   For the 1-st query, A=(1,3,5), where A~2~=3, so 3 should be printed.
-   For the 2-nd query, A=(1,3,5), where A~3~=5, so 5 should be printed.
-   The 3-rd query sets the value A~3~ to 0, making A=(1,3,0).
-   For the 4-th query, A=(1,3,0), where A~3~=0, so 0 should be printed.
-   The 5-th query sets the value A~2~ to 8, making A=(1,8,0).
-   For the 6-th query, A=(1,8,0), where A~2~=8, so 8 should be printed.
-   For the 7-th query, A=(1,8,0), where A~1~=1, so 1 should be printed.

---

### Sample Input 2

```
5
22 2 16 7 30
10
1 4 0
1 5 0
2 2
2 3
2 4
2 5
1 4 100
1 5 100
2 3
2 4
```

### Sample Output 2

```
2
16
0
0
16
100
```

---

### Sample Input 3

```
7
478 369 466 343 541 42 165
20
2 1
1 7 729
1 6 61
1 6 838
1 3 319
1 4 317
2 4
1 1 673
1 3 176
1 5 250
1 1 468
2 6
1 7 478
1 5 595
2 6
1 6 599
1 6 505
2 3
2 5
2 1
```

### Sample Output 3

```
478
317
838
838
176
595
468
```
