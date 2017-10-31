FROM ubuntu:trusty
RUN apt-get -y update

# We use sudo so that the syzkaller create-image.sh script works
RUN apt-get install -y git gcc build-essential clang-3.8 python-pip bc libncurses5-dev
RUN cd /root && git clone https://github.com/travitch/whole-program-llvm.git
RUN cd /root/whole-program-llvm && pip install wllvm
#COPY id_rsa /root/.ssh/id_rsa
RUN ln -s /usr/bin/clang-3.8 /usr/bin/clang
RUN ln -s /usr/lib/llvm-3.8/bin/llvm-link /usr/bin/llvm-link
