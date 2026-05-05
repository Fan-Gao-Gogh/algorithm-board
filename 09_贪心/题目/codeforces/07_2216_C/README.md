题目链接：https://codeforces.com/contest/2216/problem/C

题目大意：给定长度为n的数组a，一个参数k，以及一个M集合{p,q};p<=q;

对数组a进行以下操作：选区间长度至少为k的区间，使得a_i=a_i mod M集合中的任意一个数。

最后求得数组a的最小值.

思路：要使得a_i最小，只有两种做法：

1，a_i mod p

2,a_i mod q mod p;

我们只需要找到一个区间长度为k的子数组，其他位置都可以取得两种做法的最小值。那么我们就需要找到这个子数组的最小值。

答案=区间外的总和+区间内的总和。

区间外的总和=全体区间理想总和（total_min）-区间内的理想总和(sum_min);

区间内的总和=只mod一种方法的最优解(sum_p,sum_q_p)

答案=total_min-sum_min+min(sum_p,sum_q_p)。


