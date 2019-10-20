#!/bin/bash
str=('zhangxiaofei' 'zhangruocheng' 'shenling')
echo ${str[*]}
echo ${str[@]}
echo ${#str[@]}

val=`expr 2 + 2`
echo "两数字之和:$val"
expect=`expr 2 + 2`
if [ $val = $expect ]
then 
	echo "我是你妈\n"
else
	echo "我是你儿子\n"
fi

for loop in 1 2 3 4 5 
do 
	echo "the value is:$loop"
done

myfunc(){
	echo "张霞佛诶"
	return 4
}

myfunc
echo "函数的返回值:$?"


