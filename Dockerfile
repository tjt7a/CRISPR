FROM ubuntu:22.04
RUN echo 'APT::Install-Suggests "0";' >> /etc/apt/apt.conf.d/00-docker
RUN echo 'APT::Install-Recommends "0";' >> /etc/apt/apt.conf.d/00-docker
RUN apt-get update

# Set environmental variables
ARG DEBIAN_FRONTEND=noninteractive
ENV TZ=America/New_York

# Install build tools
RUN apt-get install -y g++ make cmake git-all pkg-config xxd libsqlite3-dev
# Install dependencies
RUN apt-get install -y python3 libboost-all-dev ragel

# Copy over files from repo
RUN mkdir CRISPR
COPY lib/ ./CRISPR/lib

# Build hscompile
RUN mkdir -p /CRISPR/lib/hscompile/lib/hyperscan_for_hscompile/build
WORKDIR /CRISPR/lib/hscompile/lib/hyperscan_for_hscompile/build
RUN cmake -DFAT_RUNTIME=off ..
RUN make

WORKDIR /CRISPR/lib/hscompile/lib/mnrl/C++
RUN make
RUN mkdir /CRISPR/lib/hscompile/build
WORKDIR /CRISPR/lib/hscompile/build
RUN cmake -DHS_SOURCE_DIR=/CRISPR/lib/hscompile/lib/hyperscan_for_hscompile -DMNRL_SOURCE_DIR=/CRISPR/lib/hscompile/lib/mnrl/C++ ..
RUN make

# Build VASim
WORKDIR /CRISPR/lib/VASim
RUN make

# CD back to root
WORKDIR /

#RUN useradd -ms /bin/bash apprunner
#USER apprunner
