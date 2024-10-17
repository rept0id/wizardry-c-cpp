#!/bin/bash

### # # ###

pathAsset="./assets/million.txt"

### # # ###

touch $pathAsset

echo "" > "$pathAsset"

### # # ###

for ((i=0; i<1000000; i++))
do
    echo ":)" >> "$pathAsset"
done

### # # ###

exit 0