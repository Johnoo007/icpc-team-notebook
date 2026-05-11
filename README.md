# 🏆 ICPC Team Notebook (2026)

This repository serves as the central hub for our ICPC team's competitive programming materials. It includes a curated collection of algorithms, contest templates, and a streamlined development environment optimized for macOS and competitive environments.

## 📂 Project Structure

The repository is organized into specific domains to ensure quick access during contests:

* **`.vscode/`**: Contains shared workspace settings, including build tasks and IntelliSense configurations.
* **`algorithms/`**: Our "Holy Bible" of code. Separated by category: `data_structures`, `dp`, `graph`, `math`, `geometry`, and `string`.
* **`contests/`**: Archived solutions and post-contest reviews from mock sessions and official competitions.
* **`templates/`**: Boilerplate code for various scenarios (Default, Debug, and Stress Testing).
* **`include/bits/`**: A custom implementation of `stdc++.h` to ensure cross-platform compatibility and local IntelliSense support.
* **`docs/`**: Strategic documents including knowledge maps and contest strategies.

## 🚀 Getting Started (Setup)

### 1. Prerequisites
Ensure you have a C++ compiler installed:
* **macOS**: Install via Command Line Tools: `xcode-select --install`
* **Windows**: Recommended to use **MinGW-w64** and add it to your System PATH.

### 2. VS Code Configuration
We have optimized the workspace for a "one-click" run experience using **Code Runner**:
* Open the project in VS Code.
* Install recommended extensions listed in `.vscode/extensions.json`.
* The `settings.json` is pre-configured to include our custom `bits/stdc++.h` path.

### 3. Usage
* **Writing Code**: Use `templates/default_template.cpp` to start.
* **Running**: Use the **Play button** (Code Runner) or `Ctrl+Alt+N` (`Cmd+Option+N` on Mac). The output will appear in the integrated terminal.
* **Input**: Place your test cases in `input.txt` at the root for easy copying.

## 🛠 Maintenance & Cleanliness

### Git Guidelines
To keep the repository clean from binaries and system-specific junk, we use a strict `.gitignore` policy.
* **Binaries**: Compiled files (executables without extensions) are automatically ignored.
* **System Files**: `.DS_Store` and other OS metadata are blocked.

### Code Formatting
While we focus on logic during contests, we aim for readable code in our `algorithms/` folder.
* Use VS Code's default formatter (`Shift+Option+F`) to maintain consistency.

## 🤝 Team Strategy
* **Review Sessions**: After every mock contest, we document our mistakes in `docs/common_mistakes.md`.
* **Notebook Updates**: Only verified and tested algorithms should be committed to the `algorithms/` directory.

---
*Maintained by [John Wongprasittigul](https://github.com/Johnoo007)*
