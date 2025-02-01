## B - First ABC

実行時間制限: 2 sec / メモリ制限: 1024 MB

配点 : 100 点

### 問題文

`A`, `B`, `C` からなる文字列 S が与えられます。S は `A`, `B`, `C` を全て含むことが保証されます。

S を左から 1 文字ずつ見ていったときに、はじめて次の条件を満たした状態になるのは、左から何文字目まで見たときですか？

-   `A`, `B`, `C` が全て 1 回以上出現している。

### 制約

-   3 ≤ N ≤ 100
-   S は `A`, `B`, `C` からなる長さ N の文字列
-   S は `A`, `B`, `C` を全て含む

---

### 入力

入力は以下の形式で標準入力から与えられる。

```
N
S
```

### 出力

答えを出力せよ。

---

### 入力例 1

```
5
ACABB
```

### 出力例 1

```
4
```

左から 4 文字目までに `A` は 2 回, `B` は 1 回, `C` は 1 回出現していて、条件を満たします。
3 文字目以前では条件を満たさないので答えは 4 です。

---

### 入力例 2

```
4
CABC
```

### 出力例 2

```
3
```

左から 3 文字目までに `A`, `B`, `C` は 1 回ずつ出現していて、条件を満たします。

---

### 入力例 3

```
30
AABABBBABABBABABCABACAABCBACCA
```

### 出力例 3

```
17
```

## B - First ABC

Score : 100 points

### Problem Statement

You are given a string S consisting of `A`, `B`, and `C`. S is guaranteed to contain all of `A`, `B`, and `C`.

If the characters of S are checked one by one from the left, how many characters will have been checked when the following condition is satisfied for the first time?

-   All of `A`, `B`, and `C` have appeared at least once.

### Constraints

-   3 ≤ N ≤ 100
-   S is a string of length N consisting of `A`, `B`, and `C`.
-   S contains all of `A`, `B`, and `C`.

---

### Input

The input is given from Standard Input in the following format:

```
N
S
```

### Output

Print the answer.

---

### Sample Input 1

```
5
ACABB
```

### Sample Output 1

```
4
```

In the first four characters from the left, `A`, `B`, and `C` appear twice, once, and once, respectively, satisfying the condition.
The condition is not satisfied by checking three or fewer characters, so the answer is 4.

---

### Sample Input 2

```
4
CABC
```

### Sample Output 2

```
3
```

In the first three characters from the left, each of `A`, `B`, and `C` appears once, satisfying the condition.

---

### Sample Input 3

```
30
AABABBBABABBABABCABACAABCBACCA
```

### Sample Output 3

```
17
```
