# rabin_miller
Rabin-Miller Primality Testing

# Building 

Create a build dir and enter inside it:

```
mkdir build && cd $_
```

If you want to build and run the benchmark use:

```sh
cmake .. -DCMAKE_BUILD_TYPE=Debug -DBENCHMARK=1 && make
```

To just build the executable without the benchmark run

```sh
cmake .. -DCMAKE_BUILD_TYPE=Debug && make 
```

To run the benchmark and obtain results in CSV file

```
./rabin_miller_bench --benchmark_out_format=csv --benchmark_out=rabin_miller.csv --benchmark_counters_tabular=true
```