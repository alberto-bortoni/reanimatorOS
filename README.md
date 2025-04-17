# Reanimator OS

Reanimator OS is a custom Linux distribution built using the Yocto Project. It is designed to be reproducible, modular, and tailored for x86_64 hardware platforms such as laptops or embedded PCs.

A Linux-based operating system designed exclusively for running a single ap     plication in kiosk mode on older computers.

## Features

- Based on Yocto Project (Poky)
- Custom layer: `meta-reanimator`
- Reproducible builds
- Clean structure with Git submodules
- Easy-to-use build scripts

## Repository Structure

```
reanimatorOS/
├── README.md
├── .gitignore
├── poky/                      # Yocto Project core (submodule)
├── meta-openembedded/         # Additional packages (submodule)
├── meta-reanimator/           # Custom layer for Reanimator OS
├── build/                     # Contains build configuration
│   └── conf/
│       ├── bblayers.conf
│       └── local.conf
├── scripts/                   # Build and setup scripts
│   └── setup.sh
```

## Quick Start

### 1. Clone the Repository

```bash
git clone --recurse-submodules git@github.com:alberto-bortoni/reanimatorOS.git
cd reanimatorOS
```

### 2. Set Up the Environment

```bash
./scripts/setup.sh
```

This will initialize the Yocto environment and add necessary layers.

### 3. Build the Image

```bash
bitbake reanimator-image
```

This produces a bootable ISO in:

```
build/tmp/deploy/images/genericx86-64/
```

## Flashing to USB

Use [Balena Etcher](https://www.balena.io/etcher/) to flash the generated `.iso` file to a USB drive.

Make sure Secure Boot and PTT (Platform Trust Technology) are disabled in BIOS.

## Custom Layer: `meta-reanimator`

This layer contains:

- Custom image recipe: `reanimator-image.bb`
- Additional packages and configuration

You can extend this layer with your own recipes and bbappends.

## Contributing

To propose changes, open a pull request against this repository. Make sure your changes:

- Follow Yocto best practices
- Keep the build reproducible
- Are properly documented

## License

Reanimator OS is released under the MIT License.
