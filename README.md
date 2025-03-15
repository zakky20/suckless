# dwm - suckless dynamic window manager -  ![dwm-logo-bordered](https://github.com/user-attachments/assets/75410bc9-4d4d-4736-b9d1-5d17f4657e9f)


# Dwm Patches:
  - activetagindicator
  - alwayscenter
  - attachbelow
  - barheight
  - barpadding
  - movestack
  - pertag
  - unfloatvisible
  - vanitygaps
  - warp

## 📋 Dependencies
```sh
sudo pacman -S base-devel git xorg-server xorg-xinit xorg-xrandr xorg-xrdb libx11 libxft libxinerama imlib2

## 🛠️ Installation
Clone the repository and compile with make

```sh
git clone https://github.com/zakky20/suckless.git && \
cd suckless && \
make install  && \
sudo make install
```

## !!! DO NOT FORGET !!!
add `exec dwm` in `.xinitrc` file
