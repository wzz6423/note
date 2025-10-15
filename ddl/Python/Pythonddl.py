# # 本视频为期末速成系列，故只讲解简单的语法，不多进行深入探讨
# """
#
# # """
# # '''
# # '''
# #
# # name = "Alice"  # 字符串变量
# # age = 18  # 整数变量
# # is_student = True  # 布尔变量
# #
# # a = 0.1234
# # b = 0.1
# # print(a - b)
# #
# # if a - b == 0.0234:
# #     print("haha")
# # else:
# #     print("hehe")
# #
# # esp = 0.00000000001
# # if abs(a - b) > esp:
# #     print("haha")
# # else:
# #     print("hehe")
#
# # # 列表（增删改查）
# # nums = (1, 2, 3)
# # nums.append(4)  # 增：[1,2,3,4]
# # nums[0] = 0     # 改：[0,2,3,4]
# # del nums[1]     # 删：[0,3,4]
# #
# # # 字典（键值对操作）
# # person = {"name": "Alice", "age": 18}
# # print(person["name"])  # 查：Alice
# # person["gender"] = "女"  # 增：添加新键值对
# # person["age"] = 19      # 改：更新值
# #
# # # 字符串（切片）
# # s = "Python"
# # print(s[0:3])  # 取前3个字符：Pyt（左闭右开）
# #
#
# # a = 5
# # print(a)
# # a *= 3  # 等价于 a = a + 3 → a=8
# # print(a)
# #
# # print(2 == 2)  # True
# # print(3 > 5)   # False
# #
# # print(True and False)  # False
# # print(3 > 2 or 1 > 5)  # True
# # print(not True)        # False
#
# # a = 1
# # print(f"a: {a}") # format
#
# # print(2 in [1, 2, 3])  # True
# #
# # a = [1]
# # b = [1]
# # print(a == b)  # True（值相等）
# # print(a is b)  # False（不是同一对象）
#
# score = 85
#
# if score >= 90:
#     print("优秀")
# elif score >= 80:  # 上一个条件不满足时判断
#     print("良好")
# elif score >= 60:
#     print("及格")
# else:  # 所有条件都不满足时执行
#     print("不及格")  # 输出：良好
#
#
#
#
# def handle_data(data):
#     """根据不同类型/结构的数据进行处理"""
#     match data:
#         # 1. 匹配具体值
#         case 0:
#             print("匹配到数字 0")
#
#         # 2. 匹配类型（并绑定变量）+ 带条件判断（guard）
#         case int(num) if num > 0:  # 匹配正整数
#             print(f"匹配到正整数: {num}")
#         case int(num) if num < 0:  # 匹配负整数
#             print(f"匹配到负整数: {num}")
#
#         # 3. 匹配字符串（支持部分匹配）
#         case "hello":
#             print("匹配到字符串 'hello'")
#         case str(s) if s.startswith("error"):  # 匹配以 error 开头的字符串
#             print(f"匹配到错误信息: {s}")
#
#         # 4. 匹配列表/元组的结构（按长度和元素匹配）
#         case [x, y]:  # 匹配长度为 2 的列表
#             print(f"匹配到二元列表: 第一个元素 {x}, 第二个元素 {y}")
#         case (a, b, c):  # 匹配长度为 3 的元组
#             print(f"匹配到三元元组: 元素 {a}, {b}, {c}")
#
#         # 5. 匹配字典（按键匹配，忽略额外键）
#         case {"name": name, "age": age}:  # 匹配包含 name 和 age 键的字典
#             print(f"匹配到用户信息: 姓名 {name}, 年龄 {age}")
#
#         # 6. 通配符（匹配所有未被上面覆盖的情况）
#         case _:
#             print(f"未匹配到特定模式，数据为: {data}")
#
#
# # 测试不同类型的数据
# handle_data(0)  # 匹配到数字 0
# handle_data(10)  # 匹配到正整数: 10
# handle_data(-5)  # 匹配到负整数: -5
# handle_data("hello")  # 匹配到字符串 'hello'
# handle_data("error: 连接失败")  # 匹配到错误信息: error: 连接失败
# handle_data([100, "apple"])  # 匹配到二元列表: 第一个元素 100, 第二个元素 apple
# handle_data((True, 3.14, "ok"))  # 匹配到三元元组: 元素 True, 3.14, ok
# handle_data({"name": "Alice", "age": 30, "gender": "女"})  # 匹配到用户信息: 姓名 Alice, 年龄 30
# handle_data(True)  # 未匹配到特定模式，数据为: True


# fruits = ["苹果", "香蕉", "橘子"]
# for fruit in fruits:
#     print(fruit)  # 依次输出每个水果
#
# fruits = ("苹果", "香蕉", "橘子")
# for fruit in fruits:
#     print(fruit)  # 依次输出每个水果
#
# # 配合range()生成数字序列（range(开始, 结束, 步长)，左闭右开）
# for i in range(1, 5):  # 1,2,3,4
#     print(i)

# count = 0
# while count < 3:
#     print(f"循环中: {count}")
#     count += 1  # 必须更新条件，否则死循环
# # 输出3次"循环中"

# for i in range(5):
#     if i == 2:
#         continue  # 跳过i=2
#     if i == 4:
#         break     # 当i=4时跳出循环
#     print(i)  # 输出：0,1,3

# def func(a, b=2, *args, **kwargs):  # b是默认参数
#     print(a, b, args, kwargs)
#
# func(1)  # 1 2 () {}（a=1，b用默认值）
# func(1, 3, 4, 5, x=6, y=7)  # 1 3 (4,5) {'x':6, 'y':7}


# class Person:  # 定义类（首字母通常大写）
#     # 类属性（所有实例共享）
#     species = "人类"
#
#     # 构造方法：初始化实例时调用（self是当前实例本身）
#     def __init__(self, name, age):
#         # 实例属性（每个实例独有）
#         self.name = name
#         self.age = age
#
#     # 实例方法（必须包含self参数）
#     def greet(self):
#         return f"我是{self.name}，今年{self.age}岁"
#
#
# class Student(Person):  # 继承Person类
#     def __init__(self, name, age, school):
#         # 调用父类构造方法
#         super().__init__(name, age)
#         # Person.__init__(name, age)
#         self.school = school  # 新增子
#         # 类属性
#
#     # 重写父类方法
#     def greet(self):
#         return f"我是{self.name}，在{self.school}上学"
#
#
# s1 = Student("Bob", 16, "一中")
# print(s1.greet())  # 输出：我是Bob，在一中上学
#
# # 创建对象（实例化）
# p1 = Person("Alice", 18)
# print(p1.name)  # 访问实例属性：Alice
# print(p1.greet())  # 调用实例方法：我是Alice，今年18岁
# print(p1.species)  # 访问类属性：人类

# with open("test.txt", "w", encoding="utf-8") as f:
#     f.write("Hello, Python!\n")  # 写入一行
#     f.writelines(["第一行\n", "第二行\n"])  # 写入多行
#
# # 读取文件
# with open("test.txt", "r", encoding="utf-8") as f:
#     # print(f.read())  # 读全部内容
#     print(f.readline())  # 读一行
#     print(f.readlines())  # 读所有行，返回列表

# 1. 导入整个模块
import math
print(math.sqrt(4)) # 调用： 模块名.函数 → 2.0

# 2. 导入模块中的特定内容
from math import sqrt, pi
print(sqrt(9)) # 直接用函数名 → 3.0
print(pi) # 3.14159...

# 3. 给模块起别名
import datetime as dt
print(dt.datetime.now()) # 当前时间

# 4. 导入所有内容（ 不推荐， 易冲突）
from math import *

