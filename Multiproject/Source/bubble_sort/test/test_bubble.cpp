#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "bubble_sort.hpp"

TEST(ArraysEqual, AnyElementsCount) {
	int actual[] = {1, 8, 2, 5, 3, 11};
	const int m = sizeof(actual) / sizeof(actual[0]);
	dnv::sort(actual, m);
	int expected[] = {1, 2, 3, 5, 8, 11};
	const int n = sizeof(expected) / sizeof(expected[0]);

	ASSERT_EQ(n, m)
		<< "Разные размеры ожидаемого и отсортированного массивов";

	for (int i = 0; i < m; i++) {
		ASSERT_EQ(expected[i], actual[i]) 
			<< "Массив ожидаемый и отсортировнный отличаются в элементе с индексом "
			<< i;
	}
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}