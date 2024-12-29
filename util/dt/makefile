DTB = $(patsubst %.dts, %.dtb, $(wildcard *.dts))

.PHONY : all clean

all : $(DTB)

clean :
	$(RM) $(DTB)

%.dtb : %.dts
	dtc $^ -o $@
