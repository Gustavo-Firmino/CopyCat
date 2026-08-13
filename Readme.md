# 📋 Clipboard for Linux (Qt5) 

# CopyCat
```text
  /\_/\
 ( o.o )
  > ^ <
```

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Qt5](https://img.shields.io/badge/Qt5-41CD52?style=for-the-badge&logo=qt&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)

A robust clipboard management tool built with **C++** and the **Qt5** framework, focusing on performance and history management for Linux users.

### The Project
Inspired by the **Windows Clipboard (`Win + V`)**, this tool brings the same convenience to **Linux** in a simple, lightweight, and efficient way.  
It was created to fulfill a personal productivity need and as a challenge to use **C++**, combined with the desired features below:

---

## 🚀 Current Features

- [x] **OOP Architecture:** Fully refactored codebase following Object-Oriented Programming principles.
- [ ] **Data Persistence:** History is automatically saved to a text file.
- [x] **Graphical User Interface (GUI):** Intuitive interface built using Qt5.
- [x] **Item Management:** Quick addition and clearing of history items.

---

### 📥 Installation & How to Use
1. Access the build directory in the repository: 👉 https://github.com/Gustavo-Firmino/CopyCat/tree/main/build
2. Download the binary file named `CopyCat`
3. To ensure proper organization, place the executable in your Home directory inside a dedicated folder: `mkdir -p ~/CopyCAT`
4. Move the downloaded CopyCat executable into the ~/CopyCAT folder.
5. Make sure the executable has execution permissions: `chmod +x ~/CopyCAT/CopyCat`

### How do I use Copycat in my system?
### 🟦 GNOME (Ubuntu, Fedora, Pop!_OS)
1. Open **Settings** and navigate to **Keyboard**.
2. Scroll to the bottom of the page and click **View and Customize Shortcuts**.
3. Select **Custom Shortcuts** and click the **Add Shortcut** (`+`) button.
4. Fill in the fields as follows:
   * **Name:** `CopyCat`
   * **Command:** `/home/YOUR_USERNAME/CopyCAT/CopyCat` *(replace `YOUR_USERNAME` with your system username)*
   * **Shortcut:** Press <kbd>Super</kbd> + <kbd>C</kbd>
5. Click **Add**.

### 🟦 KDE Plasma (Kubuntu, Manjaro KDE, Fedora KDE)
1. Open **System Settings** and go to **Shortcuts**.
2. Click **Add New** $\rightarrow$ **Command Shortcut**.
3. Configure the fields:
   * **Name:** `CopyCat`
   * **Command:** `/home/YOUR_USERNAME/CopyCAT/CopyCat` *(replace `YOUR_USERNAME` with your system username)*
   * **Trigger (Shortcut):** Click the shortcut area and press <kbd>Meta</kbd> + <kbd>C</kbd> *(The Meta key is the Windows/Super key)*
4. Click **Apply**.

### 🟦 XFCE (Xubuntu, Linux Mint XFCE, Manjaro XFCE)
1. Open **Settings Manager** and click **Keyboard**.
2. Go to the **Application Shortcuts** tab.
3. Click the **Add** button:
   * **Command:** `/home/YOUR_USERNAME/CopyCAT/CopyCat` *(replace `YOUR_USERNAME` with your system username)*
4. Click **OK**, and when prompted on screen, press <kbd>Super</kbd> + <kbd>C</kbd>.
5. Click **Close**.

   
---
## 🛠️ Tech Stack

* **Language:** C++11 or higher.
* **GUI Framework:** Qt5 (Widgets).

---

### Prerequisites
... Under development

### Roadmap / Next Steps
- [x] OOP Conversion
- [x] File persistence (History)
- [x] Basic interface with Qt5
- [ ] Refining internal task handling to prevent UI freezing and optimize performance
- [ ] Complete implementation of the GUI and its accompanying features
- [x] Trigger the application using the `WIN/SUPER + C` ("C" OF CAT) shortcut
- [ ] (Under study) Run the application as an OS background service
