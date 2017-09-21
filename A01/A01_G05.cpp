#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>


//VECTOR
void vector_i_to_size(std::vector<int>v1) {
	std::cout << "i to size: " << std::endl;
	std::cout << "- ";
	for (int i = 0; i < v1.size(); i++) {
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;
}

void vector_begin_to_end(std::vector<int>v1) {
	std::cout << "begin to end: " << std::endl;
	std::cout << "- ";
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void vector_rbegin_to_rend(std::vector<int>v1) {
	std::cout << "rbegin to rend: " << std::endl;
	std::cout << "- ";
	for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void vector_auto_e(std::vector<int>v1) {
	std::cout << "auto e: " << std::endl;
	std::cout << "- ";
	for (auto e : v1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}


//DEQUE
void deque_i_to_size(std::deque<int>d1) {
	std::cout << "i to size: " << std::endl;
	std::cout << "- ";
	for (int i = 0; i < d1.size(); i++) {
		std::cout << d1[i] << " ";
	}
	std::cout << std::endl;
}

void deque_begin_to_end(std::deque<int>d1) {
	std::cout << "begin to end: " << std::endl;
	std::cout << "- ";
	for (std::deque<int>::iterator it = d1.begin(); it != d1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void deque_rbegin_to_rend(std::deque<int>d1) {
	std::cout << "rbegin to rend: " << std::endl;
	std::cout << "- ";
	for (std::deque<int>::reverse_iterator it = d1.rbegin(); it != d1.rend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void deque_auto_e(std::deque<int>d1) {
	std::cout << "auto e: " << std::endl;
	std::cout << "- ";
	for (auto e : d1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

//LIST
void second_it_l(std::list<int>l1) {
	std::cout << "begin to end: " << std::endl;
	std::cout << "- ";
	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void third_it_l(std::list<int>l1) {
	std::cout << "auto e: " << std::endl;
	std::cout << "- ";
	for (auto e : l1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void fourth_it_l(std::list<int>l1) {
	std::cout << "rbegin to rend: " << std::endl;
	std::cout << "- ";
	for (std::list<int>::reverse_iterator it = l1.rbegin(); it != l1.rend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

//FORWARD LIST
void second_it_fl(std::forward_list<int>fl1) {
	std::cout << "begin to end: " << std::endl;
	std::cout << "- ";
	for (std::forward_list<int>::iterator it = fl1.begin(); it != fl1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void third_it_fl(std::forward_list<int>fl1) {
	std::cout << "auto e: " << std::endl;
	std::cout << "- ";
	for (auto e : fl1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

//MAP
void second_it_l(std::map<int, int>m1) {
	for (auto it = m1.begin(); it != m1.end(); ++it) {
		std::cout << it->first << " => " << it->second << "\n";
	}
	std::cout << std::endl;
}

void fourth_it_l(std::map<int, int>m1) {
	for (auto it = m1.rbegin(); it != m1.rend(); ++it) {
		std::cout << it->first << " => " << it->second << "\n";
	}
	std::cout << std::endl;
}

//SET
void second_it_s(std::set<int>s1) {
	for (std::set<int>::iterator it = s1.begin(); it != s1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void third_it_s(std::set<int>s1) {
	for (auto e : s1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void fourth_it_s(std::set<int>s1) {
	for (std::set<int>::reverse_iterator it = s1.rbegin(); it != s1.rend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}


int main() {

	//VECTOR
	std::cout << "VECTOR:" << std::endl;
	std::vector<int>v1;//Constructor sin argumentos
	std::vector<int>v2({ 5,4,6,7,2 });//constructor con lista de inicialización
	std::vector<int>v3(v2);//constructor por copia
	std::vector<int>v4(5);//constructor con 5 elementos inicializados en 0
	std::vector<int>v5(5, 6);//constructor con 5 elementos inicializados en 6
	std::vector<int>v6(v2.begin(), v2.end());//constructor con interadores copiando v2
	v1.push_back(9);
	v1.push_back(8);
	v1.push_back(0);
	v1.push_back(2);
	v1.push_back(6);
	v5.pop_back();
	v5.push_back(3);

	vector_i_to_size(v1);
	vector_begin_to_end(v2);
	vector_rbegin_to_rend(v6);
	vector_auto_e(v5);

	std::cout << std::endl;

	//DEQUE
	std::cout << "DEQUE:" << std::endl;
	std::deque<int>d1 = { 1, 2, 5, 8, 6 };//constructor con lista de inicialización
	std::deque<int>d2 = d1;//constructor por copia
	std::deque<int>d3(d2.rbegin(), d2.rend());//constructor con interadores copiando d2 del revés
	std::deque<int>d4(d2.begin(), d2.end());//constructor con interadores copiando d2
	std::deque<int>d5;//constructor sin argumentos
	d5.push_back(9);
	d5.push_back(5);
	d5.push_back(7);
	d5.push_front(2);
	d5.push_front(4);

	deque_i_to_size(d1);
	deque_begin_to_end(d5);
	deque_rbegin_to_rend(d3);
	deque_auto_e(d4);

	std::cout << std::endl;

	//LIST
	std::cout << "LIST:" << std::endl;
	std::list<int>l1;//Constructor sin argumentos
	std::list<int>l2({ 8, 1, 3, 6, 2 });//constructor con lista de inicialización
	std::list<int>l3(l2);//constructor por copia
	std::list<int>l4(5);//constructor con 5 elementos inicializados en 0
	std::list<int>l5(5, 3);//constructor con 5 elementos inicializados en 6
	std::list<int>l6(l2.begin(), l2.end());//constructor con interadores copiando v2
	l1.push_back(9);
	l1.push_back(8);
	l1.push_back(0);
	l1.push_back(2);
	l1.push_back(6);
	l5.pop_back();
	l5.push_back(8);

	second_it_l(l2);
	third_it_l(l5);
	fourth_it_l(l6);

	std::cout << std::endl;

	//FORWARD LIST
	std::cout << "FORWARD LIST:" << std::endl;
	std::forward_list<int>fl1;//Constructor sin argumentos
	std::forward_list<int>fl2({ 5,4,6,7,2 });//constructor con lista de inicialización
	std::forward_list<int>fl3(fl2);//constructor por copia
	std::forward_list<int>fl4(5);//constructor con 5 elementos inicializados en 0
	std::forward_list<int>fl5(5, 6);//constructor con 5 elementos inicializados en 6
	std::forward_list<int>fl6(fl2.begin(), fl2.end());//constructor con interadores copiando v2
	fl1.push_front(9);
	fl1.push_front(8);
	fl1.push_front(0);
	fl1.push_front(2);
	fl1.push_front(6);
	fl5.pop_front();
	fl5.push_front(3);

	second_it_fl(fl2);
	third_it_fl(fl5);

	std::cout << std::endl;

	//MAP
	std::cout << "MAP:" << std::endl;

	std::cout << std::endl;

	//SET
	std::cout << "SET:" << std::endl;

	std::cout << std::endl;

	return 0;
}