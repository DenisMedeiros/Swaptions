PREFIX := ${PARSECDIR}/pkgs/apps/swaptions/inst/${PARSECPLAT}
DEF =
INCLUDE =

# Opções de vetorização (o relatório pode ser all, missed, optimized, note)
# Fonte: https://twiki.cern.ch/twiki/bin/view/LHCb/VectorizeSource-code
#CXXFLAGS = -Wall -O2 -ftree-vectorize -fopt-info-vec-optimized -ffast-math -funsafe-loop-optimizations -ftree-loop-if-convert-stores 

# Para realizar o profiling das funções do código.
#CXXFLAGS := $(CXXFLAGS) -pg

CXX = icpc
CXXFLAGS = -O2 -qopt-report=5 -qopt-report-phase=vec
#CXXFLAGS = -O2 -no-prec-div -O2 -D NOFUNCCALL -qopt-report=1 -qopt-report-phase=vec -prof-gen -prof-dir=./

# Para habilitar a versão com threads.
# version = pthreads

EXEC = swaptions 

ifdef version
  ifeq "$(version)" "pthreads" 
    DEF := $(DEF) -DENABLE_THREADS
    CXXFLAGS := $(CXXFLAGS) -pthread
  endif
  ifeq "$(version)" "tbb"
    DEF := $(DEF) -DENABLE_THREADS -DTBB_VERSION
    LIBS := $(LIBS) -ltbb
  endif
endif

OBJS= CumNormalInv.o MaxFunction.o RanUnif.o nr_routines.o icdf.o \
	HJM_SimPath_Forward_Blocking.o HJM.o HJM_Swaption_Blocking.o  \
	HJM_Securities.o

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(DEF) $(OBJS) $(INCLUDE) $(LIBS) -o $(EXEC)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(DEF) -c $*.cpp -o $*.o

.c.o:
	$(CXX) $(CXXFLAGS) $(DEF) -c $*.c -o $*.o

clean:
	rm -f $(OBJS) $(EXEC)

install:
	mkdir -p $(PREFIX)/bin
	cp -f $(EXEC) $(PREFIX)/bin/$(EXEC)

