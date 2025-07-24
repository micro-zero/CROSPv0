.PHONY : docs

DEST = docs
DIRS = $(shell find . -maxdepth 1 -type d ! -name '.')
SRCS = $(wildcard $(DIRS)/README.md)

docs :
	mkdir -p $(DEST)
	cp ../util/fig $(DEST) -r
	cp README.md $(DEST)/index.md
	for dir in $(DIRS); do [ -f $$dir/README.md ] && cp $$dir/README.md $(DEST)/$$dir.md; done
	find $(DEST) -type f -name '*.md' -exec sed -i 's|\.\./\.\./util/||g' {} +

clean :
	$(RM) -r $(DEST)
