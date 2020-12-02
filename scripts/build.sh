cd ..
mkdir -p build bin coverage
cd build && cmake .. && make && ../bin/app_test
echo "Done."