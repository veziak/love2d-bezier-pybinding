
### Export Love2d c++ bezier_curve code to python with pybind11
 
install pybind11 https://pybind11.readthedocs.io/en/stable/installing.html
```shell
pip install pybind
```

build .so file 
```shell
cd src
cmake -DPYTHON_EXECUTABLE:FILEPATH=/usr/bin/python3.12 .
make 
```
it will produce bezier_curve.cpython-312-x86_64-linux-gnu.so (on linux machine)

run python script to test it
```shell
python3.12 test.py
```

to view so file symbols
```shell
nm -gD bezier_curve.cpython-312-x86_64-linux-gnu.so
```