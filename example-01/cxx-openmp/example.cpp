#include <iostream>
#include <string>

#ifdef USE_OPENMP
#include <omp.h>
#endif

int main(int argc, char *argv[]) {
#ifdef USE_OPENMP
  std::cout << "number of available processors: " << omp_get_num_procs()
            << std::endl;
  std::cout << "number of threads: " << omp_get_max_threads() << std::endl;
#endif

  auto n = std::stol(argv[1]);
  std::cout << "we will form sum of numbers from 1 to " << n << std::endl;

#ifdef USE_OPENMP
  // start timer
  auto t0 = omp_get_wtime();
#endif

  auto s = 0LL;
#ifdef USE_OPENMP
#pragma omp parallel for reduction(+ : s)
#endif
  for (auto i = 1; i <= n; i++) {
    s += i;
  }

#ifdef USE_OPENMP
  // stop timer
  auto t1 = omp_get_wtime();
#endif

  std::cout << "sum: " << s << std::endl;
#ifdef USE_OPENMP
  std::cout << "elapsed wall clock time: " << t1 - t0 << " seconds" << std::endl;
#endif

  return 0;
}
