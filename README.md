#### 函数式编程思想

#####基本思想:
 * `函数式编程思想`：是把操作尽量写成一系列嵌套的函数或者方法调用。
* `函数式编程本质`：就是往方法中传入Block,方法中嵌套Block调用，把代码聚合起来管理。
* `代表`：ReactiveCocoa。

```
    CalculateManager *manager = [[CalculateManager alloc] init];
    float result =  [[manager calculate:^(float result) {
        //(5-2)*3/4
        result+=5;
        result-=2;
        result*=3;
        result/=4;
        return result;
    }] result];

```


