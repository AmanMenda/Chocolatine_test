name: CD

on:
  push:
    branches-ignore:
      - 'ga-ignore-'
  pull_request:
    branches-ignore:
      - 'ga-ignore-'

jobs:
  check_repository_cleanliness:
    runs-on: ubuntu-latest

    steps:
      - uses: actions/checkout@v3
      - name: Unwanted file detected
        run: |
          FILES=$(find . -type f \( -wholename "*#*" -o -name "*~" -o -wholename "#**" \
                -o -iname "*pain_au_chocolat*" -o -name "*.o" -o -name "*.a" \
                -o -name "*.so" -o -name "*.gcno" -o -name "*.gcov" \
                -o -name "*.gcda" -o -type d -path "tmp/**" -o -type \
                f -path "tmp/*.c*" \))
          for file in $FILES; do
            echo "::error ::Unwanted file detected:$file#L1"
          done
          exit 1
