#ifndef InsertionSort
#define InsertionSort

// Sort auxiliar para o IntroSort
template<typename Iterador, typename Comparator>
void inSort(Iterador begin, Iterador end, Comparator cmp) {
	for (Iterador i = begin + 1; i < end; ++i) {
		auto j = i;
		while (j > begin && cmp(*j, *(j - 1))) {
			auto temp = *j;
			*j = *(j - 1);
			*(j - 1) = temp;
			--j;
		}
	}
}

template<typename Iterador>
void inSort(Iterador begin, Iterador end) {
	inSort(begin, end, [](const auto& a, const auto& b){
		return a < b;
	});
}

#endif
