#rm -rf build
#mkdir build && cd build
cd build
cmake -DCUDA_TOOLKIT_ROOT_DIR=/usr/local/cuda-12.0 ..
make -j
./features_test
