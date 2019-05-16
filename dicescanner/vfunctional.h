#pragma once

using namespace std;

#include <vector>
#include <functional>

std::vector<int> x;

template <typename T, typename U>
static T vreduce(const std::vector<T>& vectorToReduce,
	const std::function<U(U, T)>& reduceFn,
	const U initialValue) {
	U result = initialValue;
	for (auto e : vectorToReduce) {
		result = reduceFn(result, e);
	}
	return result;
}

template <typename T, typename U>
static std::vector<U> vmap(const std::vector<T>& data, const std::function<U(T)> mapper) {
	std::vector<U> result;
	for (auto e : data) {
		result.push_back(mapper(e));
	};
	return result;
}

template <typename T>
static std::vector<T> vfilter(const std::vector<T>& data, std::function<bool(T)> filterFn) {
	std::vector<T> result = data;
	result.erase(remove_if(result.begin(), result.end(), [filterFn](T element) {
		return !filterFn(element);
		}), result.end());
	return result;
}

static double median(const vector<double> &numbers)
{
	vector<double> sorted = numbers;
	std::sort(sorted.begin(), sorted.end(), [](double a, double b) { return a < b; });
	if (sorted.size() == 0) {
		return 0;
	} else if (sorted.size() % 2 > 0) {
		return sorted[sorted.size() / 2];
	} else {
		auto c = sorted.size() / 2;
		return (sorted[c] + sorted[c-1]) / 2;
	}
}
