# ComplexNumber

A lightweight library that provides a simple `ComplexNumber` class for working with complex number values.

> Note: `ComplexNumber` supports from `C++20` to latest

## What can the `ComplexNumber` class do

## How to build examples

1. Configure all projects

```bash
cmake -B build -S . -DMATHO_BUILD_COMPLEX_NUMBER_EXAMPLES=ON
```

2. build projects

```bash
# Build all examples
cmake --build build

# Or just one
cmake --build build --target example_01_print_complex
```

3. Run the example. Also you can see more examples [here](examples).

```sh
./build/examples/example_01_print_complex.exe
# OR
./build/examples/Debug/example_01_print_complex.exe
```

## Usage in your project

### CMake-based project

1. Add the ComplexNumber library as a subdirectory:

```cmake
add_subdirectory(path/to/ComplexNumber)
```

2. Link it to your target:

```cmake
target_link_libraries(MyApp PRIVATE matho::ComplexNumber)
target_include_directories(MyApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/path/to/ComplexNumber/include)
```
