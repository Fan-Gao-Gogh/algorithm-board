
auto it=st.find();

it==st.end();说明不存在

insert(x)	将元素 x 插入多重集合	O(log n)

erase(it or val)	从多重集合中删除一个或多个元素	O(k + log n)，其中 k 为删除的元素的个数

find(x)	在多重集合中查找元素 x，返回迭代器	O(log n)

count(x)	返回 x 在多重集合中出现的次数	O(log n)

size()	返回多重集合中元素的个数	O(1)

empty()	判断多重集合是否为空	O(1)

clear()	清空多重集合中的所有元素	O(n)

begin()	返回指向多重集合中第一个元素位置的迭代器	O(1)

end()	返回指向多重集合中最后一个元素的下一个位置的迭代器	O(1)

lowwer_bound() 返回第一个大于等于 (>=) 指定值的元素的迭代器。O(log n)

upper_bound() 返回第一个大于 (>) 指定值的元素的迭代器。O(log n)

