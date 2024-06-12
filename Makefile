OUT_DIR=./out
CC=gcc
MAKECMDGOALS := $(filter-out clean, $(MAKECMDGOALS))

.PHONY: $(MAKECMDGOALS)
$(MAKECMDGOALS):
	$(CC) -Wall $@ -o $(OUT_DIR)/$(@:.c=)

clean:
	rm -rf $(OUT_DIR)/*.o
