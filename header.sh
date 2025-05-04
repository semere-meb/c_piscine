#!/bin/bash

# Apply 42 header to all .c and .h files recursively using nvim headless
find . -type f \( -name "*.c" -o -name "*.h" \) | while read -r file; do
  echo "Adding header to $file"
  nvim --headless "$file" +Stdheader +wq
done

