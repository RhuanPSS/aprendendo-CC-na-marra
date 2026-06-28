#ifndef Sort
#define Sort

/*
 bo troca umas ideia e pensar um pouco.
 Quero ordenar um vetor :D, preferencialmente em O(N log N)
 Quais as opções? Merge Sort ou Quick Sort... E qual a diferença entre eles?
 Um garante a complexidade esperada mas usa mais memória (ruim),
 outro não possui problemas quanto a memória mas possui problemas
 quanto ao pior caso (O(N^2) == ruim tbm)
 O pior caso do Quick Sort tem solução, a função rand() pra
 selecionar um pivot aleatório e reduzir drasticamente
 a chance do pior caso.
 Mas eu só tô usando include do iostream... \o/ rand() não dá \o/

 Então vai ter que ser o sort pesadão com Merge? Ou eu posso forçar
 a barra e implementar meu rand() :3
 ... .. .
 Introsort: Hello there?
 */

template<typename Iterator, typename Comparator>
void sort(Iterator begin, Iterator end, Comparator cmp) {
	// todo
}

template<typename Iterator>
void sort(Iterator begin, Iterator end) {
	sort(begin, end, [](const auto& a, const auto& b){
		return a < b;
	});
}

/*
O Introsort combina 3 estratégias de ordenamento distintas!
Primeiro, vamos aplicar a divisão e conquista do Quick Sort.
Se este processo começar a levar tempo demais (2 * log n),
vamos garantir o resto em O(N log N) pelo Heap Sort!
E a cereja do bolo (ou só pra tirar onda mermo), se restar uma
quantidade baixa de elementos a serem ordenados, usaremos a
alta eficiência em casos pequenos do Insertion Sort pra dar conta!
*\

#endif
