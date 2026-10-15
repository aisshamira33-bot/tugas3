name: Build Tugas 2

on:
  push:
    branches:
      - main
  workflow_dispatch:

jobs:
  build:
    runs-on: windows-latest

    steps:
      - name: Checkout repository
        uses: actions/checkout@v4

      - name: Compile C++
        shell: bash
        run: g++ tugas_2.cpp -o tugas_2.exe -static

      - name: Upload EXE
        uses: actions/upload-artifact@v4
        with:
          name: tugas_2-exe
          path: tugas_2.exe
