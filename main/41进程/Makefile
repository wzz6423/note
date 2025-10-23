all:test 41Other

test:41process.c
	@gcc -o $@ $^

41Other:41Other.cpp
	@g++ -o $@ $^ -std=c++23

.PHONY:clean
clean:
	@rm -f test 41Other