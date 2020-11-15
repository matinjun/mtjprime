# 实现质数判断
* [prime.hpp](./prime.hpp)里声明并实现了一个质数类Prime，提供isPrime接口来判断一个数是否是质数
  * 具体实现思路为
    1. 使用二分查找在质数集合Prime里是否存在要查找的数
    2. 如果该数超过了上界，需要重新更新质数集合
 * 可以在[here](https://zh.numberempire.com/)里检验正确性