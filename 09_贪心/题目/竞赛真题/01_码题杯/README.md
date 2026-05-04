题目链接：https://www.matiji.net/exam/brushquestion/41/4777/C98C14523F069FECB0DEED64F00CEAB0?from=1

题目大意：n个暗器，第i个暗器的杀伤力为vi，有m个修复工具，可以修复编号>=ti,并且杀伤力<=zi的暗器。

思路：将工具按编号从大到小排列，所有暗器从大到小处理，然后去找从ti-n中暗器中杀伤力<=zi最大的数。

用一个指针 j 从 n 往 1 走，把 v[j] 插入到 multiset 中。

当处理到一个工具 (t_i, z_i) 时，先把所有 ≥ t_i 的暗器都插入到 multiset 里，此时 multiset 里的元素就是所有编号满足条件的暗器。

然后在 multiset 里找 ≤ z_i 的最大价值暗器，如果存在，就用掉它，把价值加到答案里，并从 multiset 中删除。

每个暗器只会被插入和删除一次，复杂度为O((n+m)*logn)。
