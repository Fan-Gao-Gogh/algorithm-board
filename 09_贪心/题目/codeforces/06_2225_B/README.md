题目链接：https://codeforces.com/contest/2225/problem/B

题目大意：现在有一个只包含字母ab的字符串，我们最多做一次以下的操作，使得这个字符串变为a与b互相交替的字符串。

选择一个连续的子字符串，将其字母进行反转，a变为b，b变为a（第二步可做可不做），最后将整个子字符串进行翻转。

思路：我们找到字符串中不是交替字符点的数量，如果cnt>2,则yes，如果从cnt<=2,则一定可以做到。

例如：aabb ，cnt=2，第三步翻转ab即可。

aaa，cnt=2，只需要对a进行反转。

aabababb，cnt=2,第三步对ababab进行翻转，得到abababab。

如果为aaaa，cnt=3，无论如何都做不到。
