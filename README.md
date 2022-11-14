# libdemo
## Abstract
This project demonstrates symbols resoultion during linking of libraries described in [Compiling a library](https://prodev.life/compiling-a-library/).

More specifically: how a shared **wrap** library that links against a static **base** library behaves during linking of an application that also depends on a **base** library of a different version.

## How to run
Execute ```run.sh```

It will build **basev1** and **basev2** libraries. **basev1** will be used as a static library in *our_host* to build **libwrap_base_a.so**. **basev2** will be used as a static and dynamic library to compile **app_0[1234]** on *client_host* and run on *enduser_host*. **libwrap_base_a.so** will be used on *client_host* and *enduser_host* as a dynamic dependency to build and run **app_0[1234]** on *enduser_host*.


