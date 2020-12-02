docker run --rm -it -v $PWD:/workspace museop/googletest:1.0 /bin/sh \
    -c "cd /workspace && rm -r build bin coverage"