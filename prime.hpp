#include <vector>

namespace mtjprime {
    class Prime
    {
    protected:
        std::vector<int> prime;
        int n;

    public:
        // 生成1~100000内的质数
        Prime(int _n = 100000);
        // 判断是否是质数
        bool isPrime(int m);

    };
};

namespace mtjprime {
    // 注意这里n不需要重新声明默认参数，类中已经声明过
    Prime::Prime(int _n):n(_n){
        printf("n == %d\n", n);
        prime.push_back(2);
        for(int i = 3; i <= n; ++i) {
            bool isprime = true;
            for(auto p : prime) {
                if(!(i % p)) {
                    isprime = false;
                    break;
                }
            }
            if(isprime) {
                prime.push_back(i);
            }
        }

    }
    bool Prime::isPrime(int m) {
        if(m <= n) {
            // 如果不超过上界，就需要使用二分查找查看是否在质数集合中
            int lo = 0;
            int hi = (int)prime.size() - 1;
            int mid;
            while(lo <= hi) {
                mid = (lo + hi) / 2;
                if(prime[mid] == m) {
                    return true;
                }
                if(prime[mid] > m) {
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
            return false;
        }
        // 超过质数上界，需要更新质数集合
        for(n = n + 1; n <= m; ++n) {
            bool isprime = true;
            for(auto p : prime) {
                if(!(n % p)) {
                    isprime = false;
                    break;
                }
            }
            if(isprime) {
                prime.push_back(n);
            }
        }
        if(prime[(int)prime.size() - 1] == m) return true;
        return false;
    }
};