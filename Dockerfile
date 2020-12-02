FROM alpine:3.6

LABEL maintainer=museop92@gmail.com

RUN apk add --no-cache -q -f git make cmake g++ gcovr

RUN git clone -q https://github.com/google/googletest.git /googletest \
  && mkdir -p /googletest/build \
  && cd /googletest/build \
  && cmake .. && make && make install \
  && cd / && rm -rf /googletest