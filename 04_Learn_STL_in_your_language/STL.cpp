/*
    Detailed STL Theory: containers, iterators, algorithms, functors (function objects)

    Overview
    --------
    The C++ Standard Template Library (STL) is a set of generic components: containers,
    algorithms, iterators, and function objects (functors). The STL provides
    reusable, efficient building blocks for storing, accessing, and manipulating data.

    Key components:
    - Containers: data structures that store objects (vector, list, deque, set, map, etc.)
    - Iterators: generalized pointers that provide a uniform way to traverse containers
    - Algorithms: generic functions that operate on iterator ranges (sort, find, copy, etc.)
    - Function objects / functors: objects that act like functions (can hold state)

    Design Principles
    -----------------
    - Generic programming: algorithms are written in terms of iterators and type
        requirements, making them work with many container types.
    - Complexity guarantees: many STL operations document time complexity (amortized
        constant, linear, logarithmic). Choosing the right container matters.
    - Separation of concerns: containers manage storage, iterators provide access, and
        algorithms perform operations.

    Containers
    ----------
    Containers are categorized into:
    1) Sequence containers: maintain order of insertion and allow positional access.
         - vector<T>
             * Dynamic array. Contiguous storage. Random access iterators.
             * Typical member functions: ctor, destructor, operator=, size(), capacity(),
                 reserve(n), shrink_to_fit(), empty(), push_back(val), emplace_back(args...),
                 pop_back(), insert(pos, val), erase(pos), clear(), at(i), operator[], front(), back(), data().
             * Complexity: push_back amortized O(1), random access O(1), insert/erase at middle O(n).

         - deque<T>
             * Double-ended queue. Allows fast insert/erase at both ends. Not guaranteed contiguous.
             * Member functions similar to vector: push_front, push_back, pop_front, pop_back,
                 insert, erase. Random access iterators support operator[].
             * Complexity: push/pop at ends O(1), random access O(1), insert/erase at middle O(n).

         - list<T>
             * Doubly-linked list. Bi-directional iterators only.
             * Member functions: push_front, push_back, pop_front, pop_back, insert (O(1) given iterator),
                 erase (O(1) given iterator), splice, remove, unique, sort (member sort), merge.
             * Complexity: insert/erase at known position O(1); no random access.

         - forward_list<T>
             * Singly-linked list. Saves memory vs list. Only forward iterators.
             * Member functions: before_begin(), insert_after, emplace_after, erase_after, push_front, pop_front.

         - array<T, N>
             * Fixed-size array wrapper. Contiguous storage. Size known at compile time.
             * Member functions: fill, at, operator[], data, size, front, back.

         - string (std::basic_string)
             * Specialized sequence for characters. Many shared semantics with vector.

    2) Associative containers: store elements in a sorted order by keys (typically implemented
         as balanced binary search trees: red-black trees).
         - set<T>
             * Stores unique keys. Ordered. Key == value.
             * Member functions: insert, erase(key) or erase(iterator), find, count, lower_bound,
                 upper_bound, equal_range, begin/end.
             * Complexity: search/insert/erase O(log n).

         - multiset<T>
             * Like set but allows duplicate keys.

         - map<Key, T>
             * Associates unique keys with mapped values. Ordered by key.
             * Member functions: operator[], at(key), insert, erase, find, lower_bound,
                 upper_bound, equal_range.
             * Complexity: O(log n) for search/insert/erase.

         - multimap<Key, T>
             * Like map but allows duplicate keys.

    3) Unordered associative containers: hash-table based (C++11+), average constant time
         for search/insert/erase if hash function is good.
         - unordered_set, unordered_multiset, unordered_map, unordered_multimap
             * Member functions: same conceptual API as ordered versions (insert, find, erase)
             * Additional: rehash(bucket_count), reserve(n) to control load factor.
             * Complexity: average O(1) lookup/insert/erase; worst-case O(n).

    4) Container adapters: provide restricted interface using underlying container
         - stack<T, Container=deque<T>>
             * LIFO. push, pop, top, empty, size.
         - queue<T, Container=deque<T>>
             * FIFO. push, pop, front, back.
         - priority_queue<T, Container=vector<T>, Compare=less<T>>
             * Heap-based. top gives highest priority element. push, pop, top.

    Container Member Functions (common and important details)
    ---------------------------------------------------------
    - Constructors: default, fill (n, val), range(first,last), copy, move, initializer_list.
    - begin(), end(): return iterator to first element and one-past-last. const versions exist.
    - cbegin(), cend(): return const_iterators even on non-const container.
    - rbegin(), rend(): reverse_iterator pair.
    - size(): number of elements. empty() true if size()==0.
    - max_size(): theoretical upper bound based on allocator.
    - clear(): remove all elements.
    - insert/erase: signatures vary by container (by position, by key, by range).
    - swap(other): constant time for most containers (specialized implementations).
    - emplace/emplace_back/emplace_front: construct in-place using forwarded args.

    Iterators
    ---------
    Iterators generalize pointers. They are the bridge between containers and algorithms.
    Iterator categories (in increasing generality):
    - InputIterator: can read values in one-pass input algorithms. (operator*, ++)
    - OutputIterator: can write values in one-pass output algorithms. (operator= via *it)
    - ForwardIterator: multi-pass readable and writable; supports ++.
    - BidirectionalIterator: supports ++ and -- (e.g., list iterators)
    - RandomAccessIterator: supports arithmetic (+, -, +=, -=), offset dereference, O(1) distance. (e.g., vector)

    Iterator operations and member functions (typical):
    - operator*(): dereference to access element.
    - operator->(): access member of pointed-to object.
    - ++it, it++: pre- and post-increment to move to next element.
    - --it, it--: for bidirectional iterators to move backward.
    - it + n / it - n: for random access iterators.
    - it1 - it2: distance for random access iterators.
    - std::advance(it, n): advance by n steps (works for all iterator categories with different complexities).
    - std::distance(first, last): compute distance, linear for non-random-access.

    Iterator invalidation rules (summary):
    - vector: reallocation (when capacity grows) invalidates all iterators; insert/erase invalidates at/after point.
    - deque: insertion at ends may not invalidate all; insertion in middle can invalidate; specifics differ.
    - list/forward_list: insert/erase only invalidate iterators to erased elements; others remain valid.
    - associative containers: insert does not invalidate iterators; erase invalidates only iterators to erased elements.
    - unordered containers: rehashing invalidates all iterators.

    Functors (Function Objects)
    ---------------------------
    - A functor is any type that implements operator(). It can carry state.
    - Advantages over function pointers: can be inlined, templated, store state, and have type information.
    - Examples in STL: std::less<T>, std::greater<T>, std::plus<T>, std::negate<T>.
    - Custom functors: define struct MyCmp { bool operator()(const T&a,const T&b) const { ... } } to provide custom ordering.
    - std::function wraps callables (type-erased), but has overhead compared to templates/functors.

    Algorithms
    ----------
    - Algorithms operate on iterator ranges [first, last). They are non-member template functions.
    - Categories of algorithms:
        * Non-modifying sequence operations: for_each, find, find_if, count, mismatch, equal, search
        * Modifying sequence operations: copy, copy_if, copy_n, move, transform, fill, generate, replace
        * Partitioning: partition, stable_partition, partition_point
        * Sorting and related: sort, stable_sort, partial_sort, nth_element, binary_search, lower_bound, upper_bound
        * Binary search and set operations: merge, set_union, set_intersection, set_difference, includes
        * Heap operations: make_heap, push_heap, pop_heap, sort_heap
        * Min/Max: min_element, max_element, minmax, minmax_element
        * Numeric algorithms: accumulate, inner_product, partial_sum, adjacent_difference
        * Permutations: next_permutation, prev_permutation
        * Utility: swap_ranges, iter_swap

    - Many algorithms accept a custom comparator or projection (C++20) to control ordering or transformation.
    - Complexity: algorithms usually document complexity (linear, logarithmic, n log n). e.g., sort is O(n log n) average.

    Detailed algorithm examples (interface and behavior):
    - std::for_each(InputIt first, InputIt last, Function f)
        * Applies f to each element in [first, last).

    - std::find(InputIt first, InputIt last, const T& value)
        * Scans until value found or range exhausted. Returns iterator to found element or last.
        * Complexity: linear.

    - std::copy(InputIt first, InputIt last, OutputIt d_first)
        * Copies elements in range [first, last) to destination beginning at d_first.
        * Undefined behavior if ranges overlap in certain ways unless using std::copy_backward or memmove-like techniques.

    - std::transform(InputIt first, InputIt last, OutputIt d_first, UnaryOperation op)
        * Applies op to each element and stores result to destination.

    - std::sort(RandomIt first, RandomIt last, Compare comp = std::less<>())
        * Sorts the range using introsort (quick-sort with fallbacks). Requires RandomAccessIterators.
        * Complexity: average O(n log n), worst-case O(n log n) with introsort.

    - std::stable_sort(RandomIt first, RandomIt last, Compare comp)
        * Stable sort preserving relative order of equivalent elements. Requires additional memory.

    - std::binary_search, std::lower_bound, std::upper_bound
        * Work on sorted ranges. lower_bound returns first not-less-than; upper_bound first greater-than.

    Allocators
    ----------
    - Allocator abstraction lets containers use custom memory allocation strategies. The default is std::allocator<T>.
    - Most users do not need custom allocators, but they matter in performance-sensitive contexts.

    C++11/14/17/20 additions (high-level highlights)
    -----------------------------------------------
    - Emplace-family to construct in-place (C++11).
    - Move semantics to avoid copies (C++11).
    - unordered containers (C++11) for hash-based sets/maps.
    - std::array, tuple, and many utility improvements.
    - initializer_list support for container construction.
    - C++17: parallel algorithms (execution policies), std::byte, structured bindings.
    - C++20: ranges library (views, range-based algorithms), projections, concepts for constraints.

    Best Practices
    --------------
    - Choose container by access and modification complexity needs. For random access, use vector/array.
    - Prefer algorithms over hand-written loops for clarity and potential optimization.
    - Use const_iterators or const auto& in ranged-for to avoid copies.
    - Prefer emplace_back/emplace where constructing in place avoids temporaries.
    - Be mindful of iterator invalidation when storing iterators or references to elements.

    Examples (comments only — conceptual usage):
    - Iteration:
        // for(auto it = c.begin(); it != c.end(); ++it) { /* use *it }
        // for(const auto &x : c) { /* range-based for  }*/

// 	- Sorting with custom comparator:
// 		std::vector<Person> v = ...;
// 		std::sort(v.begin(), v.end(), [](const Person&a,const Person&b){ return a.age < b.age; });

// 	- Using associative containers:
// 		std::map<std::string,int> freq;
// 		++freq[word]; // operator[] inserts default 0 then increments

// 	- Using unordered_map with reserve:
// 		std::unordered_map<Key,Value> m;
// 		m.reserve(1000); // avoid rehash until at least this many buckets

// 	- Using algorithms and iterators together:
// 		std::vector<int> a = {1,2,3,4};
// 		std::vector<int> b;
// 		std::copy_if(a.begin(), a.end(), std::back_inserter(b), [](int x){ return x%2==0; });

// 	Common pitfalls
// 	---------------
// 	- Using invalidated iterators after container modification.
// 	- Assuming vector never moves memory — push_back can reallocate.
// 	- Mixing iterator categories: algorithms may require specific iterator capabilities.
// 	- Using operator[] on map (inserts) when you only want to observe; prefer find/at for const behavior.

// 	Further study areas
// 	-------------------
// 	- Dive into specific container source code (e.g., libstdc++ or libc++) to learn implementation details.
// 	- Learn complexity guarantees and exception-safety guarantees for advanced usage.
// 	- Study ranges (C++20) for a more composable way to work with algorithms and containers.

// 	Summary
// 	-------
// 	The STL provides a powerful, consistent set of tools for building efficient C++ programs. Understanding
// 	container properties, iterator categories, common algorithms, and functors lets you write concise and
// 	high-performance code. Practice by replacing hand-written loops with STL algorithms and by selecting the
// 	right container for the job.

// */

// #include <iostream>

// int main() {
// 		// This file contains theory in comments only. No runtime behavior required.
// 		std::cout << "STL theory comments included in source file.\n";
// 		return 0;
// }
