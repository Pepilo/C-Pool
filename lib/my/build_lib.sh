#!/bin/bash

LIB_DIR="lib/my"
LIB_NAME="libmy.a"

cd "$(dirname "$0")"/../.. || exit 1

mkdir -p "$LIB_DIR"

SRC_FILES=$(find day0[1-4] -type f -name "*.c" ! -path "*/tests/*" ! -name "*main*.c" ! -name "convert_base.c")

if [ -z "$SRC_FILES" ]; then
    echo "❌ Aucun fichier source trouvé."
    exit 1
fi

gcc -Wall -Wextra -c $SRC_FILES

ar rc "$LIB_DIR/$LIB_NAME" *.o

ranlib "$LIB_DIR/$LIB_NAME"

rm -f *.o

echo "Library $LIB_NAME built successfully in $LIB_DIR"
