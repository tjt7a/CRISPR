FROM ubuntu:22.04
RUN echo 'APT::Install-Suggests "0";' >> /etc/apt/apt.conf.d/00-docker
RUN echo 'APT::Install-Recommends "0";' >> /etc/apt/apt.conf.d/00-docker
RUN apt-get update

# Set environmental variables
ARG DEBIAN_FRONTEND=noninteractive
ENV TZ=America/New_York

# Install build tools
RUN apt-get install -y g++ make cmake git-all
# Install dependencies
RUN apt-get install -y python3 libboost-all-dev ragel

# Copy over files from repo
RUN mkdir CRISPR
COPY lib/ ./CRISPR/lib

# Build hscompile
RUN mkdir -p CRISPR/lib/hscompile/lib/hyperscan/build
WORKDIR CRISPR/lib/hscompile/lib/hyperscan/build
RUN cmake .. -DFAT_RUNTIME=off && make
#RUN cd ../../mnrl/C++
#RUN make
#RUN cd ../../../..

#RUN useradd -ms /bin/bash apprunner
#USER apprunner
