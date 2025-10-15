import std;

int main() {
	std::vector<int> v1 = { 1,2,3,4,5,6 };
	for(int i = 0; i < v1.size(); i++) {
		//std::println("place: {}, value: {}", &(v1[i]), v1[i]);
		std::cout << "place: " << &(v1[i]) << ", value: " << v1[i] << std::endl;
	}

	std::list<int> v2 = { 1,2,3,4,5,6 };
	for(auto it = v2.begin(); it != v2.end(); it++) {
		//std::println("place: {}, value: {}", &(*it), *it);
		std::cout << "place: " << &(*it) << ", value: " << *it << std::endl;
	}

	return 0;
}