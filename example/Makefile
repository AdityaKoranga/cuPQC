NVCC=nvcc
NVCC_FLAGS=-dlto -arch=native -std=c++17 -O3 

CUPQC_INCLUDE_DIR=../include/cupqc
COMMONDX_INCLUDE_DIR=../include/
#/commondx

CUDA_BIN_DIR=$(shell dirname `which $(NVCC)`)
CUDA_INCLUDE_DIR=$(CUDA_BIN_DIR)/../include

SRCS = $(wildcard *.cu)
TARGETS=$(patsubst %.cu,%,$(SRCS))

$(TARGETS): %: %.cu
	$(NVCC) $(NVCC_FLAGS) -L../lib/ -lcupqc  -o $@ $<  -I$(COMMONDX_INCLUDE_DIR) -I$(CUPQC_INCLUDE_DIR) 
.PHONY: all clean

all: $(TARGETS) 

clean:
	rm -f $(TARGETS)

.DEFAULT_GOAL := all
