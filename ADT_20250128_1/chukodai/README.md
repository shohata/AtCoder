## A - chukodai

実行時間制限: 2 sec / メモリ制限: 1024 MB

配点 : 100 点

### 問題文

英小文字からなる文字列 S が与えられます。

S の先頭から a 文字目と b 文字目を入れ替えて得られる文字列を出力してください。

### 制約

-   S は英小文字からなる文字列
-   S の長さ |S| は、 2 \\leq |S| \\leq 10 を満たす
-   1 \\leq a < b \\leq |S|
-   a, b は整数

---

### 入力

入力は以下の形式で標準入力から与えられる。

```
S
a b
```

### 出力

答えを出力せよ。

---

### 入力例 1

```
chokudai
3 5
```

### 出力例 1

```
chukodai
```

`chokudai` の 3 文字目 `o` と 5 文字目 `u` を入れ替えると `chukodai` となります。

---

### 入力例 2

```
aa
1 2
```

### 出力例 2

```
aa
```

この入力例では、S の 1 文字目と 2 文字目を入れ替えて得られる文字列は、元の S と同じになります。

---

### 入力例 3

```
aaaabbbb
1 8
```

### 出力例 3

```
baaabbba
```

## A - chukodai

Score : 100 points

### Problem Statement

You are given a string S consisting of lowercase English letters.

Swap the a\-th and b\-th characters from the beginning of S and print the resulting string.

### Constraints

-   S is a string consisting of lowercase English letters.
-   The length of S, |S|, satisfies 2 \\leq |S| \\leq 10.
-   1 \\leq a < b \\leq |S|
-   a and b are integers.

---

### Input

Input is given from Standard Input in the following format:

```
S
a b
```

### Output

Print the answer.

---

### Sample Input 1

```
chokudai
3 5
```

### Sample Output 1

chukodai

After swapping the 3\-rd character `o` and 5\-th character `u` of `chokudai`, we have `chukodai`.

---

### Sample Input 2

```
aa
1 2
```

### Sample Output 2

```
aa
```

In this sample, after swapping the 1\-st and 2\-nd characters of S, we have the same string as S.

---

### Sample Input 3

```
aaaabbbb
1 8
```

### Sample Output 3

```
baaabbba
```
