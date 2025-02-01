## D - Triple Metre

実行時間制限: 2 sec / メモリ制限: 1024 MB

配点 : 200 点

### 問題文

文字列 S が文字列 T の部分文字列であるとは、次の条件を満たすような整数 i, j (1 ≤ i ≤ j ≤ |T|) が存在することを言います。

-   T の i 文字目から j 文字目までを順番を変えずに抜き出してできる文字列が S と一致する。

文字列 T を `oxx` を 10^5^ 個結合した文字列として定めます。
文字列 S が与えられるので、 S が T の部分文字列である場合は `Yes` を、そうでない場合は `No` を出力してください。

### 制約

-   S は `o` と `x` のみからなる文字列である。
-   S の長さは 1 以上 10 以下である。

---

### 入力

入力は以下の形式で標準入力から与えられる。

```
S
```

### 出力

S が条件を満たす場合は `Yes` を、そうでない場合は `No` を出力せよ。

---

### 入力例 1

```
xoxxoxxo
```

### 出力例 1

```
Yes
```

T のはじめの方を抜き出すと `oxxoxxoxxoxx`... となっています。
T の 3 文字目から 10 文字目までを抜き出した文字列は S と一致するので、 S は T の部分文字列です。よって `Yes` を出力します。

---

### 入力例 2

```
xxoxxoxo
```

### 出力例 2

```
No
```

T から文字列をどのように抜き出しても S と一致しないので、S は T の部分文字列でありません。よって `No` を出力します。

---

### 入力例 3

```
ox
```

### 出力例 3

```
Yes
```

## D - Triple Metre

Score : 200 points

### Problem Statement

A string S is said to be a substring of a string T when there is a pair of integers i and j (1 ≤ i ≤ j ≤ |T|) that satisfy the following condition.

-   The extraction of the i-th through j-th characters of T without changing the order equals S.

Let T be the concatenation of 10^5^ copies of `oxx`.
Given a string S, print `Yes` if S is a substring of T, and `No` otherwise.

### Constraints

-   S is a string consisting of `o` and `x`.
-   The length of S is between 1 and 10 (inclusive).

---

### Input

Input is given from Standard Input in the following format:

```
S
```

### Output

If S satisfies the condition, print `Yes`; otherwise, print `No`.

---

### Sample Input 1

```
xoxxoxxo
```

### Sample Output 1

```
Yes
```

T begins like this: `oxxoxxoxxoxx`... Since the extraction of 3-rd through 10\-th characters of T equals S, S is a substring of T, so `Yes` should be printed.

---

### Sample Input 2

```
xxoxxoxo
```

### Sample Output 2

```
No
```

Since there is no way to extract from T a string that equals S, S is not a substring of T, so `No` should be printed.

---

### Sample Input 3

```
ox
```

### Sample Output 3

```
Yes
```
