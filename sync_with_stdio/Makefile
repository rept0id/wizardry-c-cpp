compile-c:
	@mkdir -p ./bin/c
	@g++ ./src/c/fast.c -o ./bin/c/fast
	@sudo chmod +x ./bin/c/fast

compile-cpp:
	@mkdir -p ./bin/cpp
	@g++ ./src/cpp/slow.cpp -o ./bin/cpp/slow
	@sudo chmod +x ./bin/cpp/slow
	@g++ ./src/cpp/fast.cpp -o ./bin/cpp/fast
	@sudo chmod +x ./bin/cpp/fast

compile: compile-c compile-cpp

prepare-assets:
	@sudo chmod +x ./utils/millionAsset.sh
	@./utils/millionAsset.sh

prepare: prepare-assets compile

benchmark:
	@echo "--- - - ---";
	@echo "";

	@echo "C : Fast";
	@echo "---"
	@time -p ./bin/c/fast < ./assets/million.txt

	@echo "";
	@echo "--- - - ---";
	@echo "";

	@echo "C++ : Slow";
	@echo "---"
	@time -p ./bin/cpp/slow < ./assets/million.txt

	@echo "";
	@echo "--- - - ---";
	@echo "";

	@echo "C++ : Fast";
	@echo "---"
	@time -p ./bin/cpp/fast < ./assets/million.txt

	@echo "";
	@echo "--- - - ---";
